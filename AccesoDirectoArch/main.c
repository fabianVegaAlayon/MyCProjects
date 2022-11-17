//Acceso directo  para leer el contenido del
//registro y mostrar su contenido
#include <stdio.h>
#include <stdlib.h>
#include "Alumnos.h"

int main()
{
    FILE* arch =  fopen("Alumnos.txt", "r+b");
        int n;

            printf("Ingrese un  numero de registro: \n");
            scanf("%d",&n);

            //posiciono el puntero del archivo
           fseek(arch,n*sizeof(Alumno),SEEK_SET);

            //con el puntero psocicionado leo el registro
            Alumno reg;
            fread(&reg,sizeof(Alumno),1,arch);
            //muestro los registros

            printf("Matricula: %d \n",reg.matricula);
            printf("Nombre: %s \n",reg.nombre);
            printf("Nota: %d \n",reg.nota);


    fclose(arch);


    return 0;
}
