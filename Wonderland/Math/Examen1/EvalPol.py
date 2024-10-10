def evaluer_polynome(coefficients, x):
    """
    Évalue un polynôme en un point x.

    :param coefficients: Liste des coefficients du polynôme, du terme de plus haut degré au terme constant.
    :param x: Valeur à laquelle évaluer le polynôme.
    :return: Résultat de l'évaluation du polynôme en x.
    """
    resultat = 0
    puissance_x = 1

    for coefficient in coefficients:
        resultat += coefficient * puissance_x
        puissance_x *= x

    return resultat

# Exemple d'utilisation :
# Considérons le polynôme P(x) = 2x^3 - 3x^2 + 4x - 1
# L'indice correspond à la puissance de x
coefficients_P = [60, -2, -12, 2]
valeur_x = 3

resultat_evaluation = evaluer_polynome(coefficients_P, valeur_x)
print(f"Le polynôme évalué en x={valeur_x} donne : {resultat_evaluation}")
