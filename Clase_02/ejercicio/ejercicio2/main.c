#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero;
    float acumulador;
    float maximo;
    float minimo;
    int i;
    printf("Debera ingresar numeros hasta que escriba '888'.\n");
    for (i=0;;i++) {
        printf("Ingrese numero %d: ",i+1); scanf("%f",&numero);
        if (numero==888) {break;};
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
