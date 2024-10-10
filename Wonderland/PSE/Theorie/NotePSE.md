# Notes pour feuille
## Interrupt
1. Sortie P0_... et P2_...
2. Resistance bouton côté ground, connexion a la carte côté ground, alimentation 3.3V coté alim
```c
DigitalOut led(P2_12);
InterruptIn btn1(P2_11);
InterruptIn btn2(P2_10);
Ticker flipper;

void flip(){
    led = !led;
}

void on(){
    flipper.attach(&flip, 0.25); // clignote a 2Hz, pour clignoter diviser T par 2, f = 1/(T/2);
}

void off(){
    led = 0;
    flipper.detach();
}

int main(){
    btn1.fall(&on); // rise = appui, fall = relache
    btn2.rise(&off); // rise = appui, fall = relache
    while(1){

    }
}
```
## PWM
1. Si on veut faire passer 20mA : checker la tension sur la doc des leds selon le courant :
    1. Led bleue : pas de résistance
    2. Led rouge : 120omh et 100ohm en parralèle
    3. Led verte : 120ohm, 120ohm et 100ohm tout en parallelle
2. duty cycle = de temps que la led reste allumé
3. period = durée d'un cycle complet (period = 1/frequency), pwm.period est en secondes
4. frequency = nombre de cycle sur une period defini (frequency = 1/period)
5. 
    ```c
    PwmOut led1_pwm(P2_2);
    int duty_fluct = 0;
    float duty_cycle = 0.5f;
    void ExoPwm(){ // fluctue la luminosité de la led de 0 a 100%
        led1_pwm.write(duty_cycle);

        wait(0.5) // permet de voir la led changer de luminosité

        if(duty_fluct == 0){
            duty_cycle += 0.1f;
        }else{
            duty_cycle -= 0.1f;
        }
        if(duty_cycle <= 0.0f){ // lorsqu'on atteint la limite on change le sens de la pro-re-gression
            duty_fluct = 0;
        }else if(duty_cycle >= 1.0f){
            duty_fluct = 1;
        }
    }

    int main(){
        led1_pwm.period(0.01f);
        led1_pwm.write(duty_cycle);
        while(1){
            ExoPwm();
        }
    }
    ```
## Bus
1. 
    ```c
    BusOut leds(P0_0, P0_1, P0_18, P0_17);

    void Compteur_Binaire(){
        if(!btn1){
            wait(1);
            if(btn1){
                count_bin += 1;
            }
        }
        if(!btn2){
            wait(1);
            if(btn2){
                count_bin -= 1;
            }
        }
        leds = count_bin;
    }
    ```
## Théorie
1. Courant : I -> unité Ampères **A**; I = U / R
    1. Loi des noeuds : I1 + I2 = I3 + I4
2. Tension : U -> unité Volt **V** on l'exprime allant du plus vers le moins; U = R * I
    1. Loi des mailles : Ualim = U1 + U2 + U3
3. Résistances : R -> unité Ohm **Ω**; R = U / I
    1. Résistances en série : Req = R1 + R2
    2. Résistances en || : Req = 1/((1/R1) + (1/R2))
4. Diode (LED) : laisse passer dans un sens mais pas dans l'autre, relation courant tension définit par une courbe, non-lineaire
5. Puissance électrique : P -> unité Watt **W**; P = U * I
6. Changement d'état digital : passe de 0 à 1
    1. Flanc montant : 0 -> 1
    2. Flanc descendant : 1 -> 0
7. Changement d'état analogique : passe de  < TensionMax/2 à > TensionMax/2;
    1. Flanc montant : Tension <= TensionMax/2 -> Tension > TensionMax/2;
    2. Flanc descendant : Tension > TensionMax/2 -> Tension <= TensionMax/2;
8. Signaux temporels : signal qui se répéte dans le temps
9. Polling : consultation active et répétitive d'un statut; Processeur regarde périphérique
    1. Perte de temps
    2. Utilisation du processeur inutile lorsqu'il se passe rien
10. Interruptions : périphérique communique au processeur quand un event est trigger
    1. L'interruption previent juste d'un evenement elle ne transmet aucune autre information
    2. Déroulement : 
        1. Interruption à la fin de l'action courante
        2. Sauvegarde de l'état (registres) du microproco
        3. Execution des fonctions dépendante de l'interruption
        4. Chargement de l'état (registre) du miroproco
        5. Reprise du programme avant interruption
    3. Ce que fait l'interruption ne doit jamais être fait lorsque l'interruption n'a pas lieu
    4. Les fonctions appelés par l'interruption n'ont jamais d'arguments
11. I2C : bus série synchrone basé sur le principe Maître/Esclave
    1. Seul le Maître peut initié une communication et cela avec un Esclave à la fois, plusieurs Esclaves = données corrompues
    2. Communication débute avec état START; i2c.start()
    3. Maître donne numéro de l'Esclave; i2c.write(adresse)
    4. Maître donne instruction : Lecture/Ecriture; i2c.write(0/1)
    5. Chaque transfert est quittancé, ACK; i2c.read(0/1)
    6. Communication se termine avec état STOP; i2c.stop()
12. Transistor : Drain côté alim, Gate au milieu, Source côté ground
    1. Gate = 0, Gate ouverte -> Source 0V
    2. Gate = 1, Gate fermé -> Source >0V

## Ajouter exemple d'exercice au verso





