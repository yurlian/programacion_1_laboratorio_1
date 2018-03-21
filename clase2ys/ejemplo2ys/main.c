#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, suma = 0;

   for(i = 1; i <= 100; i++){
    suma = suma + i;
   }
    printf("%d", suma);
    return 0;

    /*OTRA MANERA DE HACERLO
    int i, numero = 100, resultado;
    for(i = 1; i<= 100; i++){
        resultado = ((numero * (numero + 1))/2);
    }
    printf("%d", resultado);
    return 0;
    */
}
