#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"

// allocation et initialisation à une valeur, val, d’une nouvelle matrice de m lignes et n colonnes
error_code matrix_init(matrix *mat, int32_t m, int32_t n, int32_t val)
{
    error_code res_alloc = matrix_alloc(mat, m, n);
    if (res_alloc == ok)
    {
        for (int i = 0; i < m; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                mat->data[m][n] = val;
            }
        }
    }
    else
    {
        return res_alloc;
    }
}

// création d’une nouvelle matrice de m lignes et n colonnes et allocation de la mémoire
error_code matrix_alloc(matrix *mat, int32_t m, int32_t n)
{
    mat->m = m;
    mat->n = n;
    *mat->data = malloc(m * sizeof(mat->data));

    if (*mat->data == NULL)
    {
        return err;
    }

    for (int32_t i = 0; i < m; i++)
    {
        mat->data[i] = malloc(n * sizeof(*mat->data));
        // test si tout c est bien passé != NULL mat_destroy
        // return err;
    }

    return ok;
}

// libération de la mémoire de la matrice en argument, le pointeur vers les données est mis à NULL, le nombre de lignes et de colonnes sont mis à -1
error_code matrix_destroy(matrix *mat)
{
    for (int i = 0; i < mat->m; i++)
    {
        free(mat->data[i]);
    }
    mat->data = NULL;
    mat->m = -1;
    mat->n = -1;
}

// allocation d’une matrice, et initialisation de ses valeurs à partir d’un tableau de taille s = m*n
error_code matrix_init_from_array(matrix *mat, int32_t m, int32_t n, int32_t data[], int32_t s)
{
    int k = 0;
    if (m * n != s)
    {
        return err;
    }
    matrix_alloc(mat, m, n);
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            mat->data[i][j] = data[k];
            k++;
        }
    }
    return ok;
}

// création du clone d’une matrice, la nouvelle matrice est une copie de la matrice d’origine (il faut réallouer la mémoire)
error_code matrix_clone(matrix *cloned, matrix mat)
{
    error_code code = matrix_alloc(cloned, mat.m, mat.n);

    if (code == ok)
    {
        for (size_t i = 0; i < mat.m; i++)
        {
            for (size_t j = 0; j < mat.n; j++)
            {
                cloned->data[i][j] = mat.data[i][j];
            }
        }
    }
}

// création de la matrice transposée d’une matrice, la nouvelle matrice est une copie de la matrice originale ou les lignes et les colonnes sont échangées
error_code matrix_transpose(matrix *transposed, matrix mat)
{
    error_code code = matrix_alloc(transposed, mat.n, mat.m);
    for (size_t i = 0; i < transposed->m; i++)
    {
        for (size_t j = 0; j < transposed->n; j++)
        {
            transposed->data[i][j] == mat.data[j][i];
        }
    }
}

// affichage d’une matrice (très utile pour le débogage)
error_code matrix_print(matrix mat)
{
    for (size_t i = 0; i < mat.m; i++)
    {
        for (size_t j = 0; j < mat.n; j++)
        {
            printf("%d ", mat.data[i][j]);
        }
        printf("\n");
    }
}

// test de l’égalité de deux matrices
bool matrix_is_equal(matrix mat1, matrix mat2)
{
    if (mat1.m != mat2.m || mat1.n != mat2.n)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < mat1.m; i++)
        {
            for (int j = 0; j < mat2.n; j++)
            {
                if (mat1.data[i][j] != mat2.data[i][j])
                {
                    return false;
                }
                continue;
            }
        }
    }
}

// récupération de l’élément [ix][iy] de la matrice de façon sûre (vérification des dépassements de capacité par exemple) et copie dans elem
error_code matrix_get(int32_t *elem, matrix mat, int32_t ix, int32_t iy)
{
    if (ix >= mat.m || iy >= mat.n)
    {
        return err;
    }
    else
    {
        elem = mat.data[ix][iy];
        return ok;
    }
}

// modification d’un élément [ix][iy] de la matrice de façon sûre (vérification des dépassements de capacité par exemple)
error_code matrix_set(matrix mat, int32_t ix, int32_t iy, int32_t elem)
{
    if (ix >= mat.m || iy >= mat.n)
    {
        return err;
    }
    else
    {
        mat.data[ix][iy] = elem;
        return ok;
    }
}
