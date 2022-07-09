#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* comentario
de varias
lineas */
// comentario de una sola linea

int main()
{
    int integerA = 134 ;
    float floatA = 1.1;
    char letterA = 'P';
    double doubleA = 1.2;
    //bool boolean = false;

    printf("Ingresa el valor del entero A: ");

    scanf("%i", &integerA);

    printf("Ingresa el valor del float A: ");

    scanf("%f", &floatA);

    printf("Ingresa el valor del caracter A: ");

    scanf(" %c", &letterA);

    printf("El entero A es: %i \n", integerA);
    printf("El float A es: %f \n", floatA);
    printf("El caracter A es: %c \n", letterA);

    return 0;

}