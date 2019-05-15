#include "localidad.h"

typedef struct{

  int idpersona;
  char nombre[20];
  char apellido[20];
  int edad;
  int idlocalidad;
  int estado;
}epersona;


epersona constuirpersona();

int cargarpersonas(int cantregistros,epersona listado[],eLocalidad listadolocalidades[]);


void mostrarlistadopersonas(int cantregistros,epersona listadoper[]);
