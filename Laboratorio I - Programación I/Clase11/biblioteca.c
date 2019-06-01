#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

eProducto pedirProducto()
{
    eProducto productoParaRetornar;

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(productoParaRetornar.nombre);

    //printf("Ingrese proveedor: ");
    //fflush(stdin);
    //gets(productoParaRetornar.proveedor);

    printf("Ingrese codigo de barra: ");
    fflush(stdin);
    gets(productoParaRetornar.codigoDeBarra);

    printf("Ingrese fecha de vencimiento: ");
    fflush(stdin);
    gets(productoParaRetornar.fechaDeVencimiento);

    printf("Ingrese precio: ");
    scanf("%f", &productoParaRetornar.precio);

    productoParaRetornar.estado = OCUPADO;

    return productoParaRetornar;
}



void mostrarProducto(eProducto unProducto)
{
    printf("%15s %15f %15s %18s %15d\n", unProducto.nombre, unProducto.precio, unProducto.codigoDeBarra, unProducto.fechaDeVencimiento, unProducto.idProveedor);
}

void mostrarProveedores(eProveedor unProveedor)
{
    printf("%15s %15s %15s %15s %18d\n", unProveedor.duenio, unProveedor.descripcion, unProveedor.localidad, unProveedor.cuit, unProveedor.id);
}



void cargarArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i]= pedirProducto();
    }
}



void mostrarArrayProductos(eProducto listado[], int cant)
{
    printf("\n\n\tNombre  \tPrecio  \tCod. Barras  \tF. de Venc. \t\tID Prov.\n");
    printf("****************************************************************************************\n");

    int i;
    for(i=0; i<cant; i++)
    {
        mostrarProducto(listado[i]);
    }
}

void mostrarArrayProveedores(eProveedor listado[], int cant)
{
    printf("\n\n\t  Duenio     Descripcion      Localidad            Cuit \t\t ID\n");
    printf("****************************************************************************************\n");

    int i;
    for(i=0; i<cant; i++)
    {
        mostrarProveedores(listado[i]);
    }
}

void mostrarArrayProductosConProveedor(eProducto listadoProductos[], eProveedor listadoProveedores[], int tamprod, int tamprov)
{
    int i, j;
    for(i=0; i<tamprod; i++)
    {
        mostrarProducto(listadoProductos[i]);

        for(j=0; j<tamprov; j++)
        {
            if(listadoProductos[i].idProveedor == listadoProveedores[j].id)
            {
                mostrarProveedores(listadoProveedores[j]);
                printf("\n");
            }
        }
    }
}


void mostrarArrayProveedoresConProductos(eProducto listadoProductos[], eProveedor listadoProveedores[], int tamprod, int tamprov)
{
    int i, j;
    printf("\n");
    for(i=0; i<tamprov; i++)
    {
        mostrarProveedores(listadoProveedores[i]);

        for(j=0; j<tamprod; j++)
        {
            if(listadoProveedores[i].id == listadoProductos[j].idProveedor)
            {
                mostrarProducto(listadoProductos[j]);
            }
        }
        printf("\n");
    }
}



void construirArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i].estado= LIBRE;
        listado[i].precio= 0;
        strcpy(listado[i].nombre, "");
        //strcpy(listado[i].proveedor, "");
        strcpy(listado[i].codigoDeBarra, "");
        strcpy(listado[i].fechaDeVencimiento, "");
    }
}

int insertarProducto(eProducto listado[], int tam)
{
    int indice;
    indice= dameLugarLibre(listado, tam);
    if(indice != -1)
    {
        listado[indice]= pedirProducto();
    }
    return indice;
}

int dameLugarLibre(eProducto listado[], int tam)
{
    int i;
    int index = -1;

    for(i=0; i<tam; i++)
    {
        if(listado[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}

int borrarProducto(eProducto lista[], int tam)
{
    int i;
   char codigo[50];
   int loEncontro = 0;

   printf("Ingrese el codigo de barras: ");
   fflush(stdin);
   gets(codigo);

   for(i=0; i<tam; i++)
   {
       if(strcmp(lista[i].codigoDeBarra, codigo)==0)
       {
          lista[i].estado = LIBRE;
            loEncontro = 1;
           break;
       }

   }

   if(loEncontro==0)
   {
      printf("Codigo inexistente!!");
   }

    return 0;
}



void hardcodearProductos(eProducto listaProductos[],int tam)
{
    float precio[10]={42, 43, 44, 40, 41, 42, 35, 36, 37, 38};
    int idProveedor[10] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1};
    char nombre[10][50]={"Infinia","Axion Power","V-Power","Infinia Diesel","Axion Diesel","V-Power Diesel","Super","Axion Super","Normal","Kerosene"};
    char codigoDeBarra[10][13]={"100","200","300","400","500","600","700","800","900","999"};
    char fechaDeVencimiento[10][50]={"01/01/2020","01/02/2020","01/03/2020","01/04/2020","01/05/2020","01/06/2020","01/07/2020","01/08/2020","01/09/2020","01/10/2020"};

    int i;
    for(i=0;i<10;i++)
    {
        listaProductos[i].precio=precio[i];
        listaProductos[i].idProveedor=idProveedor[i];
        strcpy(listaProductos[i].nombre,nombre[i]);
        strcpy(listaProductos[i].codigoDeBarra,codigoDeBarra[i]);
        strcpy(listaProductos[i].fechaDeVencimiento, fechaDeVencimiento[i]);
        listaProductos[i].estado = OCUPADO;
    }
}


void hardcodearProveedores(eProveedor listaProveedores[], int tam)
{
    int id[3] = {01, 02, 03};
    char descripcion[3][50] = {"Petrolera","Petrolera","Petrolera"};
    char localidad[3][50] = {"Avellaneda","Bahia Blanca","Rio Negro"};
    char cuit[3][50] = {"444", "555", "666"};
    char duenio[3][50] = {"YPF","Axion","Shell"};

    int i;
    for(i=0;i<3;i++)
    {
        listaProveedores[i].id = id[i];
        strcpy(listaProveedores[i].descripcion,descripcion[i]);
        strcpy(listaProveedores[i].localidad, localidad[i]);
        strcpy(listaProveedores[i].duenio, duenio[i]);
        strcpy(listaProveedores[i].cuit, cuit[i]);
        listaProveedores[i].estado = OCUPADO;
    }
}






int editarProducto(eProducto lista[], int tam)
{
   int i;
   char codigo[50];
   int loEncontro = 0;

   printf("Ingrese el codigo de barras: ");
   fflush(stdin);
   gets(codigo);

   for(i=0; i<tam; i++)
   {
       if(strcmp(lista[i].codigoDeBarra, codigo)==0)
       {
           printf("Ingrese el nuevo precio: ");
           scanf("%f", &lista[i].precio);
            loEncontro = 1;
           break;
       }

   }

   if(loEncontro==0)
   {
      printf("Codigo inexistente!!");
   }

   return 0;
}
