import random
possibilite = [1, 2, 3, 4, 5, 6]
print("Appuyez sur ENTER pour lancer les dés")
input()

de_1 = random.choice(possibilite)
de_2 = random.choice(possibilite)
de_3 = random.choice(possibilite)

des = [de_1, de_2, de_3]

score = 0
SCORE_ATTEINDRE = 200

for i in range(2):
    print(f"[{des[0]}] [{des[1]}] [{des[2]}]")
    a_garder = int(input("Veuillez choisir la valeur à garder (1-6) : "))
    
    if des[0] == a_garder and des[1] == a_garder and des[2] == a_garder:
        if a_garder == 1:
            score += 100
        elif a_garder == 6:
            score += 60
        elif a_garder == 5:
            score += 5
        elif a_garder == 4:
            score += 4
        elif a_garder == 3:
            score += 3
        elif a_garder == 2:
            score += 2
        break
    else:
        if des[0] != a_garder:
            des[0] = random.choice(possibilite)
        if des[1] != a_garder:
            des[1] = random.choice(possibilite)
        if des[2] != a_garder:
            des[2] = random.choice(possibilite)

    print(f"Nouveau résultat des dés: [{des[0]}] [{des[1]}] [{des[2]}]")
    print(f"Score actuel: {score}")

print(f"Félicitations! Vous avez atteint un score de {score} points.")
