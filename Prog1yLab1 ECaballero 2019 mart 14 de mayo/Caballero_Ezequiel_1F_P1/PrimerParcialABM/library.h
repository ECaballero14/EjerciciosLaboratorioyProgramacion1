#define MAX_QTY 200

typedef struct{
    char title[51];
    int code;
    int authorId;
    int status; /**< Active (1) or Inactive (0)  */
}book;

typedef struct{
    char name[51];
    char lastName[51];
    int authorId;
    int status; /**< Active (1) or Inactive (0)  */
}author;

typedef struct {
char lastname[51];
char name[51];
char sex;
char telefono[51];
char email[51];
}socios;

typedef struct{
   int dia;
   int mes;
   int anio;
}efecha;

typedef struct {
char codigoprestamo;
char codigolibro;
char codigosocio;
 efecha fechanac;
}prestamos;

void setBookStatus(book bookArray[],int arrayLenght,int value);
int findBookEmptyPlace(book bookArray[],int arrayLenght);
int findBookByCode(book bookArray[],int arrayLenght,int code);
void setBook(book bookArray[],int freePlaceIndex, int codeAux,char titleAux[], int authorIdAux);
void showBookArray(book bookArray[],int arrayLenght);
void orderBookArrayByTitle(book bookArray[],int arrayLenght);

void setAuthorStatus(author authorArray[],int arrayLenght,int value);
int findAuthorEmptyPlace(author authorArray[],int arrayLenght);
int findAuthorById(author authorArray[],int arrayLenght,int authorIdAux);
void setAuthor(author authorArray[],int freePlaceIndex, int authorIdAux,char nameAux[],char lastNameAux[]);
void showAuthorArray(author authorArray[],int arrayLenght);

void showBookAuthorArray(book bookArray[],int arrayLenght,author authorArray[],int authorArrayLenght);




