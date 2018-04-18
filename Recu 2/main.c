#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[20];
    char localidad[20];

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);      //gets(nombre);
    printf("Ingrese su localidad: ");
    scanf("%s", localidad);    //gets(localidad);

    printf("Usted se llama %s y vive en %s\n\n",nombre,localidad);
    return 0;
}
