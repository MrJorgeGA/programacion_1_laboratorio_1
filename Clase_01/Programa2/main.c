#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero;
    float suma;
    float promedio;
    int i;
    printf("Ingrese 5 numeros, que se van a promediar\n");
    for (i=1;i<6;i++) {
        printf("Ingrese numero %d: ",i); scanf("%f",&numero);
        suma+=numero;
    };
    printf("Promedio: %.2f\n",suma/5);

    return 0;
}
