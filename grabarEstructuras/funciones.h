typedef struct Alumno
{
    int matricula;
    char nombre[20];
    int nota;
}Alumno;


void grabarAlumno(FILE*, Alumno*);

