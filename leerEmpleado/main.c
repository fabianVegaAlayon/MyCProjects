#include <stdio.h>
#include <stdlib.h>
#include "Empleado.h"

int main()
{

   FILE* arch;
   Emp e;

   //abro el archivo para lectura

   arch = fopen("Empleado.txt","w+b");

   //primer leida fuera del while

   fread(&e,sizeof(Emp),1,arch);
   //itero mientras no sea eof

   while(!feof(arch))
    {
        printf("%d,%s,%s,%ld \n",e.idEmp,e.nom,e.dir,e.fecIngreso);
        fread(&e,sizeof(Emp),1,arch);
    }
    fclose(arch);


    return 0;
}
