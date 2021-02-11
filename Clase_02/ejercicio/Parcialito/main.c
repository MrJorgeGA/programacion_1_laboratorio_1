#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float numero, acumulador;
    printf("Ingrese numeros hasta que desee, de lo contrario, escriba 999\n");
    for (i=0;;i++) {
        printf("Escriba numero %d: ",i+1);scanf("%f",&numero);
        if (numero==999) {break;};
        acumulador+=numero;
    };
    if (i==0) {
        printf("No ha ingresado ningun numero.\n");
    } else {
        printf("El promedio de los numeros ingresados es %.2f.\n", acumulador/i);
    };

    return 0;
}
