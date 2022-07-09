#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Ingresa un numero apra el iterador while: \n");
    
        int limit;
        scanf("%i", &limit);

        int i = 1;

        while(i <= limit)
    {
            printf("Numero: %i \n", i);
            i++;
    }  
    
    
    return 0;


}