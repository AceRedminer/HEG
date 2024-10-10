#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <stdlib.h>
#include <stdbool.h>

typedef enum _error_code {
    ok, err
} error_code;

typedef struct _matrix {
    int32_t m, n;
    int32_t ** data;
} matrix;

// allocation et initialisation à une valeur, val, d’une nouvelle matrice de m lignes et n colonnes
error_code matrix_init(matrix *mat, int32_t m, int32_t n, int32_t val);
// création d’une nouvelle matrice de m lignes et n colonnes et allocation de la mémoire
error_code matrix_alloc(matrix *mat, int32_t m, int32_t n);
// libération de la mémoire de la matrice en argument, le pointeur vers les données est mis à NULL, le nombre de lignes et de colonnes sont mis à -1
error_code matrix_destroy(matrix *mat);
// allocation d’une matrice, et initialisation de ses valeurs à partir d’un tableau de taille s = m*n
error_code matrix_init_from_array(matrix *mat, int32_t m, int32_t n, int32_t data[], int32_t s);
// création du clone d’une matrice, la nouvelle matrice est une copie de la matrice d’origine (il faut réallouer la mémoire)
error_code matrix_clone(matrix *cloned, matrix mat);
// création de la matrice transposée d’une matrice, la nouvelle matrice est une copie de la matrice originale ou les lignes et les colonnes sont échangées
error_code matrix_transpose(matrix *transposed, matrix mat);   
// affichage d’une matrice (très utile pour le débogage)
error_code matrix_print(matrix mat);
// test de l’égalité de deux matrices 
bool matrix_is_equal(matrix mat1, matrix mat2);
// récupération de l’élément [ix][iy] de la matrice de façon sûre (vérification des dépassements de capacité par exemple) et copie dans elem
error_code matrix_get(int32_t *elem, matrix mat, int32_t ix, int32_t iy);
// modification d’un élément [ix][iy] de la matrice de façon sûre (vérification des dépassements de capacité par exemple)
error_code matrix_set(matrix mat, int32_t ix, int32_t iy, int32_t elem);

#endif