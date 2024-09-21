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