#include <stdio.h>


typedef struct Nodo
{
    int valor;
    struct Nodo* sig;
}Nodo;

void agregar(Nodo** , int);
void mostrar(Nodo*);
void liberar(Nodo**);
Nodo* buscar(Nodo*, int );

