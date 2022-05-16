#include <stdio.h>
#include <stdlib.h>

float aplicarAumento(float valor);

int main()
{
    float precio;

    printf("Ingrese el precio del producto, senior Baus: ");
    scanf("%f", &precio);

    precio=aplicarAumento(precio);

    printf("El precio con aumento del 5 porciento es de %f", precio);

    return 0;
}

float aplicarAumento(float valor){
    valor=valor+((valor*5)/100);
    return valor;
}

