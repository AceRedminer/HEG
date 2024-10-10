# Labo 1 Costantino Volta
## A. Préparation
1. J'ai installé picoscope en suivant la marche a suivre sur le site de celui-ci
2. J'ai preparé le câble comme montrer par le professeur selon la norme T568B
3. J'ai branché le duplicateur sur l'ordinateur et j'ai mit le cable ethernet connecté au switch a gauche et le cable fabriqué en cours a droite
4. J'ai lancé la commande ``` sudo ethtool enp0s31f6 ```
    1. Le champ "Speed" indique la vitesse
    2. Cela veut dire que le signal va dans les deux sens
5. J'ai accroché la pince sur le cable orange et "l'aiguille" sur le blanc orange
## B. Encodage Ethernet 10Mb/sxs
1. Le câble est de Cat 6, la vitesse max est égale à 10Gbps
2. La durée par 100μs/div, 500 MS/s
3. L'amplitude du signal est de 600mV
4. La fréquence max est de 10MHz
5. Non il ne dispose pas de ligne physique, comme on a pu le voir en cours le cable ethernet ne dispose que de paire dediée a la transmission et à la réception
6. Cela dépend de l'interface ethernet ainsi que du cas d'utilisation, sur Internet la communication est synchrone mais sur des réseaux locaux la communication est asynchrone.
7. La vitesse est de 10 MegaBaud/s et de 10MB/s, elle est la même car en Ethernet un symbole est codé sur 1 bit
8. (64*8)/(50*10^-6) = 10Mbps
9. Le codage manchester est couteux en fréquence car la valeur du bit en codé en flanc montant et flanc descendant ce qui oblige au signal de changer d'état lorsque deux valeurs identique se suivent plutot que rester dans l'état actuel, si on prends 1001 par exemple on doit monter (1) descendre (0) puis remonter pour redescendre (0) et monter (1) ce qui fais 5 changement d'état plutot que 3 monter (1) descendre (0) rester en bas (0) et remonter (1)
10. Le temps nécessaire pour envoyer un bit est de 0.2 microsecondres
11. Le temps mesuré est de 0.05 microsecondes
12. Le codage Manchester
13. Il s'agit d'une modulation de fréquence car comme on a pu le voir à la question 9. les données sont codées dans les flancs montants et descendants
14. Afin d'avoir la fréquence maximale on devrait avoir une série de bit qui change entre chaque bit afin de ne pas perdre de temps a devoir remonter ou redescendre pour capturer un flanc montant ou descendant
## C. 
1. Ok
2. Le début de la trame est marqué par une série de 1 et 0 alternant 
3. La durée entre deux trames est de ~51,2 microsecondes
4. La fin d'une trame n'est pas marqué a proprement parlé mais elle est défini par un non-changement de valeur
## D. 
1. LSB est utilisé pour le champ DATA ainsi ainsi le dernier bit est transmis en premier pour ce champ, pour ce qui est des autres champs les valeurs ne sont pas modifié et sont transmisent dans l'ordre
2. D8 9E F3 0A 2F B7 -> ↑ ↑↓↑ ↑↑↑ ↓↑↓ ↑↑↑ ↑↓↓↓