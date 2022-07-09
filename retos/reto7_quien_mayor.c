#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int numa;
    int numb;

    printf("si me das 2 numeros, te dire cual es el menor entre ellos \n \n");

    printf("Ingresa el primer numero: ");
    scanf("%i", &numa);
    printf("Ingresa el segundo numero: ");
    scanf("%i", &numb);

    if (numa < numb)
    {
        printf("El numero menor es:  %i \n", numa);
    }

    else if (numa > numb)

    {
        printf("El numero menor es:  %i \n", numb);
    }

    else
    {
        printf("son numeros iguales, vuelve a intentarlo\n");
    }

    printf("fin");


return 0;

}
