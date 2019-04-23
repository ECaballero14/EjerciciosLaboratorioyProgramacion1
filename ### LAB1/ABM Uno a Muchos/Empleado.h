#include <stdio.h>

#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct
{
    int idSector;
    char descripcion[20];
    float valor;

}eSector;

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    int cantidadHoras;
    float sueldoBruto;
    float sueldoNeto;
    int estado;
} eEmpleado;

typedef struct
{
    int legajoemp;
    int idSector;
    int canthoras;
}eEmpSec;

void mostrarEmpleado(eEmpleado[], int);
void cargarEmpleado(eEmpleado[], int);
void mostrarListaEmpleados(eEmpleado[], int, eSector[], int);

int buscarLibre(eEmpleado[], int);
void inicializarEmpleados(eEmpleado[], int);
void hardcodearDatosEmpleados(eEmpleado[], int);
void hardcodearDatosEmpleadosSectores(eEmpSec[],int)
void modificar(eEmpleado[], int, int);
int buscarLegajo(eEmpleado[], int, int);
void borrarEmpleado(eEmpleado[], int, int);

float buscarSueldoMaximo(eEmpleado[],int);
void mostrarEmpleadosSueldoMaximo(eEmpleado[],int);
int contarCarlos(eEmpleado[],int);






