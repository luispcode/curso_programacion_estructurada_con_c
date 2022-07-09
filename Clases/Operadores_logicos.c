#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    float valorA, valorB, valorC;

    valorA = 5;
    valorB = valorC = 10;

    if ((valorA < valorB) && (valorB == valorC))
    {
        printf("Se cumplieron las 2 condiciones \n");
    }
    else
    {
        printf("No se cumplieron las 2 condiciones \n");
    }

    if ((valorA > valorB) || (valorA <= valorC))
    {
        printf("Se cumplieron por lo menos una de las dos condiciones \n");
    }
    else
    {
        printf("No se cumplieron ningunas de las condiciones \n");
    }

    return 0;

}