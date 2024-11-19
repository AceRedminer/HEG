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

def affichage_mot_cache(_mot_cache: str, _lettres_tirees: str, _nb_erreurs_restantes: int):
    # On cree la variable qui va stocker le mot avec les lettres decouverte
    mot_lettre_tirees: str = ""
    # On parcours le mot caché et on vérifie lettre par lettre qu'elle appartient dans 
    # la liste des lettre tirés sinon on mets un tiret du bas
    a_trouver_une_lettre = False
    while _nb_erreurs_restantes != 0:
        _lettres_tirees = tirage_lettre(_lettres_tirees)

        for i in range(len(_mot_cache)):
            if _mot_cache[i] in _lettres_tirees:
                mot_lettre_tirees += _mot_cache[i]
                a_trouver_une_lettre = True
            else:
                mot_lettre_tirees += '_'
        
        if a_trouver_une_lettre == False:
            _nb_erreurs_restantes = diminuer_erreurs(_nb_erreurs_restantes)
        print(f"{_nb_erreurs_restantes} erreurs restantes")
        if _mot_cache == mot_lettre_tirees:
            print(f"Vous avez gagné en {10 - _nb_erreurs_restantes} tentatives ! Le mot était {_mot_cache}")
            break
        print(mot_lettre_tirees)
        mot_lettre_tirees = ""

def tirage_lettre(_lettres_tirees: str) -> str:
    # On récupere la lettre rentrée par l'utilisateur et on l'ajoute a la liste des lettre tirées
    lettre: str = input("Veuillez saisir une lettre : ")
    # On boucle tant que lettre apparait dans _lettres_tirees
    while lettre in _lettres_tirees:
        lettre: str = input("Veuillez saisir une lettre : ")

    _lettres_tirees += lettre
    return _lettres_tirees

def diminuer_erreurs(_nb_erreurs_restantes: int) -> int: 
    _nb_erreurs_restantes -= 1
    return _nb_erreurs_restantes

def verifier_mot(_mot_cache: str, _lettres_tirees: str) -> bool:
    for lettre in _mot_cache:
        if lettre not in _lettres_tirees:
            return False  # Si une lettre n'a pas été trouvée, pas encore gagné
    return True  # Toutes les lettres sont trouvées
