#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
        printf("Cadena de caracteres\n");

        char cadena_caracteres [30];
        int size;

        printf("Ingresar el string para devolverlo al reves:  ");

        gets(cadena_caracteres);
        
        size = strlen(cadena_caracteres);

        printf("El String es: \n");
        puts(cadena_caracteres);

        printf("La nueva cadena es:\n");
      
        for ( char i = size ; i > -1; i--)
        {
            printf("%c", cadena_caracteres[i]);

        }

        /*for ( char i = 0 ; i < size; i++)
        {
            printf("%c", cadena_caracteres[i]);


        }*/




        







    printf("\nFin");

}
