#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char publictext[] = {"Texto en una variable global"};

void check()
{
    printf("\nImprimir desde la funcion check: \n");

    printf("\nVariable global: \n");
    printf("%s", publictext);

    printf("\nVariable local: \n");
    //printf("%s", privatetext);


}


int main()
{
    printf("Variables globales!\n");


    char privatetext[] = {"Texto en una variable local \n"};

    printf("\nVariable global: \n");
    printf("%s", publictext);
    printf("\nVariable local: \n");
    printf("%s", privatetext);

    check();

    return 0;
}
