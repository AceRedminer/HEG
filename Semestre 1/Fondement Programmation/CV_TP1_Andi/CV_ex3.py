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
