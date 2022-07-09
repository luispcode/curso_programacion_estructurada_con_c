#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{



    printf("Te encuentras en una intercepcion, dedes escoger un camino: \n\n");

    printf("Escribe 1 si quieres ir por el camino de dulces \nEscribe 2 si quieres ir por el camino de madera \nEscribe 3 si quieres ir por el camino de gatitos \n ");

    int selection;

    scanf("%i", &selection);

    switch(selection)
    {
        case 1:
            printf("sigues el camino de dulces y encuentras muchos dulces HP + 100\n");
            printf("Felicidades!, keep going\n");
            break;
        case 2:
            printf("sigues el camino de madera y el puente se rompe\n");
            printf("Game over\n");
            break;
        case 3:
            printf("sigues el camino de gatitos y los gatos te llevan a la salida level up\n");
            printf("level up\n");
            break;
        default:
            printf("Select a valid option\n");
        break;
    }



}
