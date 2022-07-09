#include<stdio.h>

int main()
{
    printf("Arreglos unidimensionales \n");

    int integerlist[3];
    integerlist[0] = 4;
    integerlist[1] = 5; 
    integerlist[2] = 6;

    float floatlist[] = {23.4, 34.5, 45.6, 21.8, 556.7};
    
    char charlist[4];
    charlist[0] = 'D'; //str dentro van con ''
    charlist[1] = 'a';
    charlist[2] = 'n';
    charlist[3] = 'i';

    printf("\nPrimer entero:\t %i", integerlist[0]);
    printf("\nUltimo flotante:\t %f", floatlist[4]);
    printf("\nLista de caracteres:\t %c%c%c%c. \n", charlist[0], charlist[1], charlist[2], charlist[3]);

    printf("\nFin");
}


