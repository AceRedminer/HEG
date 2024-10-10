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
    int guess;
    printf("Veuillez choisir un nombre entre %d et %d : ", *MIN, *MAX-1);
    scanf("%d", &guess);
    if (guess == nombre_secret)
    {
        return 0;
    } else if (guess < nombre_secret)
    {
        printf("Le nombre à trouver est plus grand que %d \n", guess);
        *MIN = guess + 1;
    } else if(guess > nombre_secret) 
    {
        printf("Le nombre à trouver est plus petit que %d \n", guess);
        *MAX = guess;
    } else if (guess < 0 || guess > *MAX)
    {
        printf("Le nombre entrer n'est pas valide");
    }
    return guess;
}

int main(){
    int MAX, nombre_secret, MIN = 0, iteration = 1;
    printf("Veuillez choisir la valeur MAX : ");
    scanf("%d", &MAX);
    srand(time(NULL));
    nombre_secret = rand() % MAX;
    while(NombreSecret(nombre_secret, &MAX, &MIN) != 0){
        iteration++;
    };
    printf("Vous avez gagné en %d coup \n", iteration);
}