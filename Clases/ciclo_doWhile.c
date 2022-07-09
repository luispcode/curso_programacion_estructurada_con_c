#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Iterator Do while \n");

    char answer = 'q';
    char value;

    do
    {
        printf("Ingresa una letra: ");
        scanf("%c", &value);

    } while (value != answer);


    printf("\n coinciden las letras %c == %c", value, answer);
}
