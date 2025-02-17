import random as rnd

def creer_matrice(n: int, m: int) -> list:
    matrice: list = []
    for i in range(n):
        ligne: list = []
        for j in range(m):
            # On remplit la matrice ligne par ligne
            ligne.append(rnd.randint(1, 9))
        matrice.append(ligne)
    return matrice

def parcourir_et_modifier(matrice: list) -> list:
    matrice_copy = [li[:] for li in matrice]
    for li in range(len(matrice_copy)):
        for col in range(len(matrice_copy[li])):
            if matrice_copy[li][col] % 2 == 0:
                matrice_copy[li][col] -= 1
            elif matrice_copy[li][col] != 9:
                matrice_copy[li][col] += 2
    return matrice_copy

def afficher_matrices(matrice_initiale: list, matrice_finale: list) -> None:
    print("Matrice initiale:")
    for li in matrice_initiale:
        print(li)
    print("\nMatrice modifiée:")
    for li in matrice_finale:
        print(li)

if __name__ == '__main__':
    matrice: list = creer_matrice(5, 5)
    matrice_modifiee: list = parcourir_et_modifier(matrice)
    afficher_matrices(matrice, matrice_modifiee)
