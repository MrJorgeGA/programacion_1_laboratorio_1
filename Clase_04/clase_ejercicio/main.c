//Ejercicio donde tengo que pedir edad y peso

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    int edad, peso, respuesta;
    char letra;
    respuesta = utn_getCaracter(&letra, "Letra? ", "Error, la letra debe ser entre A y Z\n", 'A', 'Z', 1);
    if (respuesta==0) {
        printf("La letra es %c\n",letra);
    } else {
        printf ("ERROR\n");
    };
    respuesta = utn_getNumero(&edad, "Edad? ", "Error, la edad debe ser entre 0 y 199\n", 0, 199, 2);
    if (respuesta==0) {
        printf("La edad es %d\n",edad);
    } else {
        printf ("ERROR\n");
    };
    respuesta = utn_getNumero(&peso, "Peso? ", "Error, el peso debe ser entre 0 y 500\n", 0, 500, 3);
    if (respuesta==0) {
        printf("El peso es %d\n",peso);
    } else {
        printf("ERROR\n");
    };
    return 0;
}
