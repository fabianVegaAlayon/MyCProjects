#include <stdio.h>
#include <string.h>
#include "alumnos.h"


int main()
{
FILE* arch;
  Alumno a;

   arch = fopen("Alumnos.txt","r+b");
   leerAlumno(arch,&a);

   while(!feof(arch))
    {
        printf("%d, %s, %d\n",a.matricula, a.nombre,a.nota);
        leerAlumno(arch,&a);
    }

    fclose(arch);



    return 0;
}

  void leerAlumno(FILE* arch, Alumno* reg)
    {
      fread(reg,sizeof(Alumno),1,arch);
    }

