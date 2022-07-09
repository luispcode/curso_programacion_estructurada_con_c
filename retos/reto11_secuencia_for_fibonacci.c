#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //ejemplo secuencia 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
    int a = 0;
    int b = 1;
    int c;

    for (int i = 0; i <= 9; i++)
{       printf("%i ", a);
      a += b;
      b = a - b;


}




  printf("\nfin");
}
