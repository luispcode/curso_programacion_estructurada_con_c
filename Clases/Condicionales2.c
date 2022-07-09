#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    float valA, valB, valC;
    valA =50;
    valB =100;
    valC =150;

    printf("Condicion: \n");

    if(valA == valB)
    {
        printf("Esta condicion no se cumple \n");
    }
    else if(valB == valC)
    {
        printf("Esta condicion tampoco se cumple \n");
    }
    else if(valC == valA)
    {
        printf("Esta condicion tampoco se cumple \n");
    }
    else
    {
        printf("Por lo tanto, ninguna de las condiciones se cumple \n");
        printf("Fin del programa");
    }





}
