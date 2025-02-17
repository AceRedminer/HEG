def afficher_message(nom: str, message: str):
    """
    Affiche un message personnalisé avec le nom de l'utilisateur.

    Paramètres :
    nom (str) : Le nom de l'utilisateur.
    message (str) : Le message à afficher après le nom.

    Retourne :
    None
    """
    print(f"Bonjour {nom}. {message}.")

def afficher_somme(a: int, b: int):
    """
    Affiche la somme de deux entiers.

    Paramètres :
    a (int) : Le premier entier.
    b (int) : Le deuxième entier.

    Retourne :
    None
    """
    print(f"La somme de {a} et {b} est égale à {a + b}")

def verifier_signe(nombre: int):
    """
    Vérifie si un nombre est positif, négatif ou egal a zero et affiche la verification.

    Paramètres :
    nombre (int) : Le nombre à vérifier.

    Retourne :
    None
    """
    if (nombre > 0):
        print("Positif")
    elif (nombre < 0):
        print("Négatif")
    else:
        print("Zéro")
