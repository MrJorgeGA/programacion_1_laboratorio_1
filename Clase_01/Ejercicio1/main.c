#include <stdio.h>
#include <stdlib.h>

int main()
{
    //pedir dos numeros e imprimir suma, resta, division y multiplicacion
    float numero1;
    float numero2;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    printf("Indique el primer numero: "); scanf("%f",&numero1);
    printf("Indique el segundo numero: "); scanf("%f",&numero2);
    suma = numero1+numero2;
    resta = numero1-numero2;
    multiplicacion = numero1*numero2;
    printf("Suma: %.2f",suma);
    printf("\nResta: %.2f",resta);
    printf("\nMultiplicacion: %.2f",multiplicacion);
    if (numero2!=0){
        division = numero1/numero2;
        printf("\nDivision: %.2f\n",division);
    } else {printf("\nNo se puede dividir por cero!!!\n");};
    return 0;
}
