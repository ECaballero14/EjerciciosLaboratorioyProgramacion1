
#define LIBRE 0
#define OCUPADO 1

typedef struct
{
  int idalumno;
  char nombre[50];
  int nota;
  int Localidad;
  int estado;
}eAlumno;


void harcodearAlumno(eAlumno lista[]);
void mostrarlistaAlumnos(eAlumno lista[],int tam);
void mostrarAlumno(eAlumno unAlumno);
void inicializarAlumno(eAlumno lista[],int tam);
