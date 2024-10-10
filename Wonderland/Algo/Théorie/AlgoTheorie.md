# Algo
## Définition
- Des entrées
- Des instructions élémentaires simple, dont les exécutions dans un ordre précis amènent au résultat voulu
- Un résultat
## Variable
Paire : identifiant - valeur
## Séquence d'instructions
- Opérateurs
- Boucles
- Structures de contrôle
- Fonctions
## Algorithme de vérification qu'un nombre est premier
### Exemple naïf
```c
bool est_premier(int x){
    for(int i = 0; i < x; i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}
```
### Exemple simple qui fonctionne
```c
bool est_premier(int x){ // fonction
    int i = 2; // variable de type int dont la valeur vaut 2
    while(i < x){ // boucle tant que la condition est respectée
        if(x % i == 0){ // expression typée
            return false; // expression typée
        }
        i++;
    }
return true; // expression typée
}
```
## [TP Nombre Premier](../Pratique/NombrePremier/main.c)
## Comment exécuter du code en C
### Compilation minimale
```shell
$ gcc prog.c
$ ./prog.out # exécutable par défaut
```
### Compilation avec options de base
```shell
$ gcc -01 -std=c11 -Wall -Wextra -g prog.c -o prog -fsanitize=adress
$ ./prog # exécutable par défaut
```
1. ```-std=c11``` utilisation de C11
2. ```-Wall``` et ```-Wextra``` activation des warnings
3. ```-fsanitize=``` contrôles d'erreurs à l'exécution
4. ```-g``` symboles de débogages sont gardés
5. ```-o``` défini le fichier exécutable à produire en sortie
6. ```-01, -02, -03``` activation de divers degrés d'optimisation
## Déclaration et typage
```c
const double two = 2.0;
int x;
char c;
x = 1;
char = 'a';
int y = x;
int a, b, c;
a = b = c = 1;
```
## Variables et portée
- Une variable est un identifiant, qui peut être liée à une valeur (une expression)
- Une variable a une **portée** qui définit où elle est *visible* (où elle peut être accédée)
- La portée est **globale** ou **locale**
- Une variable **globale** est accessible à tout endroit d'un programme et doit être déclarée en dehors de toute fonction
- Une variable est **locale** lorsqu'elle est déclarée dans un **bloc**, ```{...}```
- Une variable est dans la portée **après** avoir été déclarée
### Exemple
```c
float max; // Variable globale accessible partout
int foo() {
    // max est visible ici
    float a = max; // valide
    // par contre les variables du main() ne sont pas visibles
}

int main(){
    // max est visible ici
    int x = 1; // x est locale a main
    {
        // x est visible ici, y pas encore on peut par exemple pas faire x = y;
        int y = 2;
    } // y est détruite à la sortie du bloc
} // x est détruite à la sortie de main
``` 
### Booléens
- Le ANSI C n'offre pas de booléens
- L'entier ```0``` signifique *faux*, tout le reste est *vrai*
- Depuis C99, la librairie ```stdbool``` met à disposition un type ```bool```
- En réalité c'est un entier :
  - 1 -> true
  - 0 -> false
- On peut les manipuler comme des entier (les sommer, les multiplier, ...)
### Conversions
Les conversions se font de manière :
  - Explicite :
    ```c
    int a = (int)2.8; 
    double b = (double)a;
    int c = (int)(2.8+0.5);
    ```
  - Implicite :
    ```c
    int a = 2.8; // warning
    double b = a + 0.5;
    char c = b; // pas de warning...
    int d = 'c';
    ```
## Expressions et opérateurs
Une expression est tout bon code qui est évalué
### Expressions simples
  - Pas d'opérateurs impliqués
  - Les littéraux, les variables, et les constantes
```c
const int L = -1; // 'L' est une constante, -1 un littéral
int x = 0;        // '0' est un litéral
int y = x;        // 'x' est une variable
int z = L;        // 'L' est une constante
```
### Expressions complexes
  - Obtenues en combinant des opérandes avec des opérateurs
    ```c
    int x; // pas une expression (une instruction)
    x = 4 + 5; // 4 + 5 est une expression dont le résultat est affecté à 'x'
    ```
### Opérateurs relationnels
Opérateurs testant la relation entre deux expressions :
- (```a``` opérateur ```b```) retourne ```1``` si l'expression s'évalue à ```true```, ```0``` si l'expression s'évalue à false
  ![Opérateurs]("./../AlgoTheorieFigure1.png")
Opérateurs logiques
- ```&&``` a&&b ET logique
- ```||``` a||b OU logique
- ```!``` !a NON logique
Opérateurs arithmétiques
- ```+``` a + b Addition
- ```-``` a - b Soustraction
- ```*``` a * b Multiplication
- ```/``` a / b Division
- ```%``` a % b Modulo (retourne le reste de la division)
Opérateurs d'assignation
- ```=``` a = b Affecte la valeur de b à a et retourne b
- ```=``` avec un quelconque opérateur arithmétique va faire l'opération et l'assignation
- ```++``` ```--``` si mit devant la variable : incrémente de 1 et retourne le résultat, si mit après la variable : retourne la valeur puis incrémente de 1
## Structures de contrôle
### if..else if..else
**Syntaxe**
```c
if(expression){
  instructions;
}else if(expression){
  instructions;
}else{
  instructions;
}

if(x){
  printf("x s'évalue à vrai \n");
}else if(y == 8){
  printf("y vaut %d \n", y);
}else{
  printf("Ni l'un ni l'autre sont vrai \n");
}
```
**Pièges**
```c
x = y = 3;
if (x = 2){
  printf("x = 2 est vrai \n");
}else if(y < 8){
  printf("y < 8 \n");
}else if(y == 3){
  printf("y vaut 3 mais cela ne sera jamais affiché \n");
}else{
  printf("Aucun n'est vrai \n");
  x = -1;
}
```
### while
La **boucle** ```while```
```c
while(condition){
  instructions;
}

do{
  instructions;
}while(condition);

int sum = 0;
while(sum < 10){
  sum++;
}

do{
  sum += 10;
}while(sum < 100);
```
La **boucle** ```for```
```c
for (expression1; expression2; expression3){
  instructions;
}

int sum = 0;
for(int i = 0; i < 10; i++){
  sum += i;
}

for(int i = 0; i != 1; i = rand() % 4){
  printf("C'est plus ésotérique \n")
}
```
## [TP Factorielle](../Pratique/Factorielle/main.c)
Écrire un code qui permette de calculer la factorielle de x : x!
## Quelques algorithmes simples
## [TP PPCM](../Pratique/PPCM/main.c)
## [TP PGCD](../Pratique/PGCD/main.c)
### PPCM
Le plus petit commun multiple, ```p```, de deux entiers non nuls, ```a``` et ```b```, est le plus petit entier strictement positif qui soit multiple de ces deux nombres
#### Exemple
```c
PPCM(3, 4) = 12;
PPCM(4, 6) = 12;
PPCM(5, 15) = 15;
```
#### Mathématiquement
Decomposition en nombres premiers :
  36 = 2² * 3²; 90 = 2 * 5 * 3²
On garde tout les premiers à la puissance la plus élevée
  PPCM(36, 90) = 2² * 3² * 5 = 180
#### Exemple d'algorithme
```c
PPCM(36, 90) : 
36 < 90 // 36 + 36
72 < 90 // 72 + 36
108 > 90 // 90 + 90
108 < 180 // 108 + 36
144 < 180 // 144 + 36
180 = 180 // The End
```
- 5 additions, 5 assignations et 6 comparaisons
### PGCD
Le plus grand commun diviseur de deux nombres entiers non nuls est le plus grand entier qui les divise en même temps
#### Exemple
```c
PGCD(3, 4) = 1;
PGCD(4, 6) = 2;
PGCD(5, 15) = 5;
```
#### Mathématiquement
Décomposition en nombres premiers :
  36 = 2² * 3², 90 = 2 * 5 * 3²
On garde tous les premiers à la puissance la plus basse
  PGCD(36, 90) = 2¹ * 3² * 5⁰ = 18
## Collections : tableaux statiques
- Objets de même type : leur nombre est **connu à la compilation**
- Stockés contigüement en mémoire (très efficace)
  ```c
  #define SIZE 10
  int entiers[] = {2, 1, 4, 5, 7}; // taille 5, initialisé
  int tab[3]; // taille 3, non initialisé
  float many_floats[SIZE]; // taille 10, non initialisé
  ```
- Les indices sont numérotés de 0 à taille-1
  ```c
  int premier = entiers[0]; // premier = 2
  int dernier = entiers[4]; // dernier = 7
  ```
- Les tableaux sont **non-initialisé** par défaut
- Les bornes ne sont **jamais** vérifiées