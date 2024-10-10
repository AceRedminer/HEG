#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int isBissextile(int year)
{
    if (year % 400 != 0)
    {
        if (year % 100 != 0)
        {
            if (year % 4 != 0)
            {
                return 1;
            }
            return 1;
        }
        return 1;
    }
    return 0;
}

int isArmstrong(int value, int len)
{
    int res = 0;
    int temp_val = value;
    for (int i = 0; i < len; i++)
    {
        res += pow((value % 10), len);
        value /= 10;
    }
    if (temp_val == res)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int sumSquare(int val)
{
    int sum = 0;
    while (val != 0)
    {
        sum += pow(val % 10, 2);
        val /= 10;
    }
    return sum;
}

int numDiff(int val){
    int sumSquare = 0;
    int squareSum = 0;
    for (int i = 1; i <= val; i++)
    {
        sumSquare += i;
        squareSum += pow(i, 2);
    }
    sumSquare = pow(sumSquare, 2);
    return sumSquare - squareSum;
    
}

int is_premier_rec(int x, int i){
    if (i <= sqrt(x))
    {
        if (x % i == 0)
        {
            return 0;
        }else{
            i++;
            return is_premier_rec(x, i);
        }
    }
    return 1;
}

void primeFactor(int n) {
    int facteur = 2; // Le premier facteur premier

    printf("Les facteurs premiers de %d sont : ", n);

    while (n > 1) {
        if (n % facteur == 0) {
            printf("%d ", facteur);
            n /= facteur;
        } else {
            facteur++;
        }
    }

    printf("\n");
}

int main()
{
    // Bissextile
    if (isBissextile(2001) == 0)
    {
        printf("L'année est bissextile \n");
    }
    else
    {
        printf("L'année n'est pas bissextile \n");
    }

    // Armstrong
    if (isArmstrong(153, 3) == 0)
    {
        printf("Le nombre est un nombre d'armstrong \n");
    }
    else
    {
        printf("Le nombre n'est pas un nombre d'armstrong \n");
    }

    // SumSquare
    int val = 7;
    while (sumSquare(val) >= 1)
    {
        int tmp = sumSquare(val);
        printf("Sum square of %d = %d \n", val, tmp);
        val = tmp;
        if (tmp == 1)
        {
            break;
        }
    }

    // Num Diff
    int valDiff = 10;
    printf("La difference des carrés de la somme et de la somme des carrés de %d est %d \n", valDiff, numDiff(valDiff));


    // Nombre Premier
    int numToTest = 10;
    if (is_premier_rec(numToTest, 0) != 0)
    {
        printf("%d est premier \n", numToTest);
    }else
    {
        printf("%d n'est pas premier \n", numToTest);
    }
    
    // Facteurs Premier
    int toFactorize = 60;
    if (toFactorize <= 0) {
        printf("Le nombre doit être un entier naturel positif.\n");
    } else {
        primeFactor(toFactorize);
    }
    
}