#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main()
{
    printf("Archivos! crear un archivo\n");

    FILE *archivo;

    archivo = fopen("archivo001.dat", "w");

    if(archivo != NULL)
    {
        printf("El archivo se ha creado exitosamente. Comprueba en el directorio que ha sido creado\n");
        fclose(archivo);
    }
    else
    {
        printf("El archivo no se ha creado");
    }

    




}