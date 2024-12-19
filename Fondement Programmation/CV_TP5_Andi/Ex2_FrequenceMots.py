def traitement_fichier(path: str, ignore: list) -> list:
    """
    Lit un fichier et retourne une liste de mots après avoir supprimé les caractères à ignorer.


    :param path: str - Chemin vers le fichier texte.
    :param ignore: list - Liste de caractères à supprimer du texte.
    :return: list - Liste de mots extraits.
    """
    try:
        with open(path, "r", encoding="utf-8") as fichier:
            contenu = fichier.read()

        #Tout mettre en lowercase
        contenu = contenu.lower()

        # Supprimer les caractères à ignorer
        for char in ignore:
            contenu = contenu.replace(char, " ")  # Remplacer chaque caractère ignoré par un espace

        # Diviser le texte en mots
        mots = contenu.split()

        return mots
        return mots
    except FileNotFoundError:
        print(f"Erreur : Le fichier '{path}' est introuvable.")
        return []
    except Exception as e:
        print(f"Erreur : Une erreur s'est produite lors de la lecture du fichier : {e}")
        return []


if __name__ == '__main__':
    path_texte = "Ressources/texte.txt"
    ignore: list = ["(", ")", ",", " ", ".", ":", "«", "»", ";", "/", "\\", "?", "!"]
