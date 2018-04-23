#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void validarNombre(char[], int);
int validarPaginas(int);
int validarVentas(int);
void validarTemas(char[], int);
int contarPar(int[], int);
int contarImpar(int[], int);
int buscarCero(int[], int);

int main()
{
    //ESCALARES
    int tamanio = 0;
    char seguir = 's';
    int pares;
    int impares;
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
        }
    }
    //Punto A
    pares = contarPar(paginas, tamanio);
    //Punto B
    impares = contarImpar(paginas, tamanio);

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

int contarPar(int num[], int tam)
{
    int contador = 0;
    for(int i = 0; i<tam ; i++)
    {
        if(num[i] % 2 == 0)
        {
            contador++;
        }
    }
    return contador;
}

int contarImpar(int num[], int tam)
{
    int contador = 0;
    for(int i = 0; i<tam ; i++)
    {
        if(num[i] % 2 != 0)
        {
            contador++;
        }
    }
    return contador;
}

int buscarCero(int[], int)
{

}
