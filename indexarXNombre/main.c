#include <stdio.h>
#include <stdlib.h>
#include "cabecera.h"

int main()
{
    FILE* f = fopen("Empleado.txt","r+a");
    IdxNomEmp indice[100];

    //indexo el archivo
    int len = indexar(f,indice);

    Emp reg;

    for(int i = 0;i<len;i++)
    {
        fseek(f,indice[i].posicion*sizeof(Emp),SEEK_SET);
        leerEmp(f, &reg);//implementar

        printf("%d,%s  \n",reg.idEmp, reg.nom);
    }

    fclose(f);


    return 0;
}
