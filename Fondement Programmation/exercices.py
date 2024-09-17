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
print(int(x / y), int(x % y))
