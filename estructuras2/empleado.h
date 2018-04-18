#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {
    int dia;
    int mes;
    int anio;

}EFecha;

typedef struct {
    char nombre[50];
    int legajo;
    float salario;
    EFecha fn;

}EEmpleado;

void alta(EEmpleado[], int);
void listar(EEmpleado[], int);

#endif // FUNCIONES_H_INCLUDED
