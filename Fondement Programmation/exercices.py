# 17.09.24

# Heure en aout
nb_heure_aout: int = 31 * 24
print(nb_heure_aout)

# 5 puissance 4
print(5**4)

# Combien de bus pour distribuer 333 personnes avec capacite max de 20
nb_bus: int = 333 % 20
print(333//20+1)

# Nombre de personne dans le dernier bus
print(nb_bus)

# Exercices Perrotte
MAX_POIDS: int = 5000
charge_initiale: float = 35 * 54.5 + 40 * 35
print(MAX_POIDS - charge_initiale)
charge_laus: float = charge_initiale + 150 * 5
print(MAX_POIDS - charge_laus)
charge_mont: float = charge_laus + 29 * 12.5
print(MAX_POIDS - charge_mont, "\n")

# Serie I
print("Somme")
x: int = int(input("X : "))
y: int = int(input("Y : "))
print(x + y, "\n")

print("Multiplication")
v: int = int(input("v : "))
w: int = int(input("w : "))
print(v * w, "\n")

print("Moyenne")
a: int = int(input("a : "))
b: int = int(input("b : "))
c: int = int(input("c : "))
print(int((a + b + c) / 3), "\n")

print("Surface")
l: int = int(input("l : "))
w: int = int(input("w : "))
print(l * w, "\n")

print("Division et reste")
x: int = int(input("X : "))
y: int = int(input("Y : "))
print(int(x / y), int(x % y), "\n")

print("Convertisseur EUR to USD")
x: float = float(input("EUR : "))
y: float = x * 1.12
print("USD : ", y, "\n")

print("Calcul aire cercle")
rayon: float = float(input("Rayon : "))
aire: float = 3.14 * rayon**2
print("Aire : ", aire, "\n")

print("Somme et produit")
x: float = float(input("X : "))
y: float = float(input("Y : "))
z: float = float(input("Z : "))
print("Somme : ", x + y + z, "\n")
print("Produit : ", x * y * z, "\n")

print("Calcul pourcentage")
x: float = float(input("X : "))
percent: float = float(input("Pourcentage : "))
print(percent, "pourcent de ", x, " est égal à ", x * percent/100, "\n")

print("Conversion secondes")
sec: int = int(input("Secondes : "))
hours: int = sec // 3600
minutes: int = sec // 60
print(sec, " en heures = ", hours, " en minutes = ", minutes, " en secondes = ", sec % 60,"\n")

print("Calcul distance parcourue")
vitesse: float = float(input("Vitesse (Km/h): "))
temps: float = float(input("Temps (Heure) : "))
distance_parcourue: float =  temps * vitesse
print("Vous avez parcouru", distance_parcourue, "Km en ", temps, "heures a une vitesse de", vitesse, "Km/h \n")

print("Périmètre rectangle")
large: float = float(input("Largeur : "))
long: float = float(input("Longeur : "))
perimetre: float = 2 * large + 2 * long
print("Le périmètre vaut :", perimetre, "\n")

print("Carré d'un nombre")
x: float = float(input("X: "))
x_square: float = x**2
print("Le carré de", x, "vaut :", x_square, "\n")

print("Volume cube")
cote_cube: float = float(input("Longeur de l'arrete : "))
volume_cube: float = cote_cube**3
print("Le volume d'un cube dont l'arrete vaut :", cote_cube, "est égale à", volume_cube, "\n")

print("TVA/TTC")
prix_ht: float = float(input("Prix hors taxe : "))
TVA: float = float(input("TVA :"))
ttc: float = prix_ht + TVA * prix_ht / 100
print("TTC : ", ttc, "\n")

print("Calcul vitesse moyenne")
distance_parcourue: float = float(input("Distance parcourue :"))
temps: float = float(input("Temps employé :"))
print("Vitesse moyenne :", distance_parcourue / temps, "\n")

# Serie 2, une fonction permet a partir d'entrée (parametre, arguments, x) de recuperer le resultat (sortie, output, y) de l'algorithme pour f(x) = y

def timesTwo(x: int):
    return x * 2 # permet de recupérer la valeur calculé dans la fonction
res_times_two = timesTwo(int(input("Rentrez un nombre pour connaitre son double : "))) # retour attendu 10
print("Le double du nombre rentré vaut", res_times_two)

def showName(name: str):
    print("Bonjour", name)
showName("Costi")

def showNameYear(name: str, birth_year: int):
    print("Bonjour", name, ", vous etes ne en", birth_year)
showName("Costi")

from datetime import datetime # Ce qu'on appelle une librairie est un fichier dans le "cloud" qui contient un certain nombre de fonction que l'on peut utiliser sur le projet en les important avec cette ligne de code

def calcOldness(birth_year: int):
    years_old:int = datetime.now().year - birth_year
    print("Vous etes né en", birth_year, ", l'age calculé est de", years_old)
calcOldness(2002)

def calcEpargne(montant: float, nb_annee: int):
    epargne_annuelle: float = montant  * 12
    epargne_totale: float = epargne_annuelle * nb_annee
    print("En épargnant", montant, "par mois, pendant ", nb_annee,", vous obtiendrez un total de", epargne_totale)
calcEpargne(100, 12)

def calcPillsBox(name: str, max_boite: int, nb_pills: int):
    nb_boite:int = max_boite // nb_pills # Retourne le résultat de la division entière
    loose_pills:int = max_boite % nb_pills # Retourne le nombre de pillule "en trop" après avoir rempli les autres boites au max
    print("Pour votre production de", nb_pills, name,", vous avez besoin de", nb_boite, "boites de capacité de", max_boite,"médicaments. Le solde de production qui ne sera pas emballé est de", loose_pills,"médicaments")
calcPillsBox("Paracetamol", 20, 256) # Sortie attendue : name = Paracetamol, nb_boite = 12, loose_pills = 16