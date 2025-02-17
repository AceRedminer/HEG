# Conversion d'unité d'énergie

print("Conversion d'unité d'énergie")

val: float = float(input("Veuillez rentrer la valeur que vous souhaitez convertir : "))
unit: str = input("Veuillez rentrer l'unité de départ (J, ft-lb, cal, ev): ")

if (unit == "J"):
    ft_lb: float = val * 0.7375621493
    cal: float = val * 0.239006
    ev: float = val * 6.2415 * 10**18
    print(f"{ft_lb} ft-lb") 
    print(f"{cal} cal;")
    print(f"{ev} eV")
elif (unit == "ft-lb"):
    joul: float = val / 0.7375621493
    cal: float = val * 0.0003238316
    ev: float = val / 1.1817 * 10**-(19)
    print(f"{joul} J")
    print(f"{cal} cal") 
    print(f"{ev} eV")
elif (unit == "cal"):
    joul: float = val * 4184
    ft_lb: float = val * 3086
    ev: float = val * 2.611 * 10**22
    print(f"{joul} J")
    print(f"{ft_lb} ft-lb") 
    print(f"{ev} eV")
elif (unit == "ev") :
    joul: float = val * 1.602 * 10**-19
    ft_lb: float = val * 1.1817 * 10**-19
    cal: float = val / 2.611 * 10**22
    print(f"{joul} J")
    print(f"{ft_lb} ft-lb") 
    print(f"{cal} cal")
else : # Mokey proof case
    print("Vous avez séléctionné une unité inexistante, veuillez redémarrer le programme et respecter la syntaxe unitaire.")
 