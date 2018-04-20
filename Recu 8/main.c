#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void validarNombre(char[], int);
void validarPaginas(int[], int);
void validarVentas(int[], int);
void validarTemas(char[], int);

int main()
{
    int tamanio = 0;
    char nombres [tamanio][20];
    int paginas [tamanio];
    int ventas [tamanio];
    char temas [tamanio][14];
    char auxNombres [50];
    int auxPaginas [tamanio];
    int auxVentas [tamanio];
    char auxTemas [50];
    char seguir = 's';

    while(seguir == 's')
    {
        tamanio++;

        printf("Ingrese nombre del libro: ");
        fflush(stdin);
        gets(auxNombres);
        validarNombre(auxNombres, 20);

        printf("Ingrese cantidad de paginas: ");
        for(int i = 0 ; i < tamanio ; i++)
        {
            scanf("%d", &paginas[i]);
            validarPaginas(paginas, tamanio);
        }

        printf("Ingrese cantidad de ventas: ");
        for(int i = 0 ; i < tamanio ; i++)
        {
            scanf("%d", &ventas[i]);
            validarVentas(ventas, tamanio);
        }

        printf("Ingrese tema: ");
        fflush(stdin);
        gets(auxTemas);
        validarTemas(auxTemas, 14);

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

void validarPaginas(int pag[], int tam)
{
    for(int i = 0; i < tam ; i++)
    {
        while(pag[i] < 0)
        {
            printf("Error. Reingrese: ");
            scanf("%d", &pag[i]);
        }
    }
}

void validarVentas(int ven[], int tam)
{
    for(int i = 0; i < tam ; i++)
    {
        while(ven[i] < 0)
        {
            printf("Error. Reingrese: ");
            scanf("%d", &ven[i]);
        }
    }
}

void validarTemas(char tem[], int tam)
{
    while(strlen(tem[i]) > tam)
    {
        printf("Error,demasiado largo. Reingrese: ");
        fflush(stdin);
        gets(tem);
    }
}
