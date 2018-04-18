#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base;
    float altura;
    float superficie;
    float perimetro;

    printf("Ingrese base: ");
    scanf("%f", &base);
    printf("Ingrese altura: ");
    scanf("%f", &altura);

    perimetro = 3 * base;
    superficie = base * altura / 2;

    printf("El perimetro es de %.2f\n La superficie es de %.2f\n", perimetro, superficie);
    return 0;
}
