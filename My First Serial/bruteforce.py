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
    result = False

    while ((stop == False) and (cle <= 0xff)):
        for valeur in valeur_xoree:
            valeurs_trouvees.append(cle ^ valeur)

        verification = verification_de_la_cle(cle, valeurs_trouvees)

        if (verification == True):
            valeurs_trouvees_to_string = ""

            for char in valeurs_trouvees:
                valeurs_trouvees_to_string = valeurs_trouvees_to_string + chr(char)

            print("Valeur trouvée pour le bloc courant : (" + valeurs_trouvees_to_string + "); " + str(valeurs_trouvees))

            stop = True
            result = cle
        else:
            valeurs_trouvees = []
            cle = cle + 0x01

    return result

def bruteforce(valeurs_xorees):
    cle = []

    for valeur_xoree in valeurs_xorees:
        cle.append(generation_de_la_cle_pour_une_valeur_xoree(valeur_xoree))

    return cle

valeurs_xorees = [
    [0x3b, 0x4c, 0x13, 0x19],
    [0x5b, 0x47, 0x1c],
    [0x26, 0x30, 0x27, 0x3c, 0x61, 0x39],
    [0x6d, 0x76, 0x6e, 0x61, 0x66, 0x71],
    [0x73, 0x69],
    [0x6f, 0x73],
    [0x6b, 0x6f, 0x7d, 0x77],
    [0x29, 0x3a]
]

print(bruteforce(valeurs_xorees))
