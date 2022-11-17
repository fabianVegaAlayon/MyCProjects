#include <iostream>
#include <stdio.h>
#include "Pila.h"
#include "Cadena.h"


int main()
{
    Pila<int>* pila1 = new Pila<int>();
    pila1->poner(3);
    pila1->poner(2);
    pila1->poner(10);

    printf("%d\n", pila1->sacar());
    printf("%d\n", pila1->sacar());
    printf("%d\n", pila1->sacar());

    Pila<double>* pila2 = new Pila<double>();
    pila2->poner(32.1);
    pila2->poner(22.2);
    pila2->poner(66.3);

    printf("%f\n", pila2->sacar());
    printf("%f\n", pila2->sacar());
    printf("%f\n", pila2->sacar());

    Pila<Cadena*>* pila3 = new Pila<Cadena*>();
    pila3->poner(new Cadena("Hola"));
    pila3->poner(new Cadena("Como"));
    pila3->poner(new Cadena ("Vas"));

    printf("%s\n", (pila3->sacar())->toString());
    printf("%s\n", (pila3->sacar())->toString());
    printf("%s\n", (pila3->sacar())->toString());
    return 0;
}
