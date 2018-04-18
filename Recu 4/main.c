#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    float resultado;

    printf("Ingrese un numero: ");
    scanf("%d", &num1);
    printf("Ingrese otro numero: ");
    scanf("%d", &num2);

    if(num1 == num2)
    {
        printf("%d%d", num1, num2);
    }
    else if(num1 > num2 && num2 != 0)
    {
        resultado = (float) num1 / num2;
        printf("La division es %.2f", resultado);
    }
    else
    {
        resultado = num1 + num2;
        if(resultado < 50)
        {
            printf("La suma es %.2f y es menor a 50", resultado);
        }
        else
        {
            printf("La suma es %.2f", resultado);
        }
    }

    return 0;
}
