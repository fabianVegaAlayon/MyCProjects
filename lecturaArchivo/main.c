#include <stdio.h>
#include <stdlib.h>

void leerChar(FILE* , char* );

int main()
{
    FILE* arch;
    char c;

    arch =  fopen("Demo.doc","r+b");

    long pos = ftell(arch);


       leerChar(arch,&c);


    while(!feof(arch))
        {
           printf("byte nro %ld - %c \n",pos, c);

            pos =  ftell(arch);
            leerChar(arch,&c);

        }
     fclose(arch);



    return 0;
}

void leerChar(FILE* arch, char* c)
{
    fread(c,sizeof(char),1,arch);

}
