# 17.09.24
'''
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
TVA: float = float(input("TVA : "))
ttc: float = prix_ht + TVA * prix_ht / 100
print("TTC : ", ttc, "\n")

print("Calcul vitesse moyenne")
distance_parcourue: float = float(input("Distance parcourue : "))
temps: float = float(input("Temps employé : "))
print("Vitesse moyenne :", distance_parcourue / temps, "\n")

# Serie 2, une fonction permet a partir d'entrée (parametre, arguments, x) de recuperer le resultat (sortie, output, y) de l'algorithme pour f(x) = y

def times_two(x: int):
    return x * 2 # permet de recupérer la valeur calculé dans la fonction
res_times_two = times_two(int(input("Rentrez un nombre pour connaitre son double : "))) # retour attendu 10
print("Le double du nombre rentré vaut", res_times_two)

def show_name(name: str):
    print("Bonjour", name)
show_name("Costi")

def show_name_year(name: str, birth_year: int):
    print("Bonjour", name, ", vous etes ne en", birth_year)
show_name_year("Costi", 2002)

from datetime import datetime # Ce qu'on appelle une librairie est un fichier dans le "cloud" qui contient un certain nombre de fonction que l'on peut utiliser sur le projet en les important avec cette ligne de code

def calc_oldness(birth_year: int):
    years_old:int = datetime.now().year - birth_year
    print("Vous etes né en", birth_year, ", l'age calculé est de", years_old)
calc_oldness(2002)

def calc_epargne(montant: float, nb_annee: int):
    epargne_annuelle: float = montant  * 12
    epargne_totale: float = epargne_annuelle * nb_annee
    print("En épargnant", montant, "par mois, pendant ", nb_annee,",ans vous obtiendrez un total de", epargne_totale)
calc_epargne(100, 12)

def calc_pills_box(name: str, max_boite: int, nb_pills: int):
    nb_boite:int = nb_pills // max_boite # Retourne le résultat de la division entière
    loose_pills:int = nb_pills % max_boite # Retourne le nombre de pillule "en trop" après avoir rempli les autres boites au max
    print("Pour votre production de", nb_pills, name,", vous avez besoin de", nb_boite, "boites de capacité de", max_boite,"médicaments. Le solde de production qui ne sera pas emballé est de", loose_pills,"médicaments")
calc_pills_box("Paracetamol", 20, 256) # Sortie attendue : name = Paracetamol, nb_boite = 12, loose_pills = 16

# 24.09.24
# Serie 3

import random

def verif_age(age: int):
    return 'Tu es majeur' if age >= 18 else 'Tu es mineur'
print(verif_age(16))

def compare_numbers(a: int, b: int):
    return 'Le premier nombre est plus petit que le deuxième' if a < b else ('Le premier nombre est plus grand que le deuxième' if a > b else 'Les deux nombres sont égaux')
print(compare_numbers(10, 13))

def is_promoted(a: int, b: int, c: int):
    moyenne_calculee = (a + b + c) / 3
    return f'Bravo, vous avez réussi votre module avec une moyenne de {moyenne_calculee}' if moyenne_calculee >= 4 else (f'Dommage, vous êtes en rattrapage avec votre moyenne de {moyenne_calculee}' if 3.5 < moyenne_calculee < 4 else f'Oups, vous avez échoué le module avec une moyenne de {moyenne_calculee}') 
print(is_promoted(4, 5, 6))

solde = 1000 #On declare et assigne le solde en dehors de la fonction afin que le solde ne se remettre pas a la valeur initiale a chaque appel de fonction
def bancomat(name: str, mdp: str, montant: float):
    global solde
    EXPECTED_NAME = "Costi"
    EXPECTED_MDP = "123"
    if(name == EXPECTED_NAME and mdp == EXPECTED_MDP and montant <= solde):
        solde -= montant
        print(f"Le montant de montant-désiré va être distribué, le nouveau solde de votre compte est : {solde}")
    elif(montant > solde):
        print("Le solde de votre compte n’est pas suffisant")
    else:
        print("Il n’a pas été possible de vous authentifier")

bancomat("Costi", "123", 500)


has_found: bool = False

def find_number(guess: int, answer: int, has_found: bool):
    has_found
    if(guess < answer) :
        print("La réponse est plus grande")
    elif(guess > answer) :
        print("La réponse est plus petite")
    else :
        print("BRAVOOOOOO")
        has_found = True

MIN_VAL: int = 0
MAX_VAL: int = 100
answer: int = random.randint(MIN_VAL, MAX_VAL)

while has_found != False:
    guess: int = int(input("Veuillez rentrer un nombre : "))
    if (has_found == False):
        find_number(guess, answer, has_found)
    else:
        break
    
# Serie 4

'''
'''
Exercices : 
- Pseudo-Code : 
    - DEBUT
    - Demander le prix de 3 articles
    - Calculer remise de 10% SI total des articles dépasse 100%
    - Appliquer une taxe de 8.1%
    - Affiche le prix total final
    - FIN
'''
'''

# Serie 5
def test_escalade():
    ESCALADE: int = 1602
    annee_user: int = int(input("Veuillez rentrer la date de l'escalade"))

    if (annee_user == ESCALADE):
        print("C'est booooon !")
    elif (annee_user == ESCALADE + 5 or annee_user == ESCALADE - 5):
        print("Presque, t'es proche wolla")
    else:
        print("Noooooon t'a pas suivi en primaire frérot")
        
def f_c_c():
    choix_user: int = int(input("Choisi Feuille Caillou ou Ciseaux (1, 2, 3) : "))
    choix_ordi: int = random.randint(1, 3)
    
    choix_type: str = 0
    
    match choix_user:
        case 1:
            choix_type = "Feuille"
        case 2:
            choix_type = "Caillou"
        case 3:
            choix_type = "Ciseaux"
    
    print(f"User = {type}")
    
    ordi_type: str = 0
    
    match choix_ordi:
        case 1:
            ordi_type = "Feuille"
        case 2:
            ordi_type = "Caillou"
        case 3:
            ordi_type = "Ciseaux"
    
    print(f"User = {choix_type}")
    print(f"Ordi = {ordi_type}")

# Serie 6

# Exercice 1

ESCALADE: int = 1602
proposition: int = int(input("Essayez de deviner l'année de l'Escalade : "))

while(proposition != ESCALADE):
    print("C'est faux ! Reesayez")
    proposition = int(input("Essayez de deviner l'année de l'Escalade : "))

print("Bravo !")

# Exercice 2

i: int = 0

while(i != 10):
    i += 1
    print(i)

print("")
# Exercice 3

j: int = 101

while(j != 50):
    j -= 1
    print(j)
    
# Exercice 4

debut: int = int(input("Valeure initiale : "))
fin: int = int(input("Valeure finale : "))

if(debut < fin):
    while(debut <= fin):
        print(debut)
        debut += 1
elif(debut > fin):
    while(debut >= fin):
        print(debut)
        debut -= 1


# Exerice 5

n: int = int(input("Rentrez un nombre pour calculer la suite arithmétique n : "))
i: int = 0
sommme: int = 0
while i < n:
    i += 1
    sommme += i
print(f"Pour {n} la somme arithémtique vaut {sommme}")


# Exerice 6

debut: int = int(input("Valeure initiale : "))
fin: int = int(input("Valeure finale : "))
somme: int = 0
while(debut < fin):
    if(debut % 2 == True):
        debut += 1
        somme += debut
    else:
        debut += 1
            
print(somme)

# Exercice FOR

for chiffre in [1, 2, 3, 4, 5]:
    print(chiffre, chiffre * 2, "pair" if chiffre % 2 == 0 else "impair", "pair" if (chiffre * 2) % 2 == 0 else "impair")
    
print("-----------------------------")

for chiffre in range(1, 101, 1):
    print(chiffre, chiffre * 2, "pair" if chiffre % 2 == 0 else "impair", "pair" if (chiffre * 2) % 2 == 0 else "impair")
    

nb_plats: int  = int(input("Combien de plats voulez-vous ajouter par catégorie de plats ? "))

entree: str = ""
plats: str = ""
dessert: str = ""
digestif: str = ""

print("\n== Entrée ==")
for i in range(nb_plats):
    a: int = i+1
    entree += input(f"Plat {a} catégorie Entrée : ") + '\n'
print("\n== Plats ==")
for i in range(nb_plats):
    a: int = i+1
    plats += input(f"Plat {a} catégorie Plats : ") + '\n'
print("\n== Desserts ==")
for i in range(nb_plats):
    a: int = i+1
    dessert += input(f"Plat {a} catégorie Dessert : ") + '\n'
print("\n== Digestif ==")
for i in range(nb_plats):
    a: int = i+1
    digestif += input(f"Plat {a} catégorie Digestif : ") + '\n'

print("\n== Entrée ==")
print(entree)

print("== Plats ==")
print(plats)

print("== Dessert ==")
print(dessert)

print("== Digestif ==")
print(digestif)
    
veux_un_cafe: bool = bool(input("Voulez-vous un café (0 pour oui, 1 pour non) ? : "))

if veux_un_cafe == 1:
    print("Prends ton cafe batard")
else:
    print("Vas y je le boit moi")
   
import math  
   
nb: int = 9
    
for line in range(nb):
    for column in range(nb):
        if line == column or line + column == nb-1 or math.ceil(line == nb/2) or math.ceil(column == nb/2):
            print("X", end="")
        else:
            print(".", end="")
    print("")

mot: str = input("Veuillez saisir un mot : ")
lettre: str = input("Veuillez saisir une lettre : ")
compteur_maj: int = 0
compteur_min: int = 0


for l in mot:
    if l == lettre.lower():
        compteur_min += 1
    elif l == lettre.upper():
        compteur_maj += 1
        
print(f"Nombre de fois ou {lettre} apparait : en maj {compteur_maj}, en min {compteur_min}")

# Serie Fonction et Procédures
'''
import modules_perso
'''
# EX 1
modules_perso.afficher_message("Alice", "Bonne journée !")

# EX 2
modules_perso.afficher_somme(4, 2)

# EX 3
modules_perso.verifier_signe(100)
'''



