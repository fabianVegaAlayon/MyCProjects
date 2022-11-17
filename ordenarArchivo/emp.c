#include <stdio.h>
#include "emp.h"






int subirArchivo(FILE* arch, Emp arr[])
{
    Emp reg;
    int len =0;
    leerInt(arch,&reg);

    while(!feof(arch))
        {
            arr[len++]=reg;
            leerEmp(arch,&reg);

        }
       return len;

}

//ordena el array mediante el algoritmo de la burbuja

void ordenar(Emp arr[],int len)
{
    int ordenado  = 0;
    while(! ordenado)
    {
            ordenado = 1;
            for(int i = 0; i<len-1;i++)
            {
               if(arr[i].idEmp>arr[i+1].idEmp)
                {
                            Emp aux = arr[i];
                            arr[i] = arr[i+1];
                            arr[i+1] = aux;
                            ordenado = 0;
                }
            }
    }
}

void bajarArchivo(FILE* arch,Emp arr[],int len)
{
     for(int i = 0;i<len;i++)
     {
         grabarEmp(arch,arr+i);
     }
}

void leerEmp(FILE* a,Emp* reg)
{
    fread(reg,sizeof(Emp),1,a);
}

void grabarEmp(FILE* a,Emp* reg)
{
    fwrite(reg,sizeof(Emp),1,a);
}



