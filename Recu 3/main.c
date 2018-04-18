#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precio, porcentajeDesc, dineroDesc, precioDesc, iva, precioFinal;

    printf("Ingrese precio: ");
    scanf("%f",&precio);
    printf("Ingrese descuento: ");
    scanf("%f",&porcentajeDesc);

    dineroDesc = precio * porcentajeDesc /100;
    precioDesc = precio - dineroDesc;
    iva = precioDesc * 0.21;
    precioFinal = precioDesc + iva;

    printf("El dinero descontado es %.2f \nEl precio con descuento es %.2f \nEl IVA es %.2f\n\n", dineroDesc, precioDesc, iva);
    printf("El precio final es de: %.2f", precioFinal);

    return 0;
}
