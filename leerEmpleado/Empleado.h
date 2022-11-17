typedef struct Emp
{
	int idEmp;
	char nom[30];
	char dir[130];
	long fecIngreso;
}Emp;

//recorre El archivo que viene abierto
//y asigna cada registro en array
void leerEmp(FILE*, Emp*);
void grabarEmp(FILE*, Emp*);
