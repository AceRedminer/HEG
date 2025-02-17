import random

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

OBJECTIF: int = 21

def jeu():
    score_joueur: int = 0
    score_ordi: int = 0
    nb_des_lances: int = None
    nb_des_lances_ordi: int = None
    while score_joueur < 21 and nb_des_lances != 0:
        tuple_score_de: tuple = jeu_joueur(score_joueur, OBJECTIF)
        score_joueur = tuple_score_de[0]
        nb_des_lances = tuple_score_de[1]
        print()
        tuple_score_de_ordi: tuple = jeu_ordinateur(score_ordi, OBJECTIF)
        score_ordi = tuple_score_de_ordi[0]
        nb_des_lances = tuple_score_de_ordi[1]
        print()
    if score_joueur > 21 or nb_des_lances == 0:
        affichage_resulat(score_joueur, score_ordi, OBJECTIF)

def jeu_joueur(_score_joueur: int, _objectif: int) -> tuple:
    nb_des_lances: int = int(input("Combien de dès souhaitez vous lancer ? : "))
    if nb_des_lances != 0:
        for i in range(nb_des_lances):
            de: int = random.randint(1, 6)
            print(de, end=' ')
            _score_joueur += de
        print(f"\nVotre score est de : {_score_joueur}")
    return [_score_joueur, nb_des_lances]

import random

def jeu_ordinateur(_score_ordi: int, _objectif: int) -> tuple:
    if _score_ordi < 6:
        nb_des_lances: int = 3
    elif 6 <= _score_ordi < 12:
        nb_des_lances: int = 2
    elif 12 <= _score_ordi < 18:
        nb_des_lances: int = 1
    else:
        return _score_ordi, 0
    
    print(f"L'ordinateur a choisi {nb_des_lances} dés.")
    
    for i in range(nb_des_lances):
        de: int = random.randint(1, 6)
        _score_ordi += de
    
    print(f"L'ordinateur a maintenant un score de {_score_ordi}.")
    
    return _score_ordi, nb_des_lances


def affichage_resulat(_score_joueur: int, _score_ordi: int, _objectif: int) -> None:
    if _score_joueur > _objectif and _score_ordi > _objectif:
        print(f"Vous avez perdu car vous avez dépassé {_objectif} ({_score_joueur})")
        print(f"Rassurez-vous l'ordinateur a pas fait mieux ({_score_ordi}).")
    elif (_score_joueur > _objectif or _score_joueur < _score_ordi) and _score_ordi <= _objectif:
        print(f"Vous avez perdu ({_score_joueur}) contre l'ordinateur ({_score_ordi})")
    elif _score_joueur <= _objectif and _score_ordi < _score_joueur or _score_ordi > _objectif:
        print(f"Vous avez gagné ({_score_joueur}) contre l'ordinateur ({_score_ordi})")
    elif _score_joueur == _score_ordi:
        print(f"Egalite ! ({_score_joueur})")

## MasterMind ##

def generer_combinaison() -> list:
    """
    Génère une combinaison aléatoire de 4 couleurs parmi la liste prédéfinie.
    
    Returns:
        list: La combinaison secrète générée.
    """
    couleurs: list = ["Rouge", "Vert", "Bleu", "Orange", "Jaune", "Brun"]
    combinaison: list = []
    for i in range(4):
        couleur: str = random.choice(couleurs)
        combinaison.append(couleur)
    return combinaison

def jeu_mm(_combinaison_cachee: list) -> None:
    """
    Gère le déroulement du jeu de Mastermind jusqu'à ce que le joueur gagne
    ou dépasse le nombre d'essais.

    Args:
        _combinaison_cachee (list): La combinaison secrète que le joueur doit deviner.

    Returns:
        None
    """
    essais_restants: int = 12
    while essais_restants > 0:
        suggestion: list = suggestion_joueur()
        print(suggestion)
        resultat: list = comparaison(suggestion, _combinaison_cachee)
        print(resultat)
        if resultat == ["Noir", "Noir", "Noir", "Noir"]:
            print(f"Vous avez trouvé ! Bravo !")
            return
        essais_restants -= 1
        print(f"Il vous reste {essais_restants} essais.")
    print(f"Dommage ! Vous avez perdu. La combinaison secrète était : {_combinaison_cachee}")

def suggestion_joueur() -> list:
    """
    Demande au joueur de proposer une combinaison de 4 couleurs.

    Returns:
        list: La liste des couleurs proposées par le joueur.
    """
    couleurs_valides: list = ["Rouge", "Vert", "Bleu", "Orange", "Jaune", "Brun"]
    proposition: list = []
    while len(proposition) < 4:
        couleur: str = input(f"Veuillez choisir une couleur ({', '.join(couleurs_valides)}) : ").capitalize()
        if couleur in couleurs_valides:
            proposition.append(couleur)
        else:
            print("Couleur invalide, veuillez réessayer.")
    return proposition

def comparaison(_suggestion_joueur: list, _combinaison_cachee: list) -> list:
    """
    Compare la suggestion du joueur à la combinaison cachée et retourne les pions
    Noirs et Blancs correspondant.

    Args:
        _suggestion_joueur (list): La combinaison proposée par le joueur.
        _combinaison_cachee (list): La combinaison secrète.

    Returns:
        list: Les pions Noirs et Blancs indiquant la précision de la suggestion.
    """
    noirs: int = 0
    for i in range(4):
        if _suggestion_joueur[i] == _combinaison_cachee[i]:
            noirs += 1

    reste_suggestion: list = []
    reste_cachee: list = []
    for i in range(4):
        if _suggestion_joueur[i] != _combinaison_cachee[i]:
            reste_suggestion.append(_suggestion_joueur[i])
            reste_cachee.append(_combinaison_cachee[i])

    blancs: int = 0
    for couleur in set(reste_suggestion):
        if couleur in reste_cachee:
            blancs += min(reste_suggestion.count(couleur), reste_cachee.count(couleur))

    resultat: list = []
    for i in range(noirs):
        resultat.append("Noir")
    for i in range(blancs):
        resultat.append("Blanc")

    return resultat
