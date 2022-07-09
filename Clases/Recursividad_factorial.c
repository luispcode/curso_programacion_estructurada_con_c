#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int factorial(int n)
{
    printf("Entra la funcion factorial, n vale: %i", n);
    if (n>1)
    {
        printf("\n La funcion se llamara a si misma otra vez: \n ");
        return n * factorial(n-1);
    }
    else
    {
        printf("\nn es igual a 1, termina la recursividad \n");
        return 1;
    }

}



int main()
{

    printf("Recursividad! \n");

    int result = factorial(5);
    printf("\nEl resultado es: %i", result);



    return 0;
}
