#include <stdio.h>
#include <stdlib.h>
#include "emp.h"

int main()
{
    Emp arr[100];

    FILE* f;

    //Abro el archivo lo subo, lo ordeno y lo cierro
    f = fopen("Empleado.txt","r+b");
    int len = subirArchivo(f,arr);
    ordenar(arr,len);
    fclose(f);

    //lo abro para escritura, lo bajo y lo cierro

    f =fopen("Empleado.txt","w+b");
    bajarArchivo(f,arr,len);
    fclose(f);

    return 0;
}
