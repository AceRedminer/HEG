import FPRevisionModule as FPM

"""
    Dans la continuation des exercices sur les notes (moyennes, meilleures notes, etc.)...

    Des données vous sont fournies:
    - Liste des personnes (étudiants.es)
    - Sujets des contrôles continus
    - Notes obtenues pour chaque sujet / étudiant.e
    Remarque : La note 0 indique une absence justifiée, ne pas prendre la note en compte dans les calculs

    Les besoins sont:
    - Afficher la liste des étudiants
    - Afficher la liste des sujets
    - Connaitre la liste des notes d'un.e étudiant.e
    - Connaitre le nombre de CC fait par un.e étudiant.e (nombre de notes)
    - Connaitre la liste des notes d'un CC
    - Connaitre le nombre d'étudiants.es ayant réalisé un cc
    - Connaitre la moyenne d'un.e étudiant.e
    - Connaitre la moyenne d'un CC
    - Recevoir un récapitulatif sous forme de dictionnaires avec les informations suivantes:
        - liste des CC avec leur sujet, le nombre d'étudiants.es ayant fait le cc, moyenne du cc
        - liste des étudiants avec leur prénom, nombre de cc faits, moyenne

    Créez un module avec les fonctions nécessaires pour cela
    Tester vos fonctions...

"""

# Liste des étudiants
etudiants: list = ["Emma", "Lucas", "Sophie", "Nathan", "Clara", "Gabriel", "Léa"]

# Liste des sujets
sujets: list = ["Les variables", "Les fonctions", "Les fichiers"]

# Notes obtenues (lignes = sujets, colonne = personnes)
notes: list = [
    [5, 4, 4, 3, 5, 6, 2],
    [5, 5, 0, 4, 6, 6, 3],
    [4, 4, 3, 4, 0, 6, 3]
    ]

# Afficher la liste des étudiant
FPM.afficher_etudiants(etudiants)
print()

# Afficher la liste des sujets
FPM.afficher_sujets(sujets)
print()

# Connaitre la liste des notes d'un etudiant
notes:list = FPM.connaitre_notes(etudiants, "Emma", notes)
print(notes)
