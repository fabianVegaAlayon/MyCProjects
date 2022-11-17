//definicion de la estructura
typedef struct XFile
{
	FILE* arch; 	//Archivo original
	int recSize		//longitud de los registros del archivo original
	FILE* archBajas //archivo de bajas
	int* bajas 		//array de bajas para subir el archivo
	int lenBajas	//longitud del array de bajas
	int actual 		//numero de registro actualmete apuntado en arch
} XFile;

//abrir el archivo
XFile xopen(char*, char*, int);

//cerrar el archivo
void xclose(XFile*);

//leer un registro
void xread(XFile*, void*);

//escribir un registro
void xwrite(Xfile*, void*);

//determinar si llego el fin del archivo
int xeof(XFile*);

//Eliminar un registro
void xdelete(XFile*, int);

//mover el indicador de posici[on del archivo

void xseek(XFile*,int);

//obtener el tamanio del archivo
long xfileSize(XFile*, int raw);

//obtener la cantidad de registros
int xrecCount(XFile*,int raw);

//posiciona el puntero en el registro logico numero 0
void xreset(XFile*);

//retorna el numero de registro logico que actualmente esta siendo apuntado
int xcurrent(XFile*);
