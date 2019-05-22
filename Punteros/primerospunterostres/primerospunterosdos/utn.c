void mostrarCadena1(char* punteroCadena)
{
    while(*punteroCadena != '\0')
    {
        printf("\nla letra es %c",*punteroCadena);
        printf("\nY su direccion de memoria es %p",*punteroCadena);
        printf("\nY su direccion de memoria es %p",&*punteroCadena);
        punteroCadena++;
    }
}

void mostrarCadena(char* punteroCadena)
{
    int i=0;

    for(i=0;i<5;)

    {
        printf("\nla letra es %c",*(punteroCadena+i));
        printf("\nY su direccion de memoria es %p",*(punteroCadena+i));
        printf("\nY su direccion de memoria es %p",&*punteroCadena);
        i++;
    }
}
