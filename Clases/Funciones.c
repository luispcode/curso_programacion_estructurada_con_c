#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

    /*declaracion de funcion tipo_de_dato_salida o void si no regresa nada nombre (parametros)
        {
            operacion
        } */

int addition(int a, int b)
{
    return a+b;
}


int main()
{ 
    printf("Funciones! \n");

    int additionres = addition(3,4);

    printf("Resultado es: %i", additionres);
    

    return 0;
}    