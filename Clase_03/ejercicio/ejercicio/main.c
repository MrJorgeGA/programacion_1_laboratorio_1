#include <stdio.h>
#include <stdlib.h>

int suma(int n1, int n2);
int resta(int n1, int n2);
int multiplicacion(int n1, int n2);
float division(int n1, int n2, float* resultado);

int main()
{
    int numero1, numero2, resultadoi, aux;
    float resultadof;
    char signo;
    do {
        printf ("Ingrese tipo de operacion a realizar (+ - * /): "); scanf("%c", &signo);
    } while (signo!='+'&&signo!='-'&&signo!='*'&&signo!='/');
    printf("Ingrese un numero: ");scanf("%d",&numero1);
    printf("Ingrese otro numero: ");scanf("%d",&numero2);
    switch (signo) {
        case '+':
            resultadoi = suma(numero1,numero2);
            break;
        case '-':
            resultadoi = resta(numero1,numero2);
            break;
        case '*':
            resultadoi = multiplicacion(numero1,numero2);
            break;
        case '/':
            aux = division(numero1,numero2,&resultadof);
            break;
    };
    if (aux==1) {
        printf("No se puede dividir por cero.\n");
    } else if (signo=='/'){
        printf("El resultado es %.2f\n",resultadof);
    } else {
        printf("El resultado es %d\n",resultadoi);
    }
    return 0;
}

int suma(int n1, int n2)
{
    int r;
    r=n1+n2;
    return r;
}
int resta(int n1, int n2)
{
    int r;
    r=n1-n2;
    return r;
}
int multiplicacion( int n1, int n2)
{
    int r;
    r=n1*n2;
    return r;
}
float division(int n1, int n2, float* resultado)
{
    int error;
    float r;
    if (n2==0) {
        error=1;
    } else {
        r=(float)n1/n2;
        (*resultado) = r;
    };
    return error;
}
