# Exercice 1 : 

# Exercice 2 : Pyramide d'étoiles

nb_etage: int = int(input("Veuillez saisir le nombre d'étages que vous voulez (1 à 10): "))
nb_espace: int = 0

for i in range(nb_etage):
    nb_espace = int(nb_etage - i)
    print((nb_espace * " ") + "*" * int(i * 2 + 1))