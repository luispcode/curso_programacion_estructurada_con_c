#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    printf("Iteradores for \n");

    int upperlimit, bottomlimit;

    printf("Imprimir en orden descendiente \n");

    printf("Ingresar el limite superior: \n");
    scanf("%i", &upperlimit);

    printf("Ingresar el limite inferior: \n");
    scanf("%i", &bottomlimit);
    
/* for variable; condicion; incremento/decremento
{
    bloque cumplimiento
}*/

}
    for(int i = upperlimit; i >= bottomlimit; i--)
{
        printf("Numero: %i \n", i);

}


    printf("\nfin");
}
