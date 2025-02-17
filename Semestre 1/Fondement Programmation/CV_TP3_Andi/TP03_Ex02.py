from TP03_mots_pendus import tirer_mot
import TP03_modules


### Déclaration et Initialisation des variables

MOT: str = tirer_mot()
lettre_tirées: str = ""
nb_erreur_restantes: int = 10

#Programme Principal
if __name__ == "__main__":
    print(MOT)
    TP03_modules.affichage_mot_cache(MOT, lettre_tirées, nb_erreur_restantes)