#include <stdio.h>
#include <stdlib.h>
#include "productos.h"

void inicializar(EProduct producto[], int CANT)
{
    int i;

    for(i=0; i<CANT; i++)
    {
        producto[i].estado = 0;
    }
}

void alta(EProduct producto[], int CANT)
{
    int i;


    for(i = 0; i<CANT; i++)
    {
        if(producto[i].estado == 0)
        {
           printf("Ingrese el codigo del producto: \n");
           scanf("%d", &EProduct[i].codigo);
                if(EProduct.codigo[i]<1 ||EProduct.codigo[i] >1000)
                {
                    printf("El codigo ingresado es incorrecto ingrese un valor entre 1 y 1000 \n");
                    scanf("%d", &EProduct[i].codigo);
                }
           printf("Ingrese la descripcion del producto: \n");
           fflush(stdin);
           scanf("%[^\n]", EProduct[i].descripcion);
                if(strlen(EProduct[i].descripcion)>50)
                {
                    printf("Error descripcion invalida debe ser maximo 50 caracteres\n");
                    fflush(stdin);
                    scanf("%[^\n]", EProduct[i].descripcion);
                }
            printf("Ingrese el importe del producto: ");
            scanf("%f", EProduct[i].importe);
                if(!isdigit(EProduct[i].importe))
                {
                    printf("Error importe ingresado incorrecto verifique ");
                    scanf("%f", EProduct[i].importe);
                }
            printf("Ingrese la cantidad: ");
            scanf("%d", &EProduct[i].cantidad);
                if(!isdigit(EProduct[i].cantidad) || EProduct[i].cantidad < 0)
                {
                    printf("Error valor ingresado no valido verifiquelo ");
                    scanf("%d", &EProduct[i].cantidad);
                }
            estado = 1;
            break;
        }//finaliza el if principal
    }//finaliza el for
}
