#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char nom[100];
    printf("Cuantas personas hay: \n");
    scanf("%d",&n);
    for(int i = 0;i <n; i++)
    {
      printf("cual es el nombre: ");
      gets(nom);
    }
    printf("hola, %s",nom);

    return 0;
}
