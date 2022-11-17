//typedef long Fecha; valor original
typedef struct Fecha
{
    int dia;
    int mes;
    int anio;
}Fecha;


//"Crea" una fecha
Fecha crearFecha(int,int,int);
//dada una fecha retorna el dia
int obtenerDia(Fecha);
//dada una fecha retorna el mes
int obtenerMes(Fecha);
//dada una fecha retorna el anio
int obtenerAnio(Fecha);
//dadas dos fechas f1 y f2 retorna un valor
// que sera > < o = a 0 segun f2 lo sea respecto a f1
int compararFechas(Fecha,Fecha);

//dada una fecja  retorna una cadena con formato "dd/mm/aaaa"
char* toString(Fecha);



