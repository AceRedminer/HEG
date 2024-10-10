/*
 * main.cpp
 *
 *      Author: Costantino Volta
 *
 *	Le projet consiste en un Puissance 4 dans une aire de jeu de 6x8 :
 *		1. Jouabilité :
 * 			1.1. Multijoueur
 * 			1.2. Le joueur appuye sur un bouton (de 0 à 7) se situant en haut de la matrice de led
 *			1.3. La pièce "tombe" et se place en haut de la colonne du boutons appuyé
 *			1.4. Lorsqu'un joueur aligne 4 pièce dans n'importe quelle direction il gagne la partie et la matrice s'allume avec la couleur de celui-ci, puis la partie recommence
 * 			1.5. Si un joueur essaye de placer une pièce au dessus d'une colonne pleine, rien ne se produit, c'est toujours au tout du joueur en question
 *		2. Affichage :
 * 			2.1 Le joueur 1 est en rouge, le joueur 2 est en bleu, la ligne 7 de la matrice de led affiche le joueur qui doit jouer
 *			2.2 Lorsqu'on joue une animation de chute de la pièce se produit
 * 			2.3 La couleur du gagnant s'affiche sur l'enesemble de la matrice de jeu (6x8)
 *		3. Logique :
 * 			3.1. Un ticker permet d'appeler toutes les millisecondes la fonction qui va afficher ligne par ligne (balayage) la matrice (mat) contenant l'état du jeu
 * 			3.2. Lorsqu'un joueur appuye sur un bouton on va mettre a jour la matrice de jeu en jouant l'animation de chute jusqu'à attendre le haut de la colonne correspondant au bouton appuyé.
 * 			3.3. Ensuite on va vérifier on va vérifier que le joueur a gagné (check_win), si c'est le cas on va appeler (reset_mat) qui va afficher la couleur du gagnant sur toute les leds du jeu puis au bout de 3 sec
 * 			     les leds vont s'éteindre et la partie va redémarrer
 *
 */

#include "mbed.h"

// Init i2c
I2C i2c(P0_27, P0_28);

// Interruption de la matrice de led
InterruptIn intp(P2_13);

BusOut red_row(P2_4, P2_5, P2_6, P2_7, P2_8, P2_10, P2_11, P2_12);
BusOut green_row(P2_3, P2_2, P2_1, P2_0, P0_11, P0_10, P0_5, P0_4);
BusOut blue_row(P0_9, P0_8, P0_7, P0_6, P0_0, P0_1, P0_18, P0_17);

BusOut row(P0_15, P0_16, P0_23, P0_24, P0_25, P0_26, P1_30, P1_31);

int red = 1, blue = 2, green = 3, yellow = 4, teal = 5, pink = 6;

// Player 1 = red | Player 2 = blue
int player = red;

// Pour le changement de couleur
int player1 = red;
int player2 = blue;

// Size of the board
int size_x = 8;
int size_y = 6;

// 0 = menu, 1 = game, 2 = gamemode, 3 = color, 4 = reset, 5 = size
int displays = 0;

// La matrice de led
int screen[8][8];

// Matrice de jeu : 0 n'affiche rien; 1 allume en rouge; 2 allume en bleu
int mat[8][8] = { { player, player, player, player, player, player, player,
		player }, { 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0 }, { 0,
		0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0,
		0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0 }, };

// Matrice de menu :
int menu[8][8] = { { 3, 3, 0, 0, 0, 0, 4, 4 }, { 3, 3, 0, 0, 0, 0, 4, 4 }, { 0,
		0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 1, 1, 2, 2, 0, 0 }, { 0, 0, 1, 1, 2, 2,
		0, 0 }, { 0, 0, 0, 1, 2, 0, 0, 0 }, { 3, 3, 0, 1, 2, 0, 6, 6 }, { 3, 3,
		0, 1, 2, 0, 6, 6 } };

Ticker tckr;

bool is_intp = false;

// Init col a -1 afin de signaler qu'aucun bouton n'a été appuyé
int col = -1;

// END_GAME

// Set to Impulse
// Allume les leds avec la couleur du gagnant puis reset la matrice de jeu
void reset_mat(int winner) {
	for (int i = 2; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			mat[i][j] = winner;
		}
	}
	wait(3);
	for (int i = 2; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			mat[i][j] = 0;
		}
	}
}

void check_win() {
	int i, j;

	// Vérifier les lignes
	for (i = 2; i < 8; i++) {
		for (j = 0; j < 5; j++) {
			if (mat[i][j] == player && mat[i][j + 1] == player
					&& mat[i][j + 2] == player && mat[i][j + 3] == player) {
				reset_mat(player);
			}
		}
	}
	// Vérifier les colonnes
	for (i = 2; i < 5; i++) {
		for (j = 0; j < 8; j++) {
			if (mat[i][j] == player && mat[i + 1][j] == player
					&& mat[i + 2][j] == player && mat[i + 3][j] == player) {
				reset_mat(player);
			}
		}
	}
	// Vérifier les diagonales (de gauche à droite)
	for (i = 2; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (mat[i][j] == player && mat[i + 1][j + 1] == player
					&& mat[i + 2][j + 2] == player
					&& mat[i + 3][j + 3] == player) {
				reset_mat(player);
			}
		}
	}
	// Vérifier les diagonales (de droite à gauche)
	for (i = 2; i < 5; i++) {
		for (j = 3; j < 8; j++) {
			if (mat[i][j] == player && mat[i + 1][j - 1] == player
					&& mat[i + 2][j - 2] == player
					&& mat[i + 3][j - 3] == player) {
				reset_mat(player);
			}
		}
	}
}

// -----

// BUTTONS

// Retourne le numero du bouton appuyé, contrairement a la valeur binaire retournée par la matrice de led
int return_pressed_btn(uint8_t btns) {
	// % 8 good enough
	switch (btns) {
	case 1:
		return 0;
	case 2:
		return 1;
	case 4:
		return 2;
	case 8:
		return 3;
	case 16:
		return 4;
	case 32:
		return 5;
	case 64:
		return 6;
	case 128:
		return 7;
	default: // selon la combinaison changer la couleure du joueur actuel et mettre a jour la matrice de led
		return -1;
	}
}

int readBTN(void) {
	i2c.start();
	// 38 pour write
	i2c.write(0x38);
	i2c.write(2);
	i2c.stop();

	i2c.start();
	// 39 pour read
	i2c.write(0x39);
	i2c.read(1);
	uint8_t btn_li_3 = (uint8_t) i2c.read(1) >> 4;
	uint8_t btn_li_4 = (uint8_t) i2c.read(1) << 4;
	i2c.read(0);
	uint8_t btns = btn_li_4 + btn_li_3;
	i2c.stop();
	return return_pressed_btn(btns);
}

// -----

// SLIDER

// Retourne le numero du bouton appuyé, contrairement a la valeur binaire retournée par la matrice de led
int return_sld_pos(uint8_t sld) {
	if (sld < 1) {
		return -1;
	} else if (sld < 3) {
		return 0;
	} else if (sld < 5) {
		return 1;
	} else if (sld < 9) {
		return 2;
	} else if (sld < 17) {
		return 3;
	} else if (sld < 33) {
		return 4;
	} else if (sld < 65) {
		return 5;
	} else if (sld < 127) {
		return 6;
	} else if (sld < 255) {
		return 7;
	} else {
		return -2;
	}
}

int readSLD(void) {
	i2c.start();
	// 38 pour write
	i2c.write(0x38);
	i2c.write(2);
	i2c.stop();

	i2c.start();
	// 39 pour read
	i2c.write(0x39);
	uint8_t sld = (uint8_t) i2c.read(0);
	i2c.stop();
	return return_sld_pos(sld);
}

// -----

// DISPLAY

//red = 1, blue = 2, green = 3, yellow = 4, teal = 5, pink = 6

void display_screen() {
	static int x = 0;
	// Variable permettant de stocker la valeur d'une couleur sur une ligne afin d'afficher toute la ligne d'un coup
	uint8_t color1_row = 0;
	uint8_t color2_row = 0;
	uint8_t color3_row = 0;

	for (int y = 0; y <= 7; y++) {
		switch (screen[x][y]) {
		//red
		case 1:
			color1_row = color1_row + (1 << y);
			break;
			// blue
		case 2:
			color2_row = color2_row + (1 << y);
			break;
			// green
		case 3:
			color3_row = color3_row + (1 << y);
			break;
			// yellow
		case 4:
			color1_row = color1_row + (1 << y);
			color2_row = 0;
			color3_row = color3_row + (1 << y);
			break;
			// teal
		case 5:
			color3_row = color3_row + (1 << y);
			break;
			// pink
		case 6:
			color1_row = color1_row + (1 << y);
			color2_row = color2_row + (1 << y);
			color3_row = 0;
			break;
		}
	}
	// On commence a la ligne 0 (tout en haut) et on balaye en descendant jusqu'a la ligne du bas
	row = 0;

	red_row = color1_row;
	blue_row = color2_row;
	green_row = color3_row;

	row = 1 << x;
	x = (x + 1) % 8;
}

void swap_screen(int new_screen[8][8]) {
	for (int i = 0; i <= 7; i++) {
		for (int j = 0; j <= 7; j++) {
			screen[i][j] = new_screen[i][j];
		}
	}
}

void select_display() {
	switch (displays) {
	case 0:
		swap_screen(menu);
		break;
	case 1:
		swap_screen(mat);
		break;
	}
	display_screen();
}

// -----

// GAME

// A refaire
void change_plr() {
	player == 1 ? player = 2 : player = 1;
	for (int j = 0; j < 8; j++) {
		mat[0][j] = player;
	}
}

int update_mat() {
	for (int i = 2; i <= 7; i++) {
		// Si on essaye de jouer alors que la colonne est pleine on retourne 0 pour indiquer que le joueur n'a pas joué
		if (i == 2 && mat[i][7 - col] != 0) {
			return 0;
		}
		if (mat[i][7 - col] != 0) {
			mat[i - 1][7 - col] = player;
			return 1;
		}
		if (i == 7) {
			mat[i][7 - col] = player;
			return 1;
		} else {
			// Animation de chute de la pièce
			mat[i][7 - col] = player;
			wait_ms(50);
			mat[i][7 - col] = 0;
		}
	}
	return 1;
}

void logique() {
	if (is_intp) {
		// Récuperation du bouton appuyé en valeure décimal
		col = readBTN();
		// Ne fais rien si le slider trigger l'interruption
		if (col != -1) {
			int is_updated = update_mat();
			check_win();
			is_intp = false;
			// Si le joueur a pu jouer on passe au joueur suivant
			if (is_updated != 0) {
				change_plr();
			}
		} else {
			is_intp = false;
		}
	}
}

// -----

// MENUS

void menus() {
	if (is_intp) {
		int sld = readSLD();
		int btn = readBTN();
		if (btn != -1) {
			if (btn == 0 || btn == 1) {
				is_intp = false;
				displays = 2;
			} else if (btn == 6 || btn == 1) {
				is_intp = false;
				displays = 3;
			}
		} else if (sld != -1) {
			if (sld == 0 || sld == 1) {
				is_intp = false;
				displays = 4;
			} else if (sld == 6 || sld == 1) {
				is_intp = false;
				displays = 5;
			}
		} else if (sld >= 8 && sld <= 32) {
			is_intp = false;
			displays = 1;
		}
		is_intp = false;
	}
}

void mode() {
	int sld = readSLD();
	int btn = readBTN();
	is_intp = false;
}

void switch_color() {
	int sld = readSLD();
	int btn = readBTN();

	is_intp = false;
}

void reset_score() {
	int sld = readSLD();
	int btn = readBTN();

	is_intp = false;
}

void change_size() {
	int sld = readSLD();
	int btn = readBTN();

	is_intp = false;
}

// -----

// UTILS

void on() {
	tckr.attach(&select_display, 0.001);
}

void set_intp() {
	is_intp = true;
}

// -----

int main(void) {
	// Premiere lecture du bouton (nécessaire pour reset l'état des boutons)
	readBTN();
	readSLD();
	// Définition de la fonction a appelé lorsqu'on appui sur un bouton
	intp.fall(&set_intp);
	// Active le ticker d'affichage du jeu
	on();

	while (1) {
		switch (displays) {
		case 0:
			menus();
			break;
		case 1:
			logique();
			break;
		case 2:
			mode();
			break;
		case 3:
			switch_color();
			break;
		case 4:
			reset_score();
			break;
		case 5:
			change_size();
			break;
		}
	}
}

