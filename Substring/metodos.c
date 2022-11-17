#include <stdlib.h>
#include <string.h>

char* substring(char* s,int desde,int hasta)
{
    int n =  hasta - desde;
     char* ret = (char *) malloc(n+1);

     int  j = 0;

     for(int i = desde; i<hasta;i++)
     {
         ret[j] = s[i];
          j +=1;
     }

     ret[j] = '\0';

     return ret;
}


char* ltrim(char* s)
{
    int n = strlen(s);
    int  i = 0;

        while(s[i] == ' ')
        {
            i+= 1;
        }
    return substring(s,i,n);
}

char* rtrim(char* s)
{
    int i = strlen(s)-1;

    while(s[i] == ' ')
    {
        i -=1;
    }
    return substring(s,0,i+1);
}

char* trim(char* s)
{
    return rtrim(ltrim(s));
}
