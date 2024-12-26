from Ressources import basedonnees

def compte_clients(clients: list, val: float) -> int:
    compte = 0
    for client in clients:
        if client["epargne"] > float(val):
            compte += 1
    print(f"Nombre de clients avec une épargne plus élevée que CHF {val}.- : {compte}")

def moyenne(clients: list) -> float:
    moy: float = 0.0
    nb_clients: int = 0
    for client in clients:
        nb_clients += 1
        moy += client["achat_carte_credit"]
    print(f"Moyenne des achats par carte de crédit : CHF {round(moy / nb_clients, 2)}")

def diff_max_min(clients: list):
    min: int = clients[0]["retrait"]
    max: int = clients[0]["retrait"]
    for client in clients:
        if client["retrait"] < min:
            min = client["retrait"]
        elif client["retrait"] > max:
            max = client["retrait"]
    print(f"Différence entre le retrait minimum et le retrait maximum : CHF {max - min}")
            
def plus_de_gains(shares: list, nb_jours: int):
    plus_de_gain: str = shares[0][0]
    max: float = shares[0][nb_jours + 1] - shares[0][1]
    for share in shares:
        gain: float = share[nb_jours + 1] - share[1]
        if gain > max:
            plus_de_gain = share[0]
    print(f"L'action avec la plus grande différence entre le gain maximum et le gain minimum est : {plus_de_gain}")

def plus_de_gains_consec(shares: list, nb_jours: int):
    plus_de_gain_consec = ""
    max_streak = 0

    for share in shares:
        stock_name = share[0]
        prices = share[1:]
        
        streak = 0
        for i in range(1, nb_jours):
            if prices[i] > prices[i - 1]:
                streak += 1
            else:
                streak = 0
                
            if streak > max_streak:
                max_streak = streak
                plus_de_gain_consec = stock_name
    
    print(f"L'action avec la plus longue séquence de gains consécutifs est : {plus_de_gain_consec} avec une séquence de {max_streak} jours.")



if __name__ == "__main__":
    clients: list = basedonnees.get_clients()
    val: float = float(input("Choisissez le montant d'épargne pour compter les clients : "))
    compte_clients(clients, val)
    moyenne(clients)
    diff_max_min(clients)
    shares: list = basedonnees.get_shares()
    nb_jours: int = int(input("Rentrez le nombre de jours pour calculer la différence de la valeure des actions : "))
    plus_de_gains(shares, nb_jours)
    plus_de_gains_consec(shares, nb_jours)
