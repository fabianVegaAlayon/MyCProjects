#include <stdio.h>
#include <stdlib.h>
#include "Nodo.h"


template <typename T>

class Pila
{
 private: Nodo<T>* p;

     public: Pila()
     {
         p = NULL;
     } ;
//El tipo de dato de v es T
     public: void poner(T v)
     {
         Nodo<T>* nuevo = new Nodo<T>();
         nuevo->valor = v;
         nuevo->sig = p;
         p = nuevo;

     };

     public: T sacar()
     {
         Nodo<T>* aux = p;
         T ret = aux->valor;
         p = aux->sig;
         free(aux);
         return ret;
     };


};


