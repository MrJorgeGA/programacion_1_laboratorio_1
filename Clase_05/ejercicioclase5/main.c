#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "../../utn.h"
#define LONGITUD 5

int main()
{
    int i;
    int v[LONGITUD];
    int resultado;
    int maximo;
    int minimo;
    char respuesta;
    for (i=0;i<LONGITUD;i++) {
        resultado = utn_getNumero(&v[i], "Ingrese un numero: ", "Error, ingreso no valido",INT_MIN,INT_MAX,3);
        if (resultado!=0) {
            printf("ERROR\n");
        } else {
            if (i==0) {
                maximo = v[i];
                minimo = v[i];
            } else if (v[i]>maximo) {
                maximo = v[i];
            } else if (v[i]<minimo) {
                minimo = v[i];
            };
        };
    };
    for (;;) {
        imprimirVector(v, LONGITUD);
        printf("\nMaximo: %d\nMinimo: %d\nPromedio: %.2f",maximo,minimo,promedioVector(v,LONGITUD));
        fflush(stdin);
        printf("\nDesea modificar un valor? <s/n> "); scanf("%c",&respuesta);
        if (respuesta!='s') {break;};
        fflush(stdin);
        if (utn_getNumero(&i,"Indique posicion del numero a modificar: ", "Error, las posiciones son entre 0 y 4\n", 0, LONGITUD-1, 3)==0) {
            if (utn_getNumero(&v[i], "Ingrese el nuevo numero: ", "Error, ingreso no valido\n",INT_MIN,INT_MAX,3)!=0) {
                printf("ERROR");
                break;
            }
        } else {
            printf("ERROR");
            break;
        };
    };
    return 0;
}
