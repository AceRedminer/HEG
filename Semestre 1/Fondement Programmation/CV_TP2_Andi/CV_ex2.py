import math

zombies: int = int(input("Saisir le nombre de Zombies au départ : "))
humains: int = int(input("Saisir le nombre de Humains au départ : "))
zombies_tue: int = int(zombies * 20 / 100)
humains_ne: int = int(humains * 1 / 100)
année: int = 2018

while(année <= 2022):
    print(f"------{année}------")
    humains -=  math.floor(int(humains * 20 / 100))
    print(f"Nombre de Humains : {humains}")
    zombies += math.floor(int(zombies * 20 / 100) + int(humains * 20 / 100))
    print(f"Nombre de Zombies : {zombies}")
    zombies_tue = math.floor(int(zombies * 20 / 100))
    print(f"Nombre de Zombies tué : {zombies_tue}")
    humains_ne += math.floor(int(humains * 1 / 100))
    print(f"Nombre de Humains nés  : {humains_ne}")
    zombies -= zombies_tue
    année += 1



