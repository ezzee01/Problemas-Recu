#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char dia[10];
    char aux[50];

    printf("Ingrese dia de la semana: ");
    scanf("%s", aux);

    while(strlen(aux)>11)
    {
        printf("Error, reingrese: ");
        scanf("%s", aux);
    }
    strcpy(dia,aux);

    if(strcmp(dia, "lunes") == 0 || strcmp(dia, "martes") == 0 || strcmp(dia, "miercoles") == 0 || strcmp(dia, "jueves") == 0 || strcmp(dia, "viernes") == 0)
    {
        printf("A trabajar");
    }
    else if(strcmp(dia, "sabado") == 0 || strcmp(dia, "domingo") == 0)
    {
        printf("Buen finde");
    }
    else {printf("Dia no valido");}

    return 0;
}
