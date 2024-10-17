n: int = int(input("Veullez rentrer un nombre N pour définir la taille du tableau : "))

for line in range(n):
    for col in range(n):
        if(line == col):
            print("O", end="")
        elif(col + line == n - 1):
            print("O", end="")
        else:
            print("X", end="")
    print("")
