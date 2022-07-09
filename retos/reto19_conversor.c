#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


float conversor(char dinero, float cantidad)
    {
    if (dinero == 'p')
    {
        float pesos = cantidad * 804.86;
        return pesos;
    }
    else if (dinero == 'd')
        {
        float dolares = cantidad * 0.0012;
        return dolares;
        }
    }

float main()
    {
    char dinero;
    float cantidad;
    float resultado;

    printf("Bienvenido al conversor de monedas\n\n");
    printf("Presiona 'd' para convertir pesos a dolares: \n");
    printf("Presiona 'p' para convertir de dolares a pesos: \n");
    printf("Ingresa eleccion: ");
    scanf("%c", &dinero);

    if (dinero == 'p')
    {
        printf("ingresa la cantidad de dolares a convertir \n");
    }
    else if (dinero == 'd')
    {
        printf("ingresa la cantidad de pesos a convertir \n");
    }

    scanf("%float", &cantidad);

    printf("El resultado es:  %f \n", conversor(dinero, cantidad));

    }
