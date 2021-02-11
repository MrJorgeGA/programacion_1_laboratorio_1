/******************************************************************
* Programa: Ejemplo Clase 3
*
* Objetivo:
*   -Crear una función que permita ingresar un numero al usuario y lo retorne.
*   -Crear una función que reciba el radio de un círculo y retorne su área
*   -Utilizar las funciones de los puntos 1 y 2 para hacer un programa que calcule
*    el área de un círculo cuyo radio es ingresado por el usuario
*   -Documentar las funciones al estilo Doxygen
*
* Aspectos a destacar:
*   -Declaración de funciones que devuelven y reciben valores
*   -Hacer notar que el uso de funciones evita el código repetido y ayuda a que
*    el mismo sea mas legible
*   -La función debería comenzar indicando el objetivo que persigue y el
*    significado de sus parámetros.
*
* Version: 0.1 del 29 diciembre de 2015
* Autor: Mauricio Dávila
* Revisión: Ernesto Gigliotti
*
* *******************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pedir();
float areacirculo(int radio);

int main()
{
    int radio;
    float area;
    radio = pedir();
    area = areacirculo(radio);
    printf ("El area del circulo es: %.2f\n",area);
    return 0;
}
int pedir()
{
    int numero;
    do {
        printf("Ingrese un numero positivo: ");scanf("%d",&numero);
    } while (!(numero>0));
    return numero;
}
float areacirculo(int radio)
{
    float area;
    area = M_PI*radio*radio;
    return area;
}
