#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("condicion if \n");

    float valA, valB, valC;
    valA = valB = 100;

    printf("primera condicion \n");

    if(valA == valB)
    {
        printf("Ambos son iguales \n");
    }

    printf("segunda condicion \n");
    if(valA == valB)
    {
        printf("Ambos son iguales \n");
        valC = valA +valB;
        printf("Ademas la suma de ambos numeros es: %f \n", valC);
    }


    return 0;
}
