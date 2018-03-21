#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j;
   do{
    printf("Ingrese el primero");
    scanf("%d", &i);
    printf("Ingrese el segundo");
    scanf("%d", &j);
   }while(i<j);
    return 0;
}
