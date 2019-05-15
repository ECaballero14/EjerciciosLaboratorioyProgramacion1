
/*
typedef struct{

int dnipersona;

int idLocalidad;

char nombre[10];

char apellido[10];

char sexo;
}epersona;


epersona construirpersona();

int cargarpersona(epersona Listado[]);

void mostrarListadoPersona(ePersona persona);

void mostrarListadoPersona(ePersona Listado[]);

*/
typedef struct{
int idLocalidad;
char descripcion[10];
}eLocalidad;


eLocalidad construirLocalidad();

int cargarLocalidades(eLocalidad Listado[]);

void mostrarListadoLocalidad(eLocalidad localidad);

void mostrarListadoLocalidades(eLocalidad Listado[]);

void cargarmenu();



