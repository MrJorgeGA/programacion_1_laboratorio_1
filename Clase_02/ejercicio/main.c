/******************************************************************
* Programa: Ejemplo Clase 2
*
* Objetivo:
*   -Realizar un programa que solicite cinco n�meros e imprima por pantalla el
*    promedio, el m�ximo y el m�nimo.
*
* Aspectos a destacar:
*   -El uso de bucles para pedir un n�mero tras otro
*   -El uso de acumuladores, se tiene que guardar la suma para luego hacer
*    el promedio
*   -El uso del if para preguntar si el numero ingresado es mayor o menor
*    para guardar los m�ximos y m�nimos
*
* Version: 0.1 del 29 diciembre de 2015
* Autor: Mauricio D�vila
* Revisi�n: Ernesto Gigliotti
*
* *******************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    float numero;
    float acumulador;
    float maximo;
    float minimo;
    int i;
    printf("Debera ingresar 5 numeros, luego se le informara el promedio, maximo y minimo.\n");
    for (i=0;i<5;i++) {
        printf("Ingrese numero %d: ",i+1); scanf("%f",&numero);
        acumulador+=numero;
        if (i==0) {
            maximo = numero;
            minimo = numero;
        } else {
        if (numero<minimo) {minimo = numero;};
        if (numero>maximo) {maximo = numero;};
        };
    };
    printf("El promedio es: %.2f",acumulador/i);
    printf("\nEl numero mayor fue: %.2f",maximo);
    printf("\nEl numero menor fue: %.2f\n",minimo);

    return 0;
}
