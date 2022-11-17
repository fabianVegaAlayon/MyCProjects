#include <stdio.h>
#include <string.h>
#include "encabezado.h"



void mostrarTotales(Producto lista[10])
{
  int total;


  for(int i = 0; i < 10 ; i++)
    {
         total =  lista[i].turno1 + lista[i].turno2 + lista[i].turno3;
         printf("Producto: %s - Cantidad: %d \n",lista[i].nombre, total);
    }

}


void mayorProduccion(Producto lista[10])
{
   int val, mayor;
   char nombre[15];

   mayor = lista[0].turno1 + lista[0].turno2 + lista[0].turno3;
   strcpy(nombre, lista[0].nombre);
   for(int i= 0; i< 10; i++)
    {
        val = lista[i].turno1 + lista[i].turno2 + lista[i].turno3;
        if(val > mayor)
            {
                mayor = val;
                strcpy(nombre, lista[i].nombre);
            }
    }

    printf("Mayor Prod: %s cant %d", nombre, mayor);


}

