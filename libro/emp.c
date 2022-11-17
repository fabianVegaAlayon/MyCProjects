#include <stdio.h>
#include "emp.h"

int subirArchivo(FILE* arch, Emp arr[])
{
	Emp reg;
	int len = 0;
	leerInt(arch, &reg);
	while( !feof(arch) )
	{
		arr[len++] = reg;
		leerEmp(arch, &reg);
	}
	return len;
}

// recorre el array y graba elemento en el archivo
void bajarArchivo(FILE* arch, Emp arr[], int len)
{
	for( int i = 0; i < len; i++ )
	{
		grabarEmp(arch, arr + i);
	}
}

// lee un entero desde el archivo
void leerEmp(FILE* a, Emp* reg)
{
	fread(reg, sizeof(Emp), 1, a);
}

// escribe un entero en el archivo
void grabarEmp(FILE* a, Emp* reg)
{
	fwrite(reg, sizeof(Emp), 1, a);
}

void insertarIdx(IdxIdEmp a[], int* len, IdxIdEmp v, int pos)
{
	int i;
	for(i = *len; i > pos; i-- )
	{
		a[i] = a[i - 1];
	}
	a[pos] = v;
	*len = *len + 1;
}

int insertarIdxEnOrden(IdxIdEmp a[], int* len, IdxIdEmp v)
{
	int i = 0;
	while( i < *len && a[i].idEmp <= v.idEmp )
	{
		i = i + 1;
	}
	insertarIdx(a, len, v, i);
	return i;
}

int indexar(FILE* f, IdxIdEmp indice[])
{
	int len = 0;
	IdxIdEmp rIdx;
	Emp reg;

	leerInt(f, &reg);
	while( !feof(f) )
	{
		rIdx.idEmp = reg.idEmp;
		rIdx.posicion = len;
		insertarIdxEnOrden(indice, &len, rIdx);

		leerInt(f, &reg);
	}
	return len;
}

void leerInt(FILE* f, Emp* i)
{
    fread(i,sizeof(Emp),1,f);
}
