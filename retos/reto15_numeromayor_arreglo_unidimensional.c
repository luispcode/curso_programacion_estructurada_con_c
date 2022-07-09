#include<stdio.h>

int main()
{
    printf("Vamos a encontrar el numero mas grande de un arreglo \n");


    int array_value;
    int size;
    int maxnum = 0;

    printf("Ingresa el tamano del arreglo: ");

    scanf("%i", &size);

    int arreglo[size];


    printf("Ingresa los valores del arreglo\n");



    for (int i = 0; i < size; i++)
    {
        printf("Valor[%i]: ", i+1);
        scanf("%i", &array_value);
        arreglo[i] = array_value;
        if (arreglo[i] > maxnum)
        {
            maxnum = array_value;
        }

    }

    printf("%i", arreglo);
    printf("\nEl numero mayor es: %i", maxnum);

    printf("\nFin");
}
