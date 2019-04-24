
typedef struct
{
    int Legajo;
    char Apellido[]={"FERNANDEZ","MARTINEZ","ALVAREZ"};
    char Nombre[]={"IGNACIO","JORGE","DAMIAN"};
    char sexo;
    float salario[]={1000,2000,3000};
    char fechadeingreso[];
    int idSector;
}eEmpleado;

typedef struct
{
    char dia[]={"4","5","6"};
    char mes[]={"12","15","16"};
    char ano[]=}{"2016","2017","2018"};
}eFecha;

typedef struct
{
    int id;
    char Descripción[]={1,"RRHH",2,"COMPRAS",3,"VENTAS"};
}eSector;


//void inicializar(eEmpleado[],int);//Inicializo todo
void AltaEmpleado(eEmpleado[], int);
void mostrarEmpleado(eEmpleado);
