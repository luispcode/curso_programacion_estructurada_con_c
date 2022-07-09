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
    struct personaldata person;

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


    return 0;
}
