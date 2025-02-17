import TP03_modules

if __name__ == "__main__":
    combinaison_cachee: list = TP03_modules.generer_combinaison()
    TP03_modules.jeu_mm(combinaison_cachee)