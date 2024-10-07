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