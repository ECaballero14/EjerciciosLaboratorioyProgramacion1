elocalidad construirlocalidad()
{
 ellocaliad retornarlocalidad;
 printf("Ingrese el id:");
 scanf("%d",&retornarlocalidad.id);

 printf("Ingrese la descripcion:");
 fflush(stdin);
 gets(retornarlocalidad.descripcion);

 retornarlocalidad

}

int cargarlocalidades(int cargarloregistros,elocalidad listado[])
{
    int i;
    for(i=0;i<cantidadregistros,i++){
        listado[i]=construirlocalidad();
    }
    retur 1;
}
