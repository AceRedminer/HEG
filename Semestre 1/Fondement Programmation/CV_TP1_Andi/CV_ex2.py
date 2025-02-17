# Distributeur de boissons    

print("Distributeur de boissons")

    
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