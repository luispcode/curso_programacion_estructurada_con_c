#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


    float a;
    float b;
    float resultado = 1;

float potencias(float a, float b)
{
    float acumulado = 1;

    if (b < 0)
    {   //b = (b * -1);
        for (float i = 0; i < b*-1; i++)
        {
            acumulado = acumulado * a;
            resultado = acumulado;
        }

    return (1/resultado);
    }

    else if (a < 0)
    {
        for (float i = 0; i < b; i++)
        {
        acumulado = acumulado * (a*-1);
        resultado = acumulado;
        }
    return (resultado * -1);
    }

    else if (a < 0 && b <0)
    {
        for (float i = 0; i < (b * -1); i++)
        {
        acumulado = acumulado * (a*-1);
        resultado = acumulado;
        }
    return 1/(resultado * -1);
    }


    for (float i = 0; i < b; i++)
    {
        acumulado = acumulado * a;
        resultado = acumulado;
    }

return resultado;
}


float main()
{
    printf("Vamos a imprimir la potencia de un numero\n\n");

    printf("Ingresa la base: ");
    scanf("%f", &a);

    printf("Ingresa la potencia: ");
    scanf("%f", &b);

    float reultado_final = potencias(a,b);

    reultado_final = reultado_final;

    printf("El resultado es: %f", reultado_final);
    return reultado_final;
    printf("\nFin");
}
