void dividirFecha(long f, int* a,int* m, int* d)
{
    int resto;
    *a = f/10000;
    resto = f%10000;
    *m = resto/100;
    *d = resto %100;

}
int esAnioBisiesto (int a)
{
    int multiploDe4,multiploDe100,multiploDe400;
    multiploDe4  = a%4==0;
    multiploDe100 = a%100==0;
    multiploDe400 = a%400 ==0;

    return(multiploDe4 && !multiploDe100)||multiploDe400;
}
