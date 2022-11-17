#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int esDigito(char c)
{
  return ((c>='0' && c<='9'));
}

int esLetra(char c)
{
  return (c>='a' && c<='z') || (c>='A' && c<='Z');
}


int esMayuscula(char c)
{
  return (c>='A' && c<= 'Z');
}

char aMinuscula(char c)
{
   return (esMayuscula(c))? c -'A'+'a':c;
}


int verificarCaracteres(char cadena[])
{
    int i = 0;
    int estado = 0;

    while(cadena[i] != '\0')
    {
        if(esLetra(cadena[i]) || esDigito(cadena[i]))
        {
            estado = 1;
        }

        i++;
    }
    cadena[i] = '\0';
    return estado;
}


void cantLetrasRepetidas(char cadena[]) //muestra la cantidad de veces que se repite un carater
{
  int l;
  int n = 0;
  int letra;
  int seRepiteL = 0;
  char aux[50];

  strcpy(aux,cadena);

  do
   {
      l = cadena[n];

       for (int i = 0; aux[i]!='\0'; i++)
       {
  	     if(aux[i] == l)
  	       {
            letra = l;
            seRepiteL = seRepiteL + 1;
  	       }
       }

        printf("%d %c\n", seRepiteL,letra);
        seRepiteL = 0;
        n++;
  }while(cadena[n] != '\0');

 }




void alinearCadenas(char mGrande[], char mPeque[])
{

	int tamP = strlen(mPeque)-1;

	for(int i = strlen(mGrande)-1;i>=0;i--)
    {
        if(tamP>=0)
            {
                printf("%c %c\n",mGrande[i],mPeque[tamP]);
                  tamP--;
            }else
                 {
                     printf("%c \n",mGrande[i]);
                 }

    }


}


void ordenar (char a[],int len)
{

	int ordenado = 0;

	while( !ordenado)
	{
		ordenado = 1;

        for(int i = 0;i<len-1;i++)
        {

        	 if(a[i] >a[i+1])
        	  {

                  char aux = a[i];
                     a[i] = a[i+1];
                     a[i+1] = aux;
                     ordenado = 0;
        	  }
        }

	}

}

void imprimirCadenaOrdenada(char a[], int len)
{

       for(int i = 0;i<len;i++)
        {
            printf("%c",a[i]);
        }
}

int sumar (char *a,char *b)
{
 int v1 = atoi(a);
 int v2 = atoi(b);
 //int result;

 return v1+v2;

}


void mostrarSoloLetras(char arr[])
{
   int tamanioCad =  strlen(arr);


     for(int i = 0; i<= tamanioCad;i++)
     {
     	if (esLetra(arr[i]))
     	{
     		printf("%c",arr[i]);
     	}
     }


}

void convertirCadAminuscula(char a[])
{
 int i = 0;


 do
    {

        int l =  a[i];
        int r =  aMinuscula(l);
        if(esLetra(a[i]))
            {
                printf("%c",r);
            }
        i++;
    }while(a[i] != '\0');


}



void imprimirEnFuncionDelMasGrande(char a[],char b[])
{
    int v1 = atoi(a);
    int v2 = atoi(b);

    if(v1 > v2)
    {
       convertirCadAminuscula(a);
       convertirCadAminuscula(b);
    }else
        {
            convertirCadAminuscula(b);
            convertirCadAminuscula(a);
        }
}








