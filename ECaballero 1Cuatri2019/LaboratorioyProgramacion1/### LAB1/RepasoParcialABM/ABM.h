typedef struct{
   int dia;
   int mes;
   int anio;
}efecha;

typedef struct{
    int Legajo;
    int idSector;
    int isEmpty;
    char Apellido[5];
    char Nombre[5];
    char sexo;
    float salario;
    efecha nacimiento;
}eEmpleados;

typedef struct{
   int id;
   char Descripcion[5];
}eSector;

void alta(eEmpleados listaEmp[],eSector listaSector[],int cantidad);
void mostrartodos(eEmpleados listaEmp[],eSector listaSector[],int cantidad);
