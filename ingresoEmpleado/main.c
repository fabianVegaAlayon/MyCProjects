#include <stdio.h>
#include <string.h>
#include "estructura.h"

Emp ingresoDeRegistro();

int main()
{

  FILE* arch = fopen("Empleado.txt","r+b");


  	Emp reg = ingresoDeRegistro();

 	fseek(arch,0,SEEK_END);

  	fwrite(&reg,sizeof(Emp),1,arch);

  	fclose(arch);


	return 0;
}


Emp ingresoDeRegistro()
{

	int idEmpl;
	char nombre[30];
	char dir[30];
	long fechaIngreso;

    printf("Ingrese id:\n");
    scanf("%d",&idEmpl);
    printf("Ingrese Nombre: \n");
    scanf("%s",nombre);
    printf("Ingrese direccion\n");
    scanf("%s",dir);
    printf("Ingrese fecha Ingreso\n");
    scanf("%ld",&fechaIngreso);


    Emp e;

    e.idEmp = idEmpl;
    strcpy(e.nom,nombre);
    strcpy(e.dir,dir);
    e.fecIngreso = fechaIngreso;

return e;
}
