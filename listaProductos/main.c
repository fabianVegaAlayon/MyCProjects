#include <stdio.h>
#include <stdlib.h>
#include "encabezado.h"

int main()
{
    Producto lista[10];
    int trn1,trn2,trn3, tam;
    trn1 = 0;
    trn2 = 0;
    trn3 = 0;
    tam = sizeof(lista);

   for(int i = 0; i<10; i ++){
    fflush(stdin);
    printf("Ingrese producto: ");
    gets(lista[i].nombre);
    printf("Ingrese Cant. Turno 1: ");
    scanf("%d",&lista[i].turno1);
    printf("Ingrese Cant. Turno 2: ");
    scanf("%d",&lista[i].turno2);
    printf("Ingrese Cant. Turno 3: ");
    scanf("%d",&lista[i].turno3);
    printf("\n");




   trn1 += lista[i].turno1;
   trn2 += lista[i].turno2;
   trn3 += lista[i].turno3;

   }

       mostrarTotales(lista);

      printf("turno 1: %d \n", trn1);
      printf("turno 2: %d \n", trn2);
      printf("turno 3: %d \n", trn3);

      mayorProduccion(lista);



    return 0;
}
