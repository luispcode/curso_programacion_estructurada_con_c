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

/*El volumen de un cilindro es π r² h,
el área de su superficie es 2π r h + 2π r².*/

    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>

    int main()
{
    float pi= 3.141592;
    float volumen;
    float area;
    float area2;
    float radio;
    float altura;

    printf("vamos a calcular el volumen de un cilindro! \n \n");
    
    printf("ingresa el radio de la base: ");
    scanf("%f", &radio);

    printf("ingresa la altura del cilindro: ");
    scanf("%f", &altura);
    

    volumen= pi * (radio * radio) * altura;
    area= 2 * pi * radio * altura + 2 * pi * (radio * radio);
    area2= 2 * pi * radio * (radio + altura);

    printf("\nel area de la base es: %f \n", area);

    printf("el area2 de la base es: %f \n", area2);

    printf("el volumen del cilindro es: %f \n", volumen);

    return 0;
}
