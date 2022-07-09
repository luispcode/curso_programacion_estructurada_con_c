#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int x;

    printf("ingresa el valor de x: \n");
    scanf("%i", &x);

    //x = x + x * 2;
    x+= x*2;
    printf("\nEl Nuevo valor es: %i", x);


    return 0;
}
