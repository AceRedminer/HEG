def affichage_liste_none(_liste_nb: list) -> None:
    for nb in _liste_nb:
        print(nb, end=" ")
    print()

def affichage_liste_str(_liste_nb: list) -> str:
    return_str: str = ""
    for nb in _liste_nb:
        return_str += str(nb) + " "
    return return_str