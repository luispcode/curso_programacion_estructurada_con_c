#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Apuntadores!\n");

    float val;

    float *apval;

    apval = &val;

    *apval = 3.1416;

    printf("El valor de la variable val es : %f \n", val);

    return 0;    
}