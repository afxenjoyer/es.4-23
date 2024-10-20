#include <stdio.h>
#include <math.h>

int main(void)
{
    float y;
    int x = 1;
    
    printf("Inserisci il numero y\n");
    scanf("%f", &y);

    if (y > -1)
    {
        while (pow(x,x) < y)
        {
            x++;
        }
        printf("%d è il massimo intero positivo x tale che x^x < y\n", x-1);
    }
    else
    {
        printf("Il numero non è valido\n");
    }

    return 0;
}