#include <stdio.h>

float resistance_en_parallele(float R1, float R2, float R3, float R4) {
    return 1 / ((1 / R1) + (1 / R2) + (1 / R3) + (1 / R4));
}

int main() {
    float R1, R2, R3, R4;

    printf("Entrez la valeur de la premiere resistance (R1) : ");
    scanf("%f", &R1);

    printf("Entrez la valeur de la deuxieme resistance (R2) : ");
    scanf("%f", &R2);

    printf("Entrez la valeur de la premiere resistance (R3) : ");
    scanf("%f", &R3);

    printf("Entrez la valeur de la deuxieme resistance (R4) : ");
    scanf("%f", &R4);

    float R_total = resistance_en_parallele(R1, R2, R3, R4);

    printf("La resistance totale en parallele est : %.2f ohms\n", R_total);

    return 0;
}
