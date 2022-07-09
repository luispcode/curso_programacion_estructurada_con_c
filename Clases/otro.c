#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int arreglo_notas[5][6];
    int promedio_notas;
    int suma_elementos = 0;
    int cantidad_elementos = 0;

    arreglo_notas[0][5] = 0;
    arreglo_notas[1][5] = 0;
    arreglo_notas[2][5] = 0;
    arreglo_notas[3][5] = 0;
    arreglo_notas[4][5] = 0;

    arreglo_notas[0][0] = 7;
    arreglo_notas[0][1] = 10;
    arreglo_notas[0][2] = 8;
    arreglo_notas[0][3] = 6;
    arreglo_notas[0][4] = 9;

    arreglo_notas[1][0] = 6;
    arreglo_notas[1][1] = 10;
    arreglo_notas[1][2] = 9;
    arreglo_notas[1][3] = 7;
    arreglo_notas[1][4] = 8;

    arreglo_notas[2][0] = 9;
    arreglo_notas[2][1] = 8;
    arreglo_notas[2][2] = 7;
    arreglo_notas[2][3] = 6;
    arreglo_notas[2][4] = 9;

    arreglo_notas[3][0] = 8;
    arreglo_notas[3][1] = 7;
    arreglo_notas[3][2] = 10;
    arreglo_notas[3][3] = 6;
    arreglo_notas[3][4] = 9;

    arreglo_notas[4][0] = 10;
    arreglo_notas[4][1] = 8;
    arreglo_notas[4][2] = 6;
    arreglo_notas[4][3] = 9;
    arreglo_notas[4][4] = 7;


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            suma_elementos = suma_elementos + arreglo_notas[i][j];
            cantidad_elementos = j+1;
        }

        promedio_notas = suma_elementos/cantidad_elementos;
        arreglo_notas[i][cantidad_elementos] = promedio_notas;

        //int promedio_final = (suma_elementos + arreglo_notas[i][cantidad_elementos])/(cantidad_elementos + 1);

        //printf("\nEl promedio inicial de la fila [%i] es: [%i] \n", i , promedio_notas);
        //printf("\nEl promedio final de la fila [%i] es: [%i] \n", i , promedio_final);

    }


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            suma_elementos = suma_elementos + arreglo_notas[i][j];
            cantidad_elementos = j+1;
            printf("La sumatoria del array[%i][%i] es : [%i]\n",i , 5, suma_elementos);
        }


        promedio_notas = suma_elementos/cantidad_elementos;
        printf("\n\tEl promedio de la fila [%i] es: [%i] \n\n", i , promedio_notas);

        //int promedio_final = (suma_elementos + arreglo_notas[i][cantidad_elementos])/(cantidad_elementos + 1);

        //printf("\nEl promedio inicial de la fila [%i] es: [%i] \n", i , promedio_notas);
        //printf("\nEl promedio final de la fila [%i] es: [%i] \n", i , promedio_final);

    }


    //printf("La sumatoria del array[%i][%i] es : [%i]\n",i , j, suma_elementos);

    printf("\nFin");

}
