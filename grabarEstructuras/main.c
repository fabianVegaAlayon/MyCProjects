#include <stdio.h>
#include <string.h>
#include "funciones.h"

Alumno crearAlumno(int,char[],int);

int main()
{
    FILE* arch;
    arch = fopen("Alumnos.txt","w+b");

        Alumno a;

        a = crearAlumno(11,"Fabian",5);
        grabarAlumno(arch,&a);


        a = crearAlumno(15,"Andrea",7);
        grabarAlumno(arch,&a);

        a= crearAlumno(16,"juliana",4);
        grabarAlumno(arch,&a);

    fclose(arch);

    return 0;
}


Alumno crearAlumno(int matr, char nom[],int nota)
{
    Alumno x;
    x.matricula = matr;
    strcpy(x.nombre,nom);
    x.nota = nota;
    return x;
};


void grabarAlumno(FILE* arch, Alumno* reg)
{
    fwrite(reg,sizeof(Alumno),1,arch);
}
