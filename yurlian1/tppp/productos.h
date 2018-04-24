#ifndef PRODUCTOS_H_INCLUDED
#define PRODUCTOS_H_INCLUDED

typedef struct
{
    int codigo;
    char descripcion [51];
    float importe;
    int cantidad;
    int estado;
}EProduct;

void inicializar (EProduct[], int);
void alta(EProduct[], int);

#endif // PRODUCTOS_H_INCLUDED
