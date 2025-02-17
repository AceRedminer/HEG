def cryptage_numerus_decalus(phrase: str) -> str:
    phrase = phrase.lower()
    resultat = ""
    for lettre in phrase:
        if lettre.isalpha():
            nb_occurrences = phrase.count(lettre)
            nouvelle_lettre = chr(((ord(lettre) - ord('a') + nb_occurrences) % 26) + ord('a'))
            resultat += nouvelle_lettre
        else:
            resultat += lettre
    return resultat

def cryptage_americain(phrase: str) -> str:
    mots = phrase.split()
    resultat = []
    for i, mot in enumerate(mots):
        mot_crypt = ""
        for j in range(len(mot)):
            if mot[j] in "aeiou":
                if j != 0:
                    mot_crypt += "us"
                mot_crypt += mot[j]
            else:
                mot_crypt += mot[j]
        resultat.append(mot_crypt)
    return " ".join(resultat)

def afficher_menu():
    print("1. Cryptage numerus decalus")
    print("2. Cryptage américain")
    print("0. Quitter")

def main():
    while True:
        afficher_menu()
        choix = input("Choisissez une option: ")
        if choix == "0":
            break
        elif choix == "1":
            phrase = input("Entrez une phrase à crypter: ")
            print("Cryptage numerus decalus : " + cryptage_numerus_decalus(phrase))
        elif choix == "2":
            phrase = input("Entrez une phrase à crypter: ")
            print("Cryptage américain : " + cryptage_americain(phrase))
        else:
            print("Choix invalide, essayez à nouveau.")

if __name__ == "__main__":
    main()
