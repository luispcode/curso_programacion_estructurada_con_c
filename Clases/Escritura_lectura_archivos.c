#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct personaldata
{
    char name[20];
    char lastname[20];
    int age;
};

int main()
{
    printf("Archivos - Guardar en un archivo!\n");

    struct personaldata person;

    FILE *archivo;
    archivo = fopen("DatosPersonales001.dat", "rb"); //leer archivo que ya existe.

    //FILE *archivo;
    //archivo = fopen("DatosPersonales001.dat", "wb"); // escribir en archivo que ya existe.

    if (archivo != NULL)
    {   
        fflush(stdin);


    fread(&person, sizeof(person), 1, archivo);
    printf("Imprimir los datos \n");
    printf("Nombre: %s \n", person.name);
    printf("Apellido: %s \n", person.lastname);
    printf("Edad: %i \n", person.age);

    fclose(archivo); 
    }   

    /* if (archivo != NULL) //escribir en el archivo ya creado crear archivo
    {
        fflush(stdin);

        printf("Leer datos: \n");
        printf("Ingresar nombre:  \n");
        gets(person.name);

        printf("Ingresar apellido:  \n");
        gets(person.lastname);

        printf("Ingresar edad:  \n");
        scanf("%i", &person.age);

        printf("Imprimir datos: \n");
        printf("%s \n", person.name);
        printf("%s \n", person.lastname);
        printf("%i \n", person.age);

        fwrite(&person, sizeof(person), 1, archivo); 

        fclose(archivo); 
    } */


    else
    {
        printf("No se ha podido crear el archivo \n");
    }









    return 0;
}
