
### Nombre porte-bonheur

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

### Jeu du Pendu ###

def affichage_mot_cache(_mot_cache: str, _lettres_tirees: str, _nb_erreurs_restantes: int):
    '''
    Affiche l'état actuel du mot à deviner, met à jour les erreurs et gère le déroulement de la partie.

    Args:
        _mot_cache (str): Le mot à deviner par le joueur.
        _lettres_tirees (str): Les lettres déjà proposées par le joueur.
        _nb_erreurs_restantes (int): Le nombre d'erreurs restantes avant la fin de la partie.

    Returns:
        None: La fonction affiche les résultats et ne retourne pas de valeur.
    '''
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
    """
    Permet au joueur de tirer une lettre et de l'ajouter à la liste des lettres tirées,
    tout en s'assurant qu'elle n'a pas déjà été proposée.

    Args:
        _lettres_tirees (str): Les lettres déjà proposées par le joueur.

    Returns:
        str: La liste mise à jour des lettres tirées, incluant la nouvelle lettre.
    """
    # On récupere la lettre rentrée par l'utilisateur et on l'ajoute a la liste des lettre tirées
    lettre: str = input("Veuillez saisir une lettre : ")
    # On boucle tant que lettre apparait dans _lettres_tirees
    while lettre in _lettres_tirees:
        lettre: str = input("Veuillez saisir une lettre : ")

    _lettres_tirees += lettre
    return _lettres_tirees

def diminuer_erreurs(_nb_erreurs_restantes: int) -> int: 
    """
    Réduit le nombre d'erreurs restantes de 1.

    Args:
        _nb_erreurs_restantes (int): Le nombre actuel d'erreurs restantes.

    Returns:
        int: Le nombre d'erreurs restantes après diminution.
    """
    _nb_erreurs_restantes -= 1
    return _nb_erreurs_restantes

def verifier_mot(_mot_cache: str, _lettres_tirees: str) -> bool:
    """
    Vérifie si toutes les lettres du mot à deviner ont été trouvées.

    Args:
        _mot_cache (str): Le mot à deviner.
        _lettres_tirees (str): Les lettres déjà proposées par le joueur.

    Returns:
        bool: True si toutes les lettres du mot ont été trouvées, False sinon.
    """
    for lettre in _mot_cache:
        if lettre not in _lettres_tirees:
            return False  # Si une lettre n'a pas été trouvée, pas encore gagné
    return True  # Toutes les lettres sont trouvées

### Black Jack ###

import random

def jeu():
    score_joueur = 0
    nb_des_lances = None
    while score_joueur < 21 and nb_des_lances != 0:
        tuple_score_de = jeu_joueur(score_joueur, 21)
        score_joueur = tuple_score_de[0]
        nb_des_lances = tuple_score_de[1]
    if score_joueur > 21:
        print(f"Vous avez perdu car vous avez dépassé 21 ({score_joueur})")
    elif nb_des_lances == 0:
        print("Vous avez arreté de jouer")
    return None

def jeu_joueur(_score_joueur: int, _objectif: int) -> tuple:
    nb_des_lances: int = int(input("Combien de dès souhaitez vous lancer ? : "))
    if nb_des_lances != 0:
        for i in range(nb_des_lances):
            de: int = random.randint(1, 6)
            print(de, end=' ')
            _score_joueur += de
        print(f"\nVotre score est de : {_score_joueur}")
    return [_score_joueur, nb_des_lances]