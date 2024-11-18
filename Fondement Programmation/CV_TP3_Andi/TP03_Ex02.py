from TP03_mots_pendus import tirer_mot
import TP03_modules


### Déclaration et Initialisation des variables

MOT: str = tirer_mot()


#Programme Principal
if __name__ == "__main__":
    print(MOT)
    lettres_entree: str = input("Veuillez rentrer une lettre a essayer : ")
    TP03_modules.affichage_mot_cache(MOT, lettres_entree, 10)