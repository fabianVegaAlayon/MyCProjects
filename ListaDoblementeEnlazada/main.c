#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    int valor; //valor que contiene el nodo
    struct Nodo* sig; //referencia al siguiente nodo
    struct Nodo* ant; //referencia al nodo anterior
}Nodo;

Nodo* buscar(Nodo* p, int v)
{
    Nodo* aux=p;

    while((aux!=NULL) && (aux->valor!=v))
        {
            aux =aux->sig;
        }
    return aux;
}


void agregarAlInicio(Nodo** p, int v)
{
    //creamos en nuevo nodo
    Nodo *nuevo =(Nodo*)malloc(sizeof(Nodo));
    nuevo->valor=v;
    nuevo->sig = NULL;
    nuevo->ant = NULL;

    //si la lista esta vacia entonces hacemos que p apunte al nuevo nodo

    if(*p==NULL)
    {
        *p = nuevo;
    }
    else
    {
        Nodo* aux = *p;

        //asignamos el nodo nuevo al principio

        aux->ant =nuevo;
        nuevo->sig = aux->sig;

    }
}

void agregarAlFinal(Nodo**p, int v)
{
       //creamos en nuevo nodo
    Nodo *nuevo =(Nodo*)malloc(sizeof(Nodo));
    nuevo->valor=v;
    nuevo->sig = NULL;
    nuevo->ant = NULL;

      if(*p==NULL)
    {
        *p = nuevo;
    }else
        {
            Nodo* aux = *p;
            while (aux->sig !=NULL)
            {
                //apuntamos aux al proximo nodo
                aux = aux-> sig;
            }

                //como aux apunta al ùltimo entonces su siguiente sera el proximo nodo
            aux-> ant =nuevo->ant;
            aux-> sig= nuevo;
        }
}

int sacar(Nodo** p)
{
    Nodo * aux =*p;
    int ret =aux->valor;

    *p=aux->sig;
    free(aux);

    return ret;
}




int main()
{
    Nodo* p=NULL;
  //ENCOLAMOS VARIOS ELEMENTOS

  agregarAlInicio(&p,1);

  agregarAlInicio(&p,2);

  agregarAlInicio(&p,3);

   agregarAlFinal(&p,4);
   agregarAlFinal(&p,5);
   agregarAlFinal(&p,6);






  //desencolamos un elemento sale el 3
  //printf("%d\n",desencolar(&p));

  //desencolamos mientras queden elementos en la cola

  while(p!=NULL)
  {
      printf("%d\n",sacar(&p));
  }
    return 0;
}
