#include <stdio.h>
#include <stdlib.h>
#include "Cabecera.h"


void agregar(Nodo** p, int v)
{
    //creacion del nuevo nodo
    Nodo *nuevo =(Nodo*)malloc(sizeof(Nodo)); //definicion del nodo nuevo
    nuevo ->valor = v;
    nuevo ->sig = NULL;

    //si la lista esta vacia hacemos que p apunte al nuevo nodo

    if(*p == NULL)
        {
            *p = nuevo;
        }
    else
        {
            Nodo* aux=*p;

            while (aux->sig != NULL)
            {
                aux = aux-> sig;
            }

          aux->sig = nuevo;
        }



    //como aux apunta al ultimo entonces su siguiente sera el nuevo nodo


}

void mostrar(Nodo* p)
{
    Nodo* aux = p;
while(aux -> sig != NULL )
    {
        printf("Valor %d \n", aux->valor);
         aux = aux-> sig;
    }
  // printf("\n");
}

void liberar(Nodo**p)
{
    while(*p!=NULL)
    {
      Nodo* prox =(*p)->sig;
      free(*p);
      *p = prox;
    }
}

Nodo* buscar(Nodo* p, int v)
{
    Nodo* aux = p;

    while((aux!= NULL)&& (aux->valor !=v))
    {
        aux =  aux->sig;
    }

    return aux;
}


int main()
{

    Nodo* pos;
    Nodo*  p= NULL;

    agregar(&p, 5);
    agregar(&p, 8);
    agregar(&p, 7);
    agregar(&p, 3);
    agregar(&p, 9);

    mostrar(p);

    pos = buscar(p,15);
     liberar(&p);
    if (pos !=NULL)
        {
            printf("Valor:  %d", pos->valor);
        }else
           {
               printf("no esta");
           }

    return 0;
}
