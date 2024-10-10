# Carnet de Laboratoire PSE Costantino Volta
### A ne pas oublier
1. Transistor : se place à la fin du circuit.
2. Pas de wait sur un pwm

### Formules a savoir
Tension : U = R * I, Resistance : R = U / I, Courant : I = U / R
#### Loi des mailles
I1 + I2 = I3 + I4 
0 = U1 + U2 + U3
## Labo 1
### 3.1 Mesure avec une résistance
1. Valeur théorique : 120 ohm, Valeur mesurée : 118.4 ohm
2. (Tension utilisé : 3.3 V)  **Courant** : U = R * I -> 3.3 = 118.4 * I -> 3.3 / 118.4 = I = 0.0278 A = 27,8 mA | **Puissance dissipé** : P = U * I -> 3.3 * 0.0278 = 0.092 W, 0.092 < 0.5 W = OK
3. Ok
4. Tension aux bords de la résistance : 3.18 V
5. Courant mesuré a travers la résistance : 25.6 mA, relativement conforme aux calculs
### 3.2 Résistances en série
1. Valeur R1 : 118.4 ohm, Valeur R2 : 118,4 ohm
2. Tension aux bornes R1 : 1.6 V, Tension aux bornes R2 : 1.6 V
3. R1 : 1.6 = 118.4 * I -> I = 1.6 / 118.4 = 0.0135 A -> 13.5 mA, R2 : 1.6 = 118.4 * I -> I = 1.6 / 118.4 = 0.0135 A -> 13.5 mA, Courant mesuré R1 : 12.7 mA, Courant mesuré R2 : 12.7 mA
4. R1 : P = 1.6 * 0.0127 = 0.020 W, R2 : P = 1.6 * 0.0127 = 0.020 W
5. 
    1. Valeur R1 : 96.7 ohm, Valeur R2 : 118,4 ohm
    2. Tension aux bornes R1 : 1.44 V, Tension aux bornes R2 : 1.77 V
    3. R1 : 1.44 = 96.7 * I -> I = 1.44 / 96.7 = 0.0148 A -> 14.8 mA, R2 : 1.77 = 118.4 * I -> I = 1.77 / 118.4 = 0.0149 A -> 14.9 mA, Courant mesuré R1 : 13.96 mA, Courant mesuré R2 : 13.86 mA
    4. R1 : P = 1.44 * 0.0148 = 0.0213 W, R2 : P = 1.77 * 0.0149 = 0.026 W
    5. Plus la résistance est elevé moins elle laissera passé de courant et va dissiper plus de puissance, la tension est également repartie entre les résistances
### 3.3 Résistances en parallèle 
1. Valeur R1 : 118.4 ohm, Valeur R2 : 118,4 ohm
2. Tension aux bornes R1 : 3.2 V, Tension aux bornes R2 : 3.2 V, Pratiquement identique
3. Courant circulant dans R1 : 26.4 mA, Courant circulant dans R2 : 26.4 mA, Courant en sortie de l'alim : 51.8 mA
4. R1 : P = 3.2 * 0.0264 = 0.084 W, R2 : P = 3.2 * 0.0264 = 0.084 W
5. 
    1. Valeur R1 : 118.4 ohm, Valeur R2 : 264 ohm
    2. Tension aux bornes R1 : 3.22 V, Tension aux bornes R2 : 3.22 V, Pratiquement identique
    3. Courant circulant dans R1 : 26.5 mA, Courant circulant dans R2 : 12.2 mA, Courant en sortie de l'alim : 37.8 mA
    4. R1 : P = 3.22 * 0.0265 = 0.085 W, R2 : P = 3.2 * 0.0264 = 0.039 W
### 3.4 LED
1. R = 264ohm
2. La led s'allume correctement
3. Tension aux bornes de R : 1.46 V, Tension aux bornes de la led : 1.8 V, Tension alimentation : 3.28 V
4. Courant circulant dans R : 5.4 mA, Courant circulant dans la led : 5.4 mA 
5. 
    1. R = 118ohm
    2. La led s'allume correctement
    3. Tension aux bornes de R : 1.37 V, Tension aux bornes de la led : 1.89 V, Tension alimentation : 3.28 V
    4. Courant circulant dans R : 5.4 mA, Courant circulant dans la led : 5.4 mA 
## Labo 2
### 3.1 Préparation de la LED
1. U = R * I -> 3.3 = R * 0.05 -> R = 3.3 / 0.05 = 66ohm
2. Valeur de la résistance : 118ohm
3. La résistance dissipe suffisament de puissance
4. Ok
5. Tension aux bornes de R : 1.36V, Tension aux bornes de la led : 1.89V
6. (to do : mesurer le courant)
### 3.2 Contrôle de la LED depuis le micro-contrôleur
1. Ok
2. Ok
3. Ok
4. ```c
    DigitalOut myled(P0_0);
	myled = 1;
	myled = 0;
    ```
5. La tension en sortie du micro-controlleur passe de 0V à 2.83V quand la led s'allume et s'éteint
6. (to do : mesurer le courant)
7. Ok
8. ```c
    DigitalOut myled(P0_0);
	myled = 1;
	wait(1);
	myled = 0;
	wait(1);
    ```
9. ```c
    DigitalOut led1(P0_0);
	DigitalOut led2(P0_1);
	led1 = 1;
	led2 = 0;
	wait(1);
	led1 = 0;
	led2 = 1;
	wait(1);
    ```
### 3.3 Lecture de l'état d'une entrée
1. Valeur résistance de pull-up : 10k ohm
2. Ok
3. ```c
    // à noter !!! Le bouton doit recevoir du jus constamment !!!
    void Btn_On_Off(void) {
	    led1 = !btn;
	    led2 = !btn;
    }
    ```
### 3.4 Lecture de l'état de deux entrées
1. ```c
    void Clignote(int on_off){
	    if(on_off){
		    led1 = 1;
		    led2 = 0;
		    wait(0.1);
		    led1 = 0;
		    led2 = 1;
		    wait(0.1);
	    }else{
		    led1 = 0;
		    led2 = 0;
	    }
    }

    void Clignote_Alt(void){
	    if(!btn1){
		    wait(1);
		    if(btn1){
		    	clignote_on_off = 1;
		    }
	    }
	    if(!btn2){
		    wait(1);
		    if(btn2){
			    clignote_on_off = 0;
		    }
	    }
	    Clignote(clignote_on_off);
    }
    ```
### 3.5 Compteur binaire
1. ```c
    BusOut leds(P0_0, P0_1, P0_18, P0_17);
    DigitalIn btn1(P2_0);
    DigitalIn btn2(P2_1);
    void Compteur_Binaire(void){
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
## Labo 3
### 2.1
1. 
	1. 20mA : la led rouge a besoin de 2V -> R = ((2.67 - 2) / 0.02) = 34 ohm, en utilisant 4 resistances 120ohm en parallèle je mesure 18.6 mA.
	2. la led bleue a besoin de 3.3V -> R = ((2.67 - 3.3) / 0.02) = 0, donc la led bleue ne peut pas s'allumer
2. Ok
3. Pour la led bleue le courant maximal possible est de 0 mA car la led ne s'allume pas, pour la rouge on arrive à 10 mA.
4. 
	1. 20mA : la led rouge a besoin de 2V -> R = ((3.3 - 2) / 0.02) = 65ohm, en utilisant 2 resistances 120ohm en parallèle je mesure 18.6 mA.
	2. la led bleue a besoin de 3.3V -> R = ((3.3 - 3.3) / 0.02) = 0, sans résistance je mesure 13 mA
	3. La on a bien 3.3V donc tout fonctionne comme prévu
###  2.2
1. Ok
2. ```c 
	DigitalOut led1(P2_2);
	led1 = 1; 
	wait(0.05); 
	led1 = 0; 
	wait(0.05);
	```
3. ```c 
	DigitalOut led1(P2_2);
	led1 = 1; 
	wait(0.005); 
	led1 = 0; 
	wait(0.005);
	```
	```c 
	DigitalOut led1(P2_2);
	led1 = 1; 
	wait(0.0005); 
	led1 = 0; 
	wait(0.0005);
	```
4. ```c 
	void Hz1000(){
	DigitalOut led1(P2_2);
	led1 = 1; 
	wait(0.0005); 
	led1 = 0; 
	wait(0.0005);
	}

	while(1){
	DigitalOut led2(P2_3);
	led2 = 1;
	Hz1000();
	}
	```
## Labo 4 Interruptions
### 2.1
1. LED Rouge : 2 * 120ohm en parallèle;
2. Boutons : 10k Ohm
```c
void Btn_Int1_Fall(void){
	led1 = 1;
}

void Btn_Int2_Rise(void){
	led1 = 0;
}

int main(){
    btn_int1.fall(&Btn_Int1_Fall);
	btn_int2.rise(&Btn_Int2_Rise);
}
```
```c
void Flip(void){
	led1 = !led1;
}

void Flipper_Attach(void){
	flipper.attach(&Flip, 2.0);
}

void Flipper_Detach(void){
	flipper.detach();
}

int main(){
    btn_int1.fall(&Flipper_Attach);
	btn_int2.rise(&Flipper_Detach);
}
```
