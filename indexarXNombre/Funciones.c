#include <stdio.h>
#include <string.h>
#include "cabecera.h"



void insertarNom(IdxNomEmp a[],int* len, IdxNomEmp v,int pos)
{
    for(int i=*len;i>pos;i--)
    {
        a[i] = a[i-1];
    }
    a[pos] = v;
    *len = *len + 1;
}


int insertarNomEnOrden(IdxNomEmp a[],int* len,IdxNomEmp v)
{
    int i = 0;

    while(i<*len && strcmp(a[i].nom, v.nom) < 1)
    {
        i+=1;
    }
    insertarNom(a,len,v,i);
    return i;
}



int indexar (FILE* f,IdxNomEmp indice[])
{
    int len = 0;
    IdxNomEmp rIdx; // registro a indexar

    Emp  reg;
    leerEmp(f,&reg);

    while(! feof(f))
    {
        strcpy(rIdx.nom,reg.nom);//Ajustado
        rIdx.posicion = len;
        insertarNomEnOrden(indice,&len,rIdx);
        leerEmp(f,&reg);
    }
    return len;
}

void leerEmp(FILE* a, Emp* reg)
{
    fread(reg,sizeof(Emp),1, a);
}



