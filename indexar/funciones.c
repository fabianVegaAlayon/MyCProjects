#include <stdio.h>
#include "cabeceras.h"

void insertarIdx(IdxIdEmp a[],int* len, IdxIdEmp v,int pos)
{
    for(int i=*len;i>pos;i--)
    {
        a[i] = a[i-1];
    }
    a[pos] = v;
    *len = *len + 1;
}

int insertarIdxEnOrden(IdxIdEmp a[],int* len,IdxIdEmp v)
{
    int i = 0;

    while(i<*len && a[i].idEmp < v.idEmp)
    {
        i+=1;
    }
    insertarIdx(a,len,v,i);
    return i;
}


int indexar (FILE* f,IdxIdEmp indice[])
{
    int len = 0;
    IdxIdEmp rIdx; // registro a indexar

    Emp  reg;
    leerEmp(f,&reg);

    while(! feof(f))
    {
        rIdx.idEmp = reg.idEmp;//Ajustado
        rIdx.posicion = len;
        insertarIdxEnOrden(indice,&len,rIdx);
        leerEmp(f,&reg);
    }
    return len;
}

void leerInt(FILE* f, int* i)
{
    fread(i,sizeof(int),1,f);
}

void leerEmp(FILE* a, Emp* reg)
{
    fread(reg,sizeof(Emp),1, a);
}
