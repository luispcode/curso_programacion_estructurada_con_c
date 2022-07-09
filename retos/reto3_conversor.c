/* Reto3
Ingresar temp en fahrenheit
realizar operacion para convertir grados fahrenheit a celcious
imprime el esultado de la conversion
deberia verse asi:
hola! vamos a transformar grados fahrenheit a grados celsius
ingresa la temperatura en grados fahrenheit:

la temperatura en grados celsius es: */



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

    int main()
{

    float fahrenheit;
    float celsius;


    printf("Hola vamos a transformar grados Fahrenheit a grados Celsius \n\n");
    printf("Ingresa la temperatura en grados Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float f_to_celsius = (fahrenheit - 32)*5/9;
    float c_to_fahrenheit;


    printf("\nLa temperatura en grados celsius es: %f", f_to_celsius);

    return 0;
}

