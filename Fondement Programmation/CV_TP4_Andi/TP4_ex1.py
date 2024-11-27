import TP4_modules

liste_nb : list = [3, 12, 30, 8, 4, 9, 7, 15, 10, 1, 21, 13, 12, 27, 3, 14]

if __name__ == "__main__":
    #Do something
    print(TP4_modules.affichage_liste_str(liste_nb))
    print("------------")

    TP4_modules.affichage_liste_colonne(liste_nb)
    print("------------")

    TP4_modules.multiple_liste(liste_nb, 3)
    print("------------")

    TP4_modules.plus_petit_chiffre(liste_nb)
    print("------------")

    TP4_modules.somme_impair(liste_nb)
    print("------------")