#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int nota;

    printf("ingresa tu nota y veras si aprobaste o no: ");

    scanf("%i", &nota);

    if (nota >= 60 && nota <=90 )
    {
        printf("El alumno esta aprobado \n");
    }

    else if ( nota > 90 )
    {
        printf("El alumno esta aprobado con honores ;) \n");
    }

    else
    {
        printf("El alumno esta reprobado \n");
    }


    printf("Fin del programa");
    




    return 0;
}