NB_ZODIAQUE = 12
tentative = 100
a_trouve = False

while(a_trouve == False):
    if(sum(int(chiffre) for chiffre in str(tentative)) == 12):
        if((((tentative // 100) % 10) % 3 == 0) and (((tentative // 10) % 10) % 3 == 0)):
            if (tentative % 78 == 0):
                print("Combinaison : ", tentative)
                a_trouve = True
    tentative += 1
