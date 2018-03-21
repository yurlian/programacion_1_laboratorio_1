#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
   int i = 1, suma = 0;
   while(i<=100){
    suma = suma + i;
    i++;
   }
    printf("%d",suma);
    return 0;
    */
    int i = 1, numero = 100, resultado;
    while(i<=100){
        resultado = ((numero *(numero+1))/2);
        i++;
    }
    printf("%d", resultado);
    return 0;
}
