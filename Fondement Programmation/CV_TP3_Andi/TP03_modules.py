def test_porte_bonheur(_nombre_choisi: int) -> bool:
    nb_str: str = str(_nombre_choisi)
    nb_tmp: int = _nombre_choisi
    while(nb_tmp > 10):
        nb_chiffre: int = len(nb_str)
        nb_tmp = 0
        for i in range(nb_chiffre):
            print(nb_str[i] + "^2 = " + str(int(nb_str[i])**2))
            nb_tmp += int(nb_str[i])**2
        print("Nouveau nombre : " + str(nb_tmp))
        nb_str = str(nb_tmp)
    return nb_tmp < 10

def affichage_mot_cache(_mot_cache: str, _lettres_tires: str, _nb_erreurs_restantes: int):
    mot_lettre_tires: str = ""
    for i in range(len(_mot_cache)):
        check_lettre: tuple = trouver_lettre(_mot_cache[i], _lettres_tires)
        if(check_lettre[0]):
            mot_lettre_tires += check_lettre[1]
        else:
            mot_lettre_tires += '_'
    print(mot_lettre_tires)

def tirage_lettre(_lettre_tires: str):
    lettre: str = input("Veuillez saisir une lettre : ")
    while(trouver_lettre(lettre, _lettre_tires)[0] == True):
        lettre: str = input("Veuillez saisir une lettre : ")
        
def trouver_lettre(lettre, liste):
    for mot in liste:
        if lettre in mot:
            return (True, lettre)
    return (False, None)
