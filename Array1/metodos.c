
#include <stdio.h>

void inicializarContadores(int a[])
{
    for(int i = 0;i<100;i++)
    {
        a[i] = 0;
    }
}
void mostrarResultados(int a[])
{
    for(int i = 0;i<100;i++)
    {
        if(a[i]>0)
        {
            printf("%d aparece %d veces\n",i,a[i]);

        }
    }
}
