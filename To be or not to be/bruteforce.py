#!/bin/env python3

def verification_de_la_cle(cle, valeurs_trouvees):
    cle_calculee = 0x00

    for i in range(len(valeurs_trouvees)):
        cle_calculee = cle_calculee ^ valeurs_trouvees[i]

    if (cle == cle_calculee):
        result = True
    else:
        result = False

    return result

def generation_de_la_cle_pour_une_valeur_xoree(valeur_xoree):
    cle = 0x00
    stop = False
    valeurs_trouvees = []

    while ((stop == False) and (cle <= 0xff)):
        for valeur in valeur_xoree:
            valeurs_trouvees.append(cle ^ valeur)

        verification = verification_de_la_cle(cle, valeurs_trouvees)

        if (verification == True):
            valeurs_trouvees_to_string = ""

            for char in valeurs_trouvees:
                valeurs_trouvees_to_string = valeurs_trouvees_to_string + chr(char)

            print("Numéro de série trouvé : " + valeurs_trouvees_to_string)

            stop = True
            result = cle
        else:
            valeurs_trouvees = []
            cle = cle + 0x01

    return result

def bruteforce(valeurs_xorees):
    cle = generation_de_la_cle_pour_une_valeur_xoree(valeurs_xorees)
    return cle

valeurs_xorees = [0x2d, 0x3a, 0x28, 0x35, 0x36, 0x7e, 0x3c, 0x11, 0x27, 0x7b, 0x11, 0x20, 0x01, 0x3a, 0x11, 0x2f, 0x11, 0x2d, 0x3c, 0x17, 0x3e, 0x3a, 0x21, 0x11, 0x0f, 0x22, 0x29, 0x21, 0x3c, 0x7f, 0x3a, 0x26, 0x23, 0x33]

print(bruteforce(valeurs_xorees))
