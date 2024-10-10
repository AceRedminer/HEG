#include <stdlib.h>
#include <stdio.h>

int factor_rec(int x, int res){
    if (x > 0)
    {
        res *= x;
        x--;
        return factor_rec(x, res);
    }else{
        return res;
    }
}

int factor(int x){
    int res = 1;
    for (int i = 0; i < x; i++)
    {
        res *= x-i;
    }
    return res;
}

int main(){
    printf("Rentrez un chiffre pour avoir sa factorielle : ");
    int x;
    scanf("%d", &x);
    int factorial = factor_rec(x, 1);
    printf("Factorielle de %d = %d \n", x, factorial);
}