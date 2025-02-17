import TP4_modules

liste_nb: list = [3, 12, 30, 8, 4, 9, 7, 15, 10, 1, 21, 13, 12, 27, 3, 14]

if __name__ == "__main__":
    print("Affichage liste sous forme de chaîne:")
    print(TP4_modules.affichage_liste_str(liste_nb))
    print("------------")

    print("Affichage liste en colonne:")
    TP4_modules.affichage_liste_colonne(liste_nb)
    print("------------")

    print("Multiplication des éléments par 3:")
    TP4_modules.multiple_liste(liste_nb, 3)
    print("------------")

    print("Liste triée avec le plus petit chiffre:")
    TP4_modules.plus_petit_chiffre(liste_nb)
    print("------------")

    print("Somme des nombres impairs:")
    TP4_modules.somme_impair(liste_nb)
    print("------------")

    print("Moyenne des éléments de la liste:")
    print(TP4_modules.moyenne_liste(liste_nb))
    print("------------")

    print("Liste sans doublons:")
    print(TP4_modules.supprimer_doublons(liste_nb))
    print("------------")

    print("Occurrences du chiffre 12:")
    print(TP4_modules.compter_occurrences(liste_nb, 12))
    print("------------")
