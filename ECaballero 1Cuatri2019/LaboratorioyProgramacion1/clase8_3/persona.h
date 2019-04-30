typedef struct{
    int id;
    char descripais[31];
}eNacion;
typedef struct{
   int dia;
   int mes;
   int anio;
}efecha;
typedef struct{
    char apellido[31];
    char nombre[31];
    int edad;
    int sexo;
    int isEmpty;
    int idnacionalidad;
    efecha fechanac;
    eNacion nacion;
}ePersona;

void alta(ePersona pers[], int cantidad );

void mostrarUno( ePersona per );

void mostrarTodos( ePersona pers[], int cantidad );
