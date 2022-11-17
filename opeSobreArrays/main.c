#include <stdio.h>
#include <stdlib.h>
#include "Cabeceras.h"
int main()
{
int arr[] = {1,4,7,9,10,12};
int len  =6;

int  pos,enc;

for(int i=-3;i<15;i++)
{
    pos = busquedaBinaria(arr,len,i,&enc);

    if(!enc)
        {
            insertar(arr,&len,i,pos);
        }
}

for(int i = 0;i<len;i++)
    {
        printf("%d\n",arr[i]);
    }
return 0;

}



