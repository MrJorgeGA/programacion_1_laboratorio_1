#include <stdio.h>
#include <stdlib.h>

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
    int numero;
    int intentos = 0;
    int retorno = -1;
    if (pResultado!=NULL&&mensaje!=NULL&&mensajeError!=NULL&&maximo>minimo&&reintentos>=0) {
        printf("%s",mensaje); scanf("%d", &numero);
        while (!(numero>=minimo&&numero<=maximo)&&intentos<reintentos) {
            printf("%s",mensajeError);
            printf("%s",mensaje); scanf("%d", &numero);
            intentos++;
        };
        if (numero>=minimo&&numero<=maximo) {
            retorno=0;
            *pResultado=numero;
        };
    };
    return retorno;
}

int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos)
{
    char caracter;
    int intentos = 0;
    int retorno = -1;
    if (pResultado!=NULL&&mensaje!=NULL&&mensajeError!=NULL&&maximo>minimo&&reintentos>=0) {
        printf("%s",mensaje); scanf("%c", &caracter);
        while (!(caracter>=minimo&&caracter<=maximo)&&intentos<reintentos) {
            printf("%s",mensajeError);
            fflush(stdin);
            printf("%s",mensaje); scanf("%c", &caracter);
            intentos++;
        };
        if (caracter>=minimo&&caracter<=maximo) {
            retorno=0;
            *pResultado=caracter;
        };
    };
    return retorno;
}

int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos)
{
    float numero;
    int intentos = 0;
    int retorno = -1;
    if (pResultado!=NULL&&mensaje!=NULL&&mensajeError!=NULL&&maximo>minimo&&reintentos>=0) {
        printf("%s",mensaje); scanf("%f", &numero);
        while (!(numero>=minimo&&numero<=maximo)&&intentos<reintentos) {
            printf("%s",mensajeError);
            printf("%s",mensaje); scanf("%f", &numero);
            intentos++;
        };
        if (numero>=minimo&&numero<=maximo) {
            retorno=0;
            *pResultado=numero;
        };
    };
    return retorno;
}
