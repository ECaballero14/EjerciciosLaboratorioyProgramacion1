#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1

typedef struct
{
    int id;
    int estado;
    float precio;
    char nombre[50];
    //char proveedor[50];
    char codigoDeBarra[13];
    char fechaDeVencimiento[50];
    int idProveedor;

} eProducto;

typedef struct
{
    int id;
    char descripcion[50];
    char localidad[50];
    char cuit[50];
    char duenio[50];
    int estado;

} eProveedor;


eProducto pedirProducto();
void cargarArray(eProducto[], int);

void hardcodearProductos(eProducto[],int);
void hardcodearProveedores(eProveedor[], int);

void mostrarProducto(eProducto);
void mostrarProveedores(eProveedor);

void mostrarArrayProductos(eProducto [], int );
void mostrarArrayProveedores(eProveedor [], int );

void mostrarArrayProductosConProveedor(eProducto[], eProveedor[], int, int );
void mostrarArrayProveedoresConProductos(eProducto[], eProveedor[], int, int );

void mostrarArrayProductosConProveedorElMaximo(eProducto[], eProveedor[], int, int);
void mostrarArrayProductosConProveedorOrdenado(eProducto[], eProveedor[], int, int, int desc);


void construirArray(eProducto[], int);
int insertarProducto(eProducto [], int );
int dameLugarLibre(eProducto[],int);
int existeProducto(eProducto,eProducto[]);
int borrarProducto(eProducto[], int);
int editarProducto(eProducto [], int );

