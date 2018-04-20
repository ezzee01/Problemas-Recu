#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int tamanio = 0;

void validarNombre(char [], int);
void validarPaginas(int[], int);
void validarVentas(int[], int);
void validarTemas(char [][14], int);

int main()
{

    char nombres [tamanio][20];
    int paginas [tamanio];
    int ventas [tamanio];
    char temas [tamanio][14];
    char seguir = 's';

    while(seguir == 's')
    {
        tamanio++;

        printf("Ingrese nombre del libro: ");
        for(int i = 0 ; i < tamanio ; i++)
        {
            fflush(stdin);
            gets(nombres);
            validarNombre(nombres, tamanio);
            //validarNombre(gets(nombres), tamanio);
        }

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
        for(int i = 0 ; i < tamanio ; i++)
        {
            fflush(stdin);
            //gets(temas);
            //validarTemas(temas, tamanio);
        }
    }



    getch();
    return 0;
}

void validarNombre(char nomb[], int tam)
{
    for(int i = 0 ; i < tam; i++)
    {
        while(strlen(nomb[i]) > 20)
        {
            printf("Error,demasiado largo. Reingrese: ");
            fflush(stdin);
            gets(nomb[i]);
        }
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

void validarTemas(char tem[][14], int tam)
{
    for(int i = 0 ; i < tam; i++)
    {
        while(strlen(tem[i]) > 14)
        {
            printf("Error,demasiado largo. Reingrese: ");
            fflush(stdin);
            gets(tem[i]);
        }
    }
}
