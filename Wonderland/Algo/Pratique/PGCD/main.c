#include <stdio.h>
#include <stdlib.h>

int euclide_rec(int x, int y){
    if (y == 0)
    {
        return x;
    }else{
        return euclide_rec(y, x % y);
    }
}

int euclide(int x, int y){
    int tmp;
    while (y > 0)
    {
        tmp = y;
        y = x % y;
        x = tmp;
    }
    return x;
}

int pgcd(int x, int y){
    for (int i = y; i >= 2; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            return i;
        }
    }
    return 0;
}

int main(){
    printf("Veuillez choisir deux nombres pour connaître leurs PGCD : ");
    int x, y;
    scanf("%d %d", &x, &y);
    int pgcd_res = euclide_rec(x, y);
    printf("Le PGCD de %d et %d est égal à %d \n", x, y, pgcd_res);
}