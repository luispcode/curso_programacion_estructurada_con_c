#include<stdio.h>

int main()
{   int arreglo[3][4] = {{1, 1, 1, 1}, {2,2,3,3}, {7, 7, 6, 6}};

    printf("La suma de la primera fila es: %i \n", arreglo[0][0]+ arreglo[0][1] + arreglo[0][2] + arreglo[0][3]);
    printf("La suma de la segunda fila es: %i \n", arreglo[1][0]+ arreglo[1][1] + arreglo[1][2] + arreglo[1][3]);
    printf("La suma de la tercera fila es: %i \n", arreglo[2][0]+ arreglo[2][1] + arreglo[2][2] + arreglo[2][3]);

    printf("\nFin");
}
