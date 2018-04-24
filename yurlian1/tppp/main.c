#include <stdio.h>
#include <stdlib.h>
#include "productos.h"

#define CANT 5
#define ESC 27

int main()
{
   EProduct producto[CANT];
   int i;
   char opcion;

   inicializar(producto, CANT);

    do{
        system("cls");
        printf("1- Agregar producto\n");
        printf("2- Modificar producto\n");
        printf("3- Dar baja Producto\n");
        printf("4- Imprimir lista\n");
        printf("ESC- Salir\n");

        opcion = getch();

        switch(opcion)
        {
            case '1':
                alta(producto, CANT);
                break;
            case '2':
                printf("Modificar Producto");
                break;
            case '3':
                printf("Borrar Producto");
                break;
            case '4':
                listar(producto, CANT);
                system("pause");
                break;
            case 'ESC':
                break;
        }

    }while(opcion != ESC);

    return 0;
}
