#!/bin/env python3

def generation_de_la_cle_pour_une_valeur_xoree(valeur_xoree):
    cle = 0x00
    valeurs_trouvees = []
    result = False

    while (cle <= 0xff):
        for valeur in valeur_xoree:
            valeurs_trouvees.append(cle ^ valeur)

        valeurs_trouvees_to_string = ""

        for char in valeurs_trouvees:
            valeurs_trouvees_to_string = valeurs_trouvees_to_string + chr(char)

        print("Valeur trouvée pour le bloc courant : (" + valeurs_trouvees_to_string + "); " + str(valeurs_trouvees))
        cle = cle + 0x01
        valeurs_trouvees = []

    return result

valeur_xoree = [0x5b, 0x47, 0x1c]

generation_de_la_cle_pour_une_valeur_xoree(valeur_xoree)
