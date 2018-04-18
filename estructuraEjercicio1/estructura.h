#ifndef ESTRUCTURA_H_INCLUDED
#define ESTRUCTURA_H_INCLUDED

typedef struct
{
        int dia, mes, anio;
}Efecha;

typedef struct
{
    int legajo;
    float salario;
    char nombre [31];
    Efecha f_nacimiento;

}Eempleado;

void alta(Eempleado[], int);//se pasa el vector y la cantidad para poder hacer el for que va dentro de la funcion

void listar(Eempleado[], int);

#endif // ESTRUCTURA_H_INCLUDED
