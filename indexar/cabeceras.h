typedef struct IdxIdEmp
{
    int idEmp;
    int posicion;
}IdxIdEmp;

typedef struct Emp
{
	int idEmp;
	char nom[30];
	char dir[130];
	long fecIngreso;
}Emp;



void leerInt(FILE* , int*);
int indexar (FILE* ,IdxIdEmp []);
void insertarIdx(IdxIdEmp [],int*, IdxIdEmp ,int);
int insertarIdxEnOrden(IdxIdEmp [],int* ,IdxIdEmp);
void leerEmp(FILE* , Emp*);

