# Dans le cadre de la réalistion de ce TP j'ai utilisé ChatGpt pour valider mon code ainsi que pour m'assurer que j'utilisais bien les normes imposé a l'école, la logique les if else et tout le reste ont été réalisé a la mano par mes soins 

# Conversion d'unité d'énergie

print("Conversion d'unité d'énergie")

val: float = float(input("Veuillez rentrer la valeur que vous souhaitez convertir : "))
unit: str = input("Veuillez rentrer l'unité de départ (J, ft-lb, cal, ev): ")

if (unit == "J"):
    ft_lb: float = val * 0.7375621493
    cal: float = val * 0.239006
    ev: float = val * 6.2415 * 10**18
    print(f"{ft_lb} ft-lb") 
    print(f"{cal} cal;")
    print(f"{ev} eV")
elif (unit == "ft-lb"):
    joul: float = val / 0.7375621493
    cal: float = val * 0.0003238316
    ev: float = val / 1.1817 * 10**-(19)
    print(f"{joul} J")
    print(f"{cal} cal") 
    print(f"{ev} eV")
elif (unit == "cal"):
    joul: float = val * 4184
    ft_lb: float = val * 3086
    ev: float = val * 2.611 * 10**22
    print(f"{joul} J")
    print(f"{ft_lb} ft-lb") 
    print(f"{ev} eV")
elif (unit == "ev") :
    joul: float = val * 1.602 * 10**-19
    ft_lb: float = val * 1.1817 * 10**-19
    cal: float = val / 2.611 * 10**22
    print(f"{joul} J")
    print(f"{ft_lb} ft-lb") 
    print(f"{cal} cal")
else : # Mokey proof case
    print("Vous avez séléctionné une unité inexistante, veuillez redémarrer le programme et respecter la syntaxe unitaire.")
    
# ----------------------------   

# Risque Cardiovasculaire    

print("Risque Cardiovasculaire")

    
print("\nBonjour, voici les articles a disposition : \n 1. Fanta Orange \n 2. Coca Cola \n 3. Coca Cola Light \n 4. Henniez \n 5. Ice Tea \n 6. Limonade")
montant: float = float(input("Veuillez rentrer le montant a disposition : "))
num_article: int = int(input("Veuillez selectionner l'article souhaité : "))

PRIX_1 = 2.9
PRIX_2 = 2.9
PRIX_3 = 2.7
PRIX_4 = 2.3
PRIX_5 = 2.2
PRIX_6 = 1.9

reste: float = 0.0
produit: str = ""

match num_article:
    case 1:
        if(montant < PRIX_1): print("Montant insuffisant")
        else:
            reste: float = montant - PRIX_1
        produit = "Fanta Orange"
    case 2:
        if(montant < PRIX_2): print("Montant insuffisant")
        else:
            reste: float = montant - PRIX_2
        produit = "Coca Cola"
    case 3: 
        if(montant < PRIX_3): print("Montant insuffisant")
        else:
            reste: float = montant - PRIX_3
        produit = "Coca Cola Light"
    case 4: 
        if(montant < PRIX_4): print("Montant insuffisant")
        else:
            reste: float = montant - PRIX_4
        produit = "Henniez"
    case 5:
        if(montant < PRIX_5): print("Montant insuffisant")
        else:
            reste: float = montant - PRIX_5
        produit = "Ice Tea"
    case 6:
        if(montant < PRIX_6): print("Montant insuffisant")
        else:
            reste: float = montant - PRIX_6
        produit = "Lemonade"
    case _:
        print("Veuillez choisir un article present dans le distributeur, relancez l'opération")
        exit()
        
print(f"Reste : {reste}")
print(f"{produit} servi, Santé/Salute/Prost ! \n")

# ----------------------------   

# Risque Cardiovasculaire

print("Risque Cardiovasculaire")


age: int = int(input("Veuillez entrer votre âge : "))
sexe: bool = input("Êtes-vous un homme ? (h/f) : ").lower() == "h"
fumeur: bool = input("Êtes-vous fumeur ? (oui/non) : ").lower() == "oui"
sport: bool = input("Pratiquez-vous du sport ? (oui/non) : ").lower() == "oui"
sucre: bool = input("Avez-vous une alimentation trop sucrée ? (oui/non) : ").lower() == "oui"

risque: int = 0

if fumeur:
    risque += 2

if sport:
    risque -= 1

if sexe and age > 50:
    risque += 1

if not sexe and age > 60:
    risque += 1

if sucre:
    risque += 2

if risque <= 1:
    print("Votre niveau de risque cardiovasculaire est faible. \n")
elif 2 <= risque <= 3:
    print("Votre niveau de risque cardiovasculaire est élevé. \n")
else:
    print("Votre niveau de risque cardiovasculaire est très élevé. \n")

# ------------------------------

# Année Bissextile
print("Année Bissextile")

jour: int = int(input("Veuillez entrer le jour (1-31) : "))
mois: int = int(input("Veuillez entrer le mois (1-12) : "))
annee: int = int(input("Veuillez entrer l'année : "))

bissextile: bool = False
if annee % 4 == 0:
    if annee % 100 == 0:
        if annee % 400 == 0:
            bissextile = True
    else:
        bissextile = True

# Jours dans chaque mois, logique trouvé avec ChatGpt, uniquement pour cette partie
jours_par_mois = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
# ----------------------------------------------------------------

if bissextile:
    jours_par_mois[1] = 29

if 1 <= mois <= 12 and 1 <= jour <= jours_par_mois[mois - 1]:
    print(f"La date {jour}/{mois}/{annee} est valide.")
else:
    print(f"La date {jour}/{mois}/{annee} est invalide.")

