#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int numeros = 0;

    printf("A continuacion se muestran los numeros naturales del 1 al 100");

    do
    {
        printf("\n%i", numeros);
        numeros++;

    } while (numeros < 101);




    printf("\nfin");
}
