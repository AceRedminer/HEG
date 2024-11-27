def affichage_liste_none(_liste_nb: list) -> None:
    for nb in _liste_nb:
        print(nb, end=" ")
    print()

def affichage_liste_str(_liste_nb: list) -> str:
    return_str: str = ""
    for nb in _liste_nb:
        return_str += str(nb) + " "
    return return_str

def affichage_liste_colonne(_liste_nb: list) -> None:
    j: int = 0
    indexs: str = ""
    nb_str: str = ""
    for i in _liste_nb:
        indexs += str(j) + " | "
        nb_str += str(i) + " | " 
        j += 1
    
    print("Indice : " + indexs.rstrip(" | "))
    print("Valeur : " + nb_str.rstrip(" | "))

def multiple_liste(_liste_nb: int, _chiffre: int) -> None:
        idx: int = 0
        for i in _liste_nb:
             _liste_nb[idx] = i * 3
             idx += 1
        affichage_liste_none(_liste_nb)

def plus_petit_chiffre(_liste_nb: list):
    _liste_nb.sort()
    affichage_liste_none(_liste_nb)

def somme_impair(_liste_nb: list) -> None:
    somme_nb: int = 0
    for i in _liste_nb:
        if i % 2 != 0:
            somme_nb += i
    print(str(somme_nb))

