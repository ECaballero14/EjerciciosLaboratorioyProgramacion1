
#define LIBRE 0
#define OCUPADO 1

typedef struct
{
  int id;
  char descripcion[50];
  int estado;
}eLocalidad;

void harcodearLocalidad(eLocalidad lista[]);
void mostrarListaLocalidades(eLocalidad lista[],int tam);
void mostrarLocalidad(eLocalidad unaLocalidad);
void inicializarLocalidad(eLocalidad lista[], int tam);
