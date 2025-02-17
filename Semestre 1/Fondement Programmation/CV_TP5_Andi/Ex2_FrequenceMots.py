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
    except FileNotFoundError:
        print(f"Erreur : Le fichier '{path}' est introuvable.")
        return []
    except Exception as e:
        print(f"Erreur : Une erreur s'est produite lors de la lecture du fichier : {e}")
        return []

def traitement_donnees(path: str, ignore: list) -> dict:
    dico: dict = {}
    for mot in traitement_fichier(path, ignore):
        dico = ajouter_au_dico(dico, mot)
    return dico

def ajouter_au_dico(dico: dict, mot: str) -> dict:
    if mot in dico:
        dico[mot] += 1
    else:
        dico[mot] = 1
    return dico
    
def frequence_un_mot(dico: dict, mot: str):
    frequence: int = dico.get(mot, "n'apparait pas dans la liste")
    print(f"Frequence de \"{mot}\" : {frequence}")

if __name__ == '__main__':
    path_texte = "Ressources/texte.txt"
    ignore: list = ["(", ")", ",", " ", ".", ":", "«", "»", ";", "/", "\\", "?", "!"]
    dico: int = traitement_donnees(path_texte, ignore)
    print(dico)
    mot: str = input("Quel mot souhaitez vous tester ? : ")
    frequence_un_mot(dico, mot)
