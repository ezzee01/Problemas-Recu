#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void validarNombre(char[], int);
int validarPaginas(int);
int validarVentas(int);
void validarTemas(char[], int);

int main()
{
    //ESCALARES
    int tamanio = 0;
    char seguir = 's';
    int contPares = 0;
    //ARRAYS
    char nombres [tamanio][20];
    int paginas [tamanio];
    int ventas [tamanio];
    char temas [tamanio][14];
    //AUXILIARES
    char auxNombres [50];
    int auxPaginas;
    int auxVentas;
    char auxTemas [50];

    while(seguir == 's')
    {
        tamanio++;
        for(int i = 0 ; i < tamanio ; i++)
        {
            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(auxNombres);
            validarNombre(auxNombres, 20);
            strcpy(nombres[tamanio-1], auxNombres);

            printf("Ingrese cantidad de paginas: ");
            scanf("%d", &auxPaginas);
            paginas[tamanio-1] = validarPaginas(auxPaginas);

            printf("Ingrese cantidad de ventas: ");
            scanf("%d", &auxVentas);
            ventas[tamanio-1] = validarVentas(auxVentas);

            printf("Ingrese tema: ");
            fflush(stdin);
            gets(auxTemas);
            validarTemas(auxTemas, 14);
            strcpy(temas[tamanio-1],auxTemas);

            if()
        }
    }

    getch();
    return 0;
}

void validarNombre(char nomb[], int tam)
{
    while(strlen(nomb) > tam)
    {
        printf("Error,demasiado largo. Reingrese: ");
        fflush(stdin);
        gets(nomb);
    }
}

int validarPaginas(int pag)
{
    while(pag < 0)
    {
        printf("Error. Reingrese: ");
        scanf("%d", &pag);
    }
    return pag;
}

int validarVentas(int ven)
{
    while(ven < 0)
    {
        printf("Error. Reingrese: ");
        scanf("%d", &ven);
    }
    return ven;
}

void validarTemas(char tem[], int tam)
{
    while(strlen(tem) > tam)
    {
        printf("Error,demasiado largo. Reingrese: ");
        fflush(stdin);
        gets(tem);
    }
}
