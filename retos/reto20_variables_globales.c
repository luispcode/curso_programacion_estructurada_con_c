#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char aprobado[] = {"Aprobado"};
char reprobado[] = {"Reprobado"};
char apro[50];

int prueba(int calificacion)
{
    if (calificacion >= 7)
    {
       printf("aprobadox");

    }

    else if (calificacion < 7)
    {
        printf("reprobadox");
    }
}

int main()
{
    int calificacion;
    char estudiante[50];

    printf("Bienvenido al portal de consultas\n\n");

    printf("Ingrese el nombre del alumno: ");
    scanf("%s", &estudiante);

    printf("Ingrese la calificacion del alumno: ");
    scanf("%i", &calificacion);

    printf("El alumno %s esta ", estudiante);

    printf("%s", prueba(calificacion));



    return 0;
}
