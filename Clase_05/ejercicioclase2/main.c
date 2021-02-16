#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "../../utn.h"
#define EDADSIZE 5

int main()
{
    int i, edades[EDADSIZE];
    float promedio;
    printf("Debera ingresar %d edades.\n",EDADSIZE);
    for (i=0;i<EDADSIZE;i++) {
        if (utn_getNumero(&edades[i],"Ingrese edad: ", "Error, la edad debe ser mayor o igual a 0\n",0,INT_MAX,2)==0)
            {} else {
            printf("ERROR");
            return -1;
        }
    };
    imprimirVector(edades, EDADSIZE);
    promedio=promedioVector(edades, EDADSIZE);
    printf("\nPromedio: %.2f",promedio);
    return 0;
}
