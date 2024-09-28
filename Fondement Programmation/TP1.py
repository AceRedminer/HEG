# Conversion d'unité d'énergie

val: float = float(input("Veuillez rentrer la valeur que vous souhaitez convertir : "))
unit: str = input("Veuillez rentrer l'unité de départ : ")

if (unit == "J"):
    ftlb = val * 0.7375621493
    cal = val * 0.239006
    ev = val * 6.2415 * 10**18
    print(f"{ftlb} ft-lb ; {cal} cal; {ev} eV")
elif (unit == "ft-lb"):
    joul = val / 0.7375621493
    cal = val * 0.0003238316
    ev = val / 1.1817 * 10**-(19)
    print(f"{joul} J ; {cal} cal; {ev} eV")
elif (unit == "cal"):
    joul = val / 0.7375621493
    cal = val * 0.0003238316
    ev = val / 1.1817 * 10**-(19)
    print(f"{joul} J ; {cal} cal; {ev} eV")
else :