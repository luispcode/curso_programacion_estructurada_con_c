#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int numero;

    printf("Ingresa el valor del numero: \n");
    scanf("%i", &numero);

    
    numero %= 5;
    numero++;
    printf("El resultado modulo + 1 es: %i ", numero);

    return 0;
}