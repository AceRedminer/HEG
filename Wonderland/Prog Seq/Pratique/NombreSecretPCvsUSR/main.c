// Nombre Secret
// But : Faire chercher un nombre aléatoire compris entre 0 et MAX
// Étapes : 1. Donner MAX
//          2. Faire tirer un nombre entre 0 et MAX-1$
//          3. L'ordinateur indique si le nombre et plus grand plus petit ou égal au nombre secret
//          4. Répeter étape 2 et 3 tant que le joueur ne trouve pas le nombre
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int NombreSecret(int nombre_secret, int *MAX, int *MIN){
    int guess = (*MAX + *MIN) / 2;
    printf("L'ordinateur joue le nombre %d, le nombre secret est %d : ", guess, nombre_secret);
    char response;
    scanf(" %c", &response);

    switch (response)
    {
    case '<':
        *MIN = guess + 1;
        break;
    
    case '>':
        *MAX = guess;
        break;

    case '=':
        return 0;
        break;
    default:
        break;
    }
    return guess;
}

int main(){
    int MAX, nombre_secret, MIN = 0, iteration = 1;
    printf("Veuillez choisir la valeur MAX : ");
    scanf("%d", &MAX);
    printf("Veuillez choisir le nombre secret : ");
    scanf("%d", &nombre_secret);
    while(NombreSecret(nombre_secret, &MAX, &MIN) != 0){
        iteration++;
    };
    printf("Vous avez gagné en %d coup \n", iteration);
}