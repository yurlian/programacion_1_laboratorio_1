#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fecha {int dia, mes, anio;};

struct gente{
    char nombre[31];
    struct fecha f_nacimiento;
};
void main(void)
{
    struct gente persona;
    struct fecha fn;

    printf("Ingrese su nombre: ");
    gets(persona.nombre);
    printf("Ingrese el dia de nacimiento:");
    scanf("%d", &fn.dia);
    printf("Ingrese el mes de nacimiento");
    scanf("%d", &fn.mes);
    printf("Ingrese el año de nacimiento");
    scanf("%d", &fn.anio);

    persona.f_nacimiento = fn;

    printf("Usted se llama %[^\n]",persona[].nombre);

    return persona;
}
