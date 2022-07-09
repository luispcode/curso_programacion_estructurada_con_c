/* reto 2
Calcular area de un cilindro

ingresar por el usuario
radio float
altura float
volumen float
area float
realizar operacion
imprimir resultado del area

deberia verse asi:
"vamos a calcular el volumen de un cilindro!"
ingresa el radio de la base:
ingresa la altura del cilindro:
el area de la base es:
el volumen del cilindro es: */

/*El volumen de un cilindro es π r² h, y
el área de su superficie es 2π r h + 2π r².*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    long potenciaConWhile(long numero, long potencia)
{
    if (potencia == 1)
    {
    return resultado;
    }

    else if (potencia == 0)
    {
        resultado = 1;
        return resultado;
    }
    else
    {

    long resultado = numero;
    while (potencia < 0)
    {
        resultado = resultado * numero;
        potencia++;
    }
    return 1/resultado;

    while (potencia > 1)
    {
        resultado = resultado * numero;
        potencia--;
    }

    }

    return resultado;

}

    long numero;
    long potencia;

    printf("Ingresa el valor de numero: ");
    scanf("%i", &numero);

    printf("Ingresa el valor de potencia: ");
    scanf("%i", &potencia);

    printf("El resultado es: %i ", potenciaConWhile(numero, potencia));


}
