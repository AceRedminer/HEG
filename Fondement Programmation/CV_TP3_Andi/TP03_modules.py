def test_porte_bonheur(_nombre_choisi: int) -> bool:
    nb_str: str = str(_nombre_choisi)
    nb_tmp: int = _nombre_choisi
    while(nb_tmp > 10):
        nb_chiffre: int = len(nb_str)
        nb_tmp = 0
        for i in range(nb_chiffre):
            print(nb_str[i] + "^2 = " + str(int(nb_str[i])**2))
            nb_tmp += int(nb_str[i])**2
        print("Nouveau nombre : " + str(nb_tmp))
        nb_str = str(nb_tmp)
    return nb_tmp < 10
