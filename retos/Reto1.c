#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int x;
    int y;
    int z;

    printf("Ingresa el valor de x: ");
    scanf("%i", &x);

    printf("Ingresa el valor de y: ");
    scanf("%i", &y);
    
    z=x;
    x=y;
    printf("El valor intercambiado del entero x es: %i \n", x);

    y=z;
    printf("El valor intercambiado del entero y es: %i \n", y);

    return 0;
    }
