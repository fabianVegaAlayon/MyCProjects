typedef struct IdxNomEmp
{
    char nom[30];
    int posicion;
}IdxNomEmp;

typedef struct Emp
{
	int idEmp;
	char nom[30];
	char dir[130];
	long fecIngreso;
}Emp;



void leerInt(FILE* , int*);
 int indexar (FILE* ,IdxNomEmp []);
void insertarNom(IdxNomEmp [],int*, IdxNomEmp ,int);
 int insertarIdxEnOrden(IdxNomEmp [],int* ,IdxNomEmp);
void leerEmp(FILE* , Emp*);

