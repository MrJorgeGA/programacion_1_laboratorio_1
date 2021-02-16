#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static int getInt(int* pResultado);
static int esNumerica(char* cadena);
static int myGets(char* cadena, int longitud);
static int esAlfabetica(char* cadena);
static int esAlfanumerica(char* cadena);
static int esNumericaFloat(char* cadena);
static int getFloat(float* pResultado);
static int getChar(char* pResultado);


int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
    int numero;
    int intentos = 0;
    int retorno = -1;
    if (pResultado!=NULL&&mensaje!=NULL&&mensajeError!=NULL&&maximo>minimo&&reintentos>=0) {
        do {
            printf("%s",mensaje); //getInt(&numero);
            if (getInt(&numero)==0&&numero>=minimo&&numero<=maximo) {
                retorno=0;
                *pResultado=numero;
                break;
            };
            fflush(stdin);
            printf("%s",mensajeError);
            intentos++;
        } while (intentos<=reintentos);
    };
    return retorno;
}

int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos)
{
    char caracter;
    int intentos = 0;
    int retorno = -1;
    if (pResultado!=NULL&&mensaje!=NULL&&mensajeError!=NULL&&maximo>minimo&&reintentos>=0) {
        do {
            printf("%s",mensaje);
            if (getChar(&caracter)==0&&caracter>=minimo&&caracter<=maximo) {
                retorno=0;
                *pResultado=caracter;
                break;
            };
            fflush(stdin);
            printf("%s",mensajeError);
            intentos++;
        } while (intentos<=reintentos);
    };
    return retorno;
}

int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos)
{
    float numero;
    int intentos = 0;
    int retorno = -1;
    if (pResultado!=NULL&&mensaje!=NULL&&mensajeError!=NULL&&maximo>minimo&&reintentos>=0) {
        do {
            printf("%s",mensaje);
            if (getFloat(&numero)==0&&numero>=minimo&&numero<=maximo) {
                retorno=0;
                *pResultado=numero;
                break;
            };
            fflush(stdin);
            printf("%s",mensajeError);
            intentos++;
        } while (intentos<=reintentos);
    };
    return retorno;
}

void imprimirVector (int Vector[], int len)
{
    int i;
    for (i=0;i<len;i++) {
        printf("%d ",Vector[i]);
    };
}

float promedioVector (int Vector[], int len)
{
    int i, suma=0;
    for (i=0;i<len;i++) {
        suma+=Vector[i];
    };
    return (float)suma/len;
}

static int getInt(int* pResultado)
{
    int retorno=-1;
    char buffer[4096];
    //scanf("%s", buffer);
    if (myGets(buffer, sizeof(buffer))==0 && esNumerica (buffer)) {
        retorno = 0;
        *pResultado = atoi(buffer);
    };
    return retorno;
}

static int esNumerica(char* cadena)
{
    int retorno = 1;
    int i = 0;
    if (cadena[0]=='-') {
        i = 1;
    };
    for (;cadena[i]!='\0';i++) {
        if (cadena[i]>'9'||cadena[i]<'0') {
            retorno = 0;
            break;
        };
    };
    return retorno;
}

static int myGets(char* cadena, int longitud)
{
    fgets(cadena,longitud,stdin);
    cadena[strlen(cadena)-1] = '\0';
    return 0;
}

static int esAlfabetica(char* cadena)
{
    int retorno = 1;
    int i;
    for (i=0;cadena[i]!='\0';i++) {
        if (cadena[i]<'A'||(cadena[i]>'Z'&&cadena[i]<'a')||cadena[i]>'z') {
            retorno = 0;
            break;
        };
    };
    return retorno;
}

static int esAlfanumerica(char* cadena)
{
    int retorno = 1;
    int i;
    for (i=0;cadena[i]!='\0';i++) {
        if (cadena[i]<'0'||(cadena[i]>'9'&&cadena[i]<'A')||(cadena[i]>'Z'&&cadena[i]<'a')||cadena[i]>'z') {
            retorno = 0;
            break;
        };
    };
    return retorno;
}

static int getFloat(float* pResultado)
{
    int retorno=-1;
    char buffer[4096];
    if (myGets(buffer, sizeof(buffer))==0 && esNumericaFloat(buffer)) {
        retorno = 0;
        *pResultado = atof(buffer);
    };
    return retorno;
}

static int esNumericaFloat(char* cadena)
{
    int retorno = 1;
    int i = 0;
    int banderapunto = 0;
    if (cadena[0]=='-') {
        i = 1;
    };
    for (;cadena[i]!='\0';i++) {
        if (cadena[i]=='.') {banderapunto++;};
        if (cadena[i]<'.'||cadena[i]=='/'||cadena[i]>'9'||banderapunto>1) {
            retorno = 0;
            break;
        };
    };
    return retorno;
}
static int getChar(char* pResultado)
{
    int retorno=-1;
    char buffer[4096];
    if (myGets(buffer, sizeof(buffer))==0 && esAlfabetica(buffer)) {
        retorno = 0;
        *pResultado = buffer[0];
    };
    return retorno;
}
