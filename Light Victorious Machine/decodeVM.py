#!/bin/env python3

import json, re

def op_code_vers_nom(op_code : int) -> str:
	op_codes = {
		0:	"PUSH",
		1:	"STO",
		2:	"LOAD",
		3:	"PUSH_VAL_SP_PLUS_VAL_SP_PLUS_1",
		4:	"PUSH_VAL_SP_MUL_VAL_SP_PLUS_1",
		5:	"VERIF_ARG"
	}

	return op_codes.get(op_code, "__UNKNOWN__")

def calcul_du_nombre_d_espaces_pour_l_affichage(valeur_a_gauche : str, nombre_de_caracteres_de_la_chaine_au_total : int) -> str:
	nombre_d_espaces_a_rajouter = nombre_de_caracteres_de_la_chaine_au_total - len(valeur_a_gauche)
	espaces = " " * nombre_d_espaces_a_rajouter

	return valeur_a_gauche + espaces

def afficher_le_code_assembleur(vm_prog_data : dict) -> None:
	i = 0

	for operation in vm_prog_data:
		op_code = operation["opCode"]
		op_code_str = op_code_vers_nom(op_code)
		valeur = operation["valeur"]

		if (re.match(r"argv.*", valeur) == None):
			valeur = int(valeur, 16)
	
			if (((op_code == 1) or (op_code == 2)) and (valeur < 0x12)):	# Si on pousse ou on retire un élément de argv
				valeur_str = hex(valeur) + " (argv[" + hex(valeur) + "])"
			else:
				valeur_str = hex(valeur)
	
			print(calcul_du_nombre_d_espaces_pour_l_affichage(op_code_str, 50) + valeur_str)
		else:
			print(calcul_du_nombre_d_espaces_pour_l_affichage(op_code_str, 50) + valeur)

		if (i == 35):
			print("----------------------------------------------------------------------")
		elif ((i > 35) and (i % 10 == 5)):
			print("----------------------------------------------------------------------")

		i = i + 1

def complement_a_deux(valeur : int, nombre_de_bits : int) -> int:
	resultat = valeur

	if ((valeur & (1 << (nombre_de_bits - 1))) != 0): # if sign bit is set e.g., 8bit: 128-255
		resultat = valeur - (1 << nombre_de_bits) # compute negative value

	return resultat

vm_prog_json_fd = open("vmProg.json")
vm_prog_data = json.load(vm_prog_json_fd)
vm_prog_json_fd.close()

afficher_le_code_assembleur(vm_prog_data)

indice_operation_courante = 0
numero_de_serie = [0 for i in range(18)]

# z = u * a_i + v * a_j où (i, j) sont dans [|0; 18[|^2
u = 0
u_modifie = False
v = 0
i = 0
i_modifie = False
j = 0

for operation in vm_prog_data:
	if (indice_operation_courante > 35):	# On ignore le préambule où l'on charge argv[1]
		op_code_str = op_code_vers_nom(operation["opCode"])

		if (op_code_str == "PUSH"):
			if (u_modifie == False):
				u = complement_a_deux(int(operation["valeur"], 16), 32)

				print("u = " + hex(u) + " " + str(u))

				u_modifie = True
			else:
				v = complement_a_deux(int(operation["valeur"], 16), 32)

				print("v = " + hex(v) + " " + str(v))
		elif ((op_code_str == "LOAD") and (int(operation["valeur"], 16) < 0x12)):
			if (i_modifie == False):
				i = int(operation["valeur"], 16)
				i_modifie = True

				print("i = " + str(i))
			else:
				j = int(operation["valeur"], 16)
				print("j = " + str(j))
		elif (op_code_str == "VERIF_ARG"):
			z = int(operation["valeur"], 16)
			print("z = " + hex(z) + " " + str(z))
		
		if (indice_operation_courante % 10 == 5):	# On a fini la section courante
			u = 0
			u_modifie = False
			v = 0
			i = 0
			i_modifie = False
			j = 0
			print("---------------------------------")

	indice_operation_courante = indice_operation_courante + 1
