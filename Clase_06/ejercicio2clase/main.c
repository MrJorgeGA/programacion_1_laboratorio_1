#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../utn.h"

int main()
{
    int auxInt;

    if(utn_getNumero(&auxInt, "Numero? ", "Error\n",-2,10,2)==0){
        printf("El numero es %d",auxInt);
    };

    return 0;
}
