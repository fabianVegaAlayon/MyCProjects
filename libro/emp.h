
typedef struct Emp
{
	int idEmp; // codigo de empleado
	char nom[30]; // nombre
	char dir[130]; // direccion
	long fecIngreso; // fecha de ingreso a la compania
} Emp;

typedef struct IdxIdEmp
{
	int idEmp;
	int posicion;
} IdxIdEmp;


int subirArchivo(FILE* arch, Emp arr[]);
void ordenar(Emp arr[], int len);
void bajarArchivo(FILE* arch, Emp arr[], int len);
void leerEmp(FILE* a, Emp* reg);
void grabarEmp(FILE* a, Emp* reg);
void insertarIdx(IdxIdEmp a[], int* len, IdxIdEmp v, int pos);
int insertarIdxEnOrden(IdxIdEmp a[], int* len, IdxIdEmp v);
int indexar(FILE* f, IdxIdEmp indice[]);
void leerInt(FILE*, Emp*);
