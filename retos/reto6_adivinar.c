#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Variables

    int adivinador= 5;
    int select;

    printf("Adivina el numero entre el 1 y el 10 que estoy pensando \n\n");
    scanf("%i", &select);

    if( select > 10)
    {
        printf("Debes ingresar un numero entre 1 & 10");
    }
    else if(select < 1 )
    {
        printf("Debes ingresar un numero entre 1 & 10");
    }
    else if(select == 5)
    {
        printf("Ganaste!");
    }
    else
    {
        printf("Perdiste, intenta de nuevo");
    }


}
