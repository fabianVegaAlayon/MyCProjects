
#include <stdio.h>
#include "metodos.h"

int main()
{
    int aCont[100];
    int v;

    inicializarContadores(aCont);

    printf("Ingrese un Valor: \n");
    scanf("%d",&v);

    while(v>=0)
    {
        aCont[v] = aCont[v]+2;
    printf("Ingrese un Valor: \n");
    scanf("%d",&v);
    }
    mostrarResultados(aCont);
    return 0;
}
