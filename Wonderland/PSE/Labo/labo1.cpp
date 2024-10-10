/*
 * labo1.cpp
 *
 *  Created on: 4 octobre 2019
 *      Author: Orphee Antoniadis
 */
#include "mbed.h"


DigitalOut led1(P0_0);
DigitalOut led2(P0_1);
DigitalOut led3(P0_18);
DigitalOut led4(P0_17);
BusOut leds(P0_0, P0_1, P0_18, P0_17);
DigitalIn btn1(P2_0);
DigitalIn btn2(P2_1);
InterruptIn btn_int1(P2_0);
InterruptIn btn_int2(P2_1);
PwmOut led1_pwm(P2_2);
DigitalOut led2_pwm(P2_3);
Ticker flipper;

int clignote_on_off = 0;
int count_bin = 0;

int duty_fluct = 0;
float duty_cycle = 0.5f;

void Led_On_Off(void) {
	led1 = 1;
	wait(1);
	led1 = 0;
	wait(1);
}

void Led_Alt(void) {
	led1 = 1;
	led2 = 0;
	wait(1);
	led1 = 0;
	led2 = 1;
	wait(1);
}

void Btn_On_Off(void) {
	led1 = !btn1;
	led2 = !btn1;
}

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

void Flip(void){
	led1 = !led1;
}

void Btn_Int1_Fall(void){
	led1 = 1;
}

void Btn_Int2_Rise(void){
	led1 = 0;
}

void Flipper_Attach(void){
	flipper.attach(&Flip, 2.0);
}

void Flipper_Detach(void){
	flipper.detach();
}

void Hz1000(){

}

void ExoPwm(){
    led1_pwm.write(duty_cycle);

    wait(0.5);
	if(duty_fluct == 0){
		duty_cycle += 0.1f;
	}else{
		duty_cycle -= 0.1f;
	}
	if(duty_cycle == 0.0f || duty_cycle < 0.0f){
		duty_fluct = 0;
	}else if(duty_cycle == 1.0f || duty_cycle > 1.0f){
		duty_fluct = 1;
	}

}

int main(void) {
	// Choisir le numero de l'exercice en changeant la valeur de 'exo'.
	uint8_t exo = 6;

	//btn_int1.fall(&Flipper_Attach);
	//btn_int2.rise(&Flipper_Detach);

	led1_pwm.period(0.01f);
	led1_pwm.write(0.5f);
	while(1) {
		// Choix de l'exercice. Rajouter des exercices si besoin, en gardant la même
		// syntaxe et en ecrivant la fonction correspondante avant le 'main'.
		switch(exo) {
			case 1: Led_On_Off(); break;
			case 2: Led_Alt(); break;
			case 3: Btn_On_Off(); break;
			case 4: Clignote_Alt(); break;
			case 5: Compteur_Binaire(); break;
			case 6: ExoPwm (); break;
			default: printf("Bad exercice number !\n");
		}
	}
}
