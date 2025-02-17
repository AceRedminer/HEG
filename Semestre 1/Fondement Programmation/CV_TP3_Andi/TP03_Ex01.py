"""
Pour cet exercice, libre à vous de choisir la méthode de votre choix pour résoudre le problème.
Définissez vos propres fonctions et variables.
"""
import TP03_modules

#Programme Principal
if __name__ == "__main__":
    nombre_choisi: int = int(input("Veuillez choisir le chiffre a tester pour savoir si il est porte-bonheur : "))
    print(f"{nombre_choisi} est un nombre porte-bonheur" if TP03_modules.test_porte_bonheur(nombre_choisi) else f"{nombre_choisi} n'est pas un nombre porte-bonheur")