typedef struct Emp
{
	int idEmp;
	char nom[30];
	char dir[130];
	long fecIngreso;
}Emp;


int subirArchivo(FILE*, Emp[]);
void ordenar(Emp[],int);
void bajarArchivo(FILE* ,Emp [],int );

