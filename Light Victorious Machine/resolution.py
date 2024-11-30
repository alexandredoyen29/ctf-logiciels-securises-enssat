#!/bin/env python3

import json, math

def trouver_valeurs_triviales(equation): # Une valeur triviale est trouvable grâce à une équation de la forme "ax + by = c" où a ou b valent 0.
    if (equation["a"] == 0):
        resultat = { equation["y"]: equation["c"] / equation["b"] }
    elif (equation["b"] == 0):
        resultat = { equation["x"]: equation["c"] / equation["a"] }
    else:
        resultat = False

    return resultat

def resoudre_equation_connaissant_une_inconnue(equation, variable_connue, valeur_connue, variable_inconnue): # Soit l'équation "ax + by = c", on connaît x ou y
    # On fait du bon gros bruteforce de gitan :)
    i = 0
    trouve = False

    while ((trouve == False) and (i <= 255)):
        if (variable_inconnue == "x"):
            if ((equation["a"] * i) + (equation["b"] * valeur_connue) == equation["c"]):
                trouve = True
            else:
                i = i + 1
        elif (variable_inconnue == "y"):
            if ((equation["a"] * valeur_connue) + (equation["b"] * i) == equation["c"]):
                trouve = True
            else:
                i = i + 1

    return { equation[variable_inconnue]: i }

solutions_json_fd = open("solutions.json")
solutions_data = json.load(solutions_json_fd)
solutions_json_fd.close()

solutions2_json_fd = open("solutions2.json")

numero_de_serie = {}

for equation in solutions_data:
    valeur_triviale = trouver_valeurs_triviales(equation)

    if (valeur_triviale != False):
        numero_de_serie.update(trouver_valeurs_triviales(equation))
        solutions_data.remove(equation)

while (len(solutions_data) > 0):
    for equation in solutions_data:
        if (equation["x"] in numero_de_serie): # Si on trouve une autre équation ayant une valeur trouvée en inconnue
            numero_de_serie.update(resoudre_equation_connaissant_une_inconnue(equation, "x", numero_de_serie[equation["x"]], "y"))
            solutions_data.remove(equation)
        elif (equation["y"] in numero_de_serie):
            numero_de_serie.update(resoudre_equation_connaissant_une_inconnue(equation, "y", numero_de_serie[equation["y"]], "x"))
            solutions_data.remove(equation)

solutions_staisfaisantes = False
i = 0

while ((solutions_staisfaisantes == False) and (i <= 126 - 33)):
    solutions2_json_fd.seek(0)
    solutions2_data = json.load(solutions2_json_fd)

    # On va fixer arg[6] à une valeur arbitraire, et vérifier si cette valeur répond à la contrainte où tous les membres du système sont dans l'intervalle des valeurs ascii classiques (Entre 33 et 126)
    valeurs_trouvees_dans_le_deuxieme_systeme = { "arg[6]": 33 + i }

    while (len(solutions2_data) > 0):
        for equation in solutions2_data:
            if (equation["x"] in valeurs_trouvees_dans_le_deuxieme_systeme):
                valeurs_trouvees_dans_le_deuxieme_systeme.update(resoudre_equation_connaissant_une_inconnue(equation, "x", valeurs_trouvees_dans_le_deuxieme_systeme[equation["x"]], "y"))
                solutions2_data.remove(equation)
            elif (equation["y"] in valeurs_trouvees_dans_le_deuxieme_systeme):
                valeurs_trouvees_dans_le_deuxieme_systeme.update(resoudre_equation_connaissant_une_inconnue(equation, "y", valeurs_trouvees_dans_le_deuxieme_systeme[equation["y"]], "x"))
                solutions2_data.remove(equation)

    for valeur in valeurs_trouvees_dans_le_deuxieme_systeme:
        if ((valeurs_trouvees_dans_le_deuxieme_systeme[valeur] >= 33) and (valeurs_trouvees_dans_le_deuxieme_systeme[valeur] <= 126)):
            solutions_staisfaisantes = True
        else:
            solutions_staisfaisantes = False

    if (solutions_staisfaisantes == False):
        i = i + 1
    else:
        numero_de_serie.update(valeurs_trouvees_dans_le_deuxieme_systeme)

solutions2_json_fd.close()

for i in range(18):
    print("arg[" + str(i) + "] = " + chr(int(numero_de_serie["arg[" + str(i) + "]"])))
