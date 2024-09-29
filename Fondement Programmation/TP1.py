# Conversion d'unité d'énergie

val: float = float(input("Veuillez rentrer la valeur que vous souhaitez convertir : "))
unit: str = input("Veuillez rentrer l'unité de départ (J, ft-lb, cal, ev): ")

if (unit == "J"):
    ft_lb = val * 0.7375621493
    cal = val * 0.239006
    ev = val * 6.2415 * 10**18
    print(f"{ft_lb} ft-lb") 
    print(f"{cal} cal;")
    print(f"{ev} eV")
elif (unit == "ft-lb"):
    joul = val / 0.7375621493
    cal = val * 0.0003238316
    ev = val / 1.1817 * 10**-(19)
    print(f"{joul} J")
    print(f"{cal} cal") 
    print(f"{ev} eV")
elif (unit == "cal"):
    joul = val * 4184
    ft_lb = val * 3086
    ev = val * 2.611 * 10**22
    print(f"{joul} J")
    print(f"{ft_lb} ft-lb") 
    print(f"{ev} eV")
elif (unit == "ev") :
    joul = val * 1.602 * 10**-19
    ft_lb = val * 1.1817 * 10**-19
    cal = val / 2.611 * 10**22
    print(f"{joul} J")
    print(f"{ft_lb} ft-lb") 
    print(f"{cal} cal")