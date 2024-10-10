#include <stdio.h>
#include <stdlib.h>

int ppcm_fast(int x, int y){
    for (int i = 1; i <= y; i++)
    {
        if ((x * i) % y == 0)
        {
            return x*i;
        }
    }
    return 0;
}

int ppcm_alt(int x, int y, int i, int j){  
    if ( x * i == y * j)
    {
        return x * i;
    }else{
        if (x * i < y * j)
        {
            return ppcm_alt(x, y, ++i, j);    
        }else{
            return ppcm_alt(x, y, i, ++j);
        }
    }
}

int ppcm_rec(int x, int y, int i_x, int i_y){
    if (x != y)
    {
        if (x < y)
        {
            x += i_x;
            return ppcm_rec(x, y, i_x, i_y);
        }else{
            y += i_y;
            return ppcm_rec(x, y, i_x, i_y);
        }
    }
    return x;
}

int ppcm(int x, int y){
    int initial_x = x;
    int initial_y = y;
    while (x != y)
    {
        if (x < y)
        {
            x += initial_x;
        }else if(y < x){
            y += initial_y;
        }
    }
    return x;
}

int main(){
    printf("Veuillez choisir deux nombres pour trouver leurs PPCM : ");
    int x, y;
    scanf("%d %d", &x, &y);
    int ppcm_res = ppcm_fast(x, y);
    printf("Le PPCM entre %d et %d est égal à %d \n", x, y, ppcm_res);
}