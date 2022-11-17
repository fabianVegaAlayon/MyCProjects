#include <stdio.h>
#include <stdlib.h>

void grabarChar(FILE* , char*);
void grabarInt(FILE*, int*);

int main()   //Creacion y Escritura en un archivo
{
   //Abro el archivo
   FILE* arch = fopen("Demo.doc","w+b");

   /*char c;
   c= 'a';
   grabarChar(arch,&c);
   c= 'b';
   grabarChar(arch,&c);
   c= 'c';
   grabarChar(arch,&c);*/


   int i = 'f';
   grabarInt(arch,&i);
   i = 'a';
   grabarInt(arch,&i);
   i = 'N';
   grabarInt(arch,&i);

   fclose(arch);

    return 0;
}

void grabarChar(FILE* arch, char* c)
{
    fwrite(c,sizeof(char),1,arch);
}

void grabarInt(FILE* arch, int* i)
{
    fwrite(i,sizeof(int),1,arch);

}


