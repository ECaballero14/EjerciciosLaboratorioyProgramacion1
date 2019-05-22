struct a
{
    char nombre[10];
    int edad;
};
void main (void)
{
    FILE *bin;
    struct a pers;
    int cant;
    if ((bin=fopen("bin.dat","rb"))==NULL)
    {
        printf("No se pudo abrir el archivo");
        exit(1);
    }
    while(!feof(bin))
    {
        cant=fread(&pers,sizeof(pers),1,bin);
        if(cant!=1)
        {
            if(feof(bin))
                break;
            else
            {
                error("No leyo el ultimo registro");
                break;
            }
        }
        printf("\n%s\t%d",pers.nombre,pers.edad);
    }
    fclose(bin);
    getch();
}
