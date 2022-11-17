#include <stdio.h>
#include "emp.h"

int main()
{
	FILE* f = fopen("Empleado.txt", "a+b");
	IdxIdEmp indice[100];

	// indexo el archivo
	int len = indexar(f, indice);
	Emp reg;

	int i;
	for( i = 0; i < len; i++ )
	{
		fseek(f, indice[i].posicion * sizeof(Emp), SEEK_SET);
		leerEmp(f, &reg);
		printf("%d,%s,%d, %ld\n", reg.idEmp,reg.nom,reg.dir,reg.fecIngreso);
	}

	fclose(f);
	return 0;
}

