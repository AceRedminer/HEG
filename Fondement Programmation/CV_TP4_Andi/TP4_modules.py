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
             _liste_nb[idx] = i * _chiffre
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

def moyenne_liste(_liste_nb: list) -> int:
    moyenne: int = 0
    for i in _liste_nb:
        moyenne += i
    moyenne /= _liste_nb.count()
    return moyenne

def incrementer_liste(_liste_nb: list, _chiffre: int) -> None:
        idx: int = 0
        for i in _liste_nb:
             _liste_nb[idx] = i + _chiffre
             idx += 1
        affichage_liste_none(_liste_nb)

def supprimer_valeur(_liste_nb: list, _chiffre: int) -> None:
        idx: int = 0
        for i in _liste_nb:
             _liste_nb[idx] = i - _chiffre
             idx += 1
        affichage_liste_none(_liste_nb)

def indices_valeur(_liste_nb: list, _chiffre: int) -> list:
    idx: int = 0
    idx_val: list = [[]]
    for i in _liste_nb:
        idx_val[idx][0] = i
        idx_val[idx][1] = idx
        idx += 1
    return idx_val

def supprimer_doublons(_liste_nb: list) -> list:
    idx: int = 0
    unique_nb: list = []
    while idx < len(_liste_nb):
        if _liste_nb[idx] not in unique_nb:
            unique_nb.append(_liste_nb[idx])
        idx += 1
    return unique_nb


def compter_occurrences(_liste_nb: list, _chiffre: int) -> int:
    count: int = 0
    for i in _liste_nb:
        if i == _chiffre:
            count += 1
    return count
