#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;

    printf("Ingrese nota: ");
    scanf("%d", &nota);

    switch(nota)
    {
        case 0:
        case 1:
        case 2:
        case 3: printf("La próxima se puede\n");
        break;
        case 4:
        case 5:
        case 6: printf("Raspando\n");
                if(nota <5)
                    {
                        printf("Debes preocuparte mas\n");
                    }
        break;
        case 7:
        case 8:
        case 9:
        case 10: printf("Aprobado\n");
                 if(nota >8)
                 {
                     printf("Muy bien\n");
                 }
        break;
        default:
            printf("La nota no es valida\n");


    }



    return 0;
}
