#include <stdio.h>
#define LIBRE 0
#define OCUPADO 1

typedef struct{
int CodigodeLibro;
char Titulo[20];
char CodigodeAutor;
int estado;
}eLibros;

void mostrarLibros(eLibros);
void mostrarListaLibros(eLibros lista[],int tam);
void harcodearDatosLibros(eLibros[],int);

