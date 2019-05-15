
typedef struct{

  int idlocalidad ;
  char descripcion[20];
}eLocalidad;


eLocalidad construirLocalidad();

int cargarlocalidades(int cantregistros,eLocalidad listado[]);

void mostrarlistadolocalidades(int cantregistros,eLocalidad listado[]);




