#include "alumnos.h"

int bucarLibre(eAlumno lista1[],int tam)
{
    int i;
    int index=-1;
    for(i=0; i<tam; i++)
    {
        if(lista1[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}

void inicializarAlumno(eAlumno lista1[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista1[i].idalumno = 0;
        lista1[i].estado= LIBRE;
    }
}

void harcodearAlumno(eAlumno lista1[])

{
    int i;
    int tam = 7;
    int idalumnos[]={1000,1001,1002,1003,1004,1005,1006};
    char nombres[50][7]={"Maria","Jose","Pedro","Ester","Pia","Lautaro","Jeremias"};
    int notas[]={10,9,2,1,6,2,3};
    int Localidades[]={100,101,101,102,103,102,102};
    for(i=0; i<tam; i++)
    {
        lista1[i].idalumno=idalumnos[i];
        strcpy(lista1[i].nombre,nombres[i]);
        lista1[i].nota=notas[i];
        lista1[i].Localidad=Localidades[i];
        lista1[i].estado=OCUPADO;
    }
}

void mostrarListaAlumnos(eAlumno lista1[],int tam)

{
    int i;
    printf("------------------------------\n");
    for(i=0; i<tam; i++)
    {
        if(lista1[i].estado!=LIBRE)
        {
            mostrarAlumno(lista1[i]);
        }
    }
    printf("------------------------------\n");
}

void mostrarAlumno(eAlumno unAlumno)


{
   printf("\n%d -  %s -  %d -  %d\n",unAlumno.idalumno,unAlumno.nombre,unAlumno.nota,unAlumno.Localidad);

}

/** Codigo para Ordenar e Informes **/

