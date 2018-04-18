#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    int nota;
    int edad;
    char sexo;
    float promedio;
    int sumaNota = 0;
    int vectorNota [5];
    char sexoNotaBaja;
    int notaBaja;
    int cantMayores18 = 0;
    int vectorEdad[5];
    int edadBaja;
    int notaEdadBaja;
    char sexoEdadBaja;
    int edadPrimeraMujer;
    int notaPrimeraMujer;
    int flag = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("Ingrese nota: ");
        scanf("%d", &nota);
        //Validacion
        while(nota < 0 || nota > 10)
        {
            printf("Error! Reingrese: ");
            scanf("%d", &nota);
        }

        printf("Ingrese edad: ");
        scanf("%d", &edad);

        printf("Ingrese sexo(f/m): ");
        sexo = tolower(getche());
        //Validacion
        while(sexo != 'f' && sexo != 'm')
        {
            printf("Error! Reingrese: ");
            sexo = tolower(getche());
        }

        sumaNota = sumaNota + nota;

        vectorNota[i] = nota;
        if(i==0 || vectorNota[i] < notaBaja)
        {
            notaBaja = vectorNota[i];
            sexoNotaBaja = sexo;
        }

        if(sexo == 'm' && edad > 18 && nota >= 6)
        {
            cantMayores18++;
        }

        vectorEdad[i] = edad;
        if(i==0 || vectorEdad[i] < edadBaja)
        {
            edadBaja = vectorEdad[i];
            sexoEdadBaja = sexo;
            notaEdadBaja = nota;
        }

        if(sexo == 'f' && flag == 0)
        {
            notaPrimeraMujer = nota;
            edadPrimeraMujer = edad;
            flag = 1;
        }
        printf("\n");
    }

    promedio = (float) sumaNota / 5;

    printf("El promedio de todas las notas es : %.2f\n", promedio);
    printf("La nota mas baja fue %d con sexo %c\n", notaBaja, sexoNotaBaja);
    printf("Hay %d varones mayores a 18 con nota mayor o igual a 6\n", cantMayores18);
    printf("La nota del mas joven fue de %d con sexo %c\n",notaEdadBaja, sexoEdadBaja);
    printf("La edad de la primera mujer es %d con nota de %d\n", edadPrimeraMujer, notaPrimeraMujer);

    return 0;
}
