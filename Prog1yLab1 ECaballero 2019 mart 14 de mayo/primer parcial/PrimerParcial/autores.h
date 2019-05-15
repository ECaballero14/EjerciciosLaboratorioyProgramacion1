#include <stdio.h>
#define LIBRE 0
#define OCUPADO 1
typedef struct{
int CodigodeAutor;
char Apellido[20];
char Nombre[20];
int estado;
}eAutores;

 eAutores Autores;

void mostrarAutores(eAutores);
void mostrarListaAutores(eAutores[],int);
void harcodearDatosAutores(eAutores[],int);



