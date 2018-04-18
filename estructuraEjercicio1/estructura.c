#include <stdio.h>
#include <stdlib.h>

/*FUNCION PARA DAR EL ALTA*/
void alta( empleado, int cantidad)
{
    int i;

    for(i=0; i<cantidad; i++){
        printf("Ingrese el legajo:");
        scanf("%d",&empleado[i].legajo);
        printf("Ingrese el nombre y apellido del empleado: \n");
        fflush(stdin);
        scanf("%[^\n]",empleado[i].nombre);
        printf("Ingrese el salario del empleado: \n");
        scanf("%f", &empleado[i].salario);
        printf("Ingrese el dia de nacimiento: \n");
        scanf("%d",&empleado[i].f_nacimiento.dia);
        printf("Ingrese el mes de nacimiento: \n");
        scanf("%d", &empleado[i].f_nacimiento.mes);
        printf("Ingrese el año de nacimiento: \n");
        scanf("%d", &empleado[i].f_nacimiento.anio);
    }
}

void listar(Eempleado empleado[],int cantidad)
{
    int i;

    for(i=0; i<CANT; i++){
          printf("El empleado %d tiene por nombre %s de fecha de nacimiento %d/%d/%d y un salario de %.2f",empleado[i].legajo,empleado[i].nombre,empleado[i].f_nacimiento.dia,empleado[i].f_nacimiento.mes, empleado[i].f_nacimiento.anio,empleado[i].salario);
        }
}
