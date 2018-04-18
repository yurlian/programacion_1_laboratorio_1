#include <stdio.h>
#include <stdlib.h>
#include "estructura.h"
#define CANT 100

int main()
{
    Eempleado empleado[CANT]; //defino el nombre del vector en este caso empleado
    /*llamo la funcion le paso el vector y la cantidad */
    alta(empleado,CANT);
    /*llamo listar le paso vector y cantidad de elementos*/
    listar(empleado, CANT);


    return 0;
}

