#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
int getEdad();
int main()
{
    int edad;
    if(getEdad(&edad)==0){
        printf("La edad es %d",edad);
    }
    return 0;
}

int getEdad(int* pEdad){

    int reintentos=3;
    int retorno = -1;
    int auxiliarEdad;


    for(reintentos=3; reintentos>0; reintentos--){

        printf("\nEdad?");
        if(scanf("%d",&auxiliarEdad)==1){
        if(auxiliarEdad >= 0 && auxiliarEdad < 199){
            *pEdad=auxiliarEdad;
            retorno=0;
            break;
        }else{
            printf("La edad es numerica, debe ser mayor a 0 y menor a 199");
            __fpurge(stdin);
        }
        }

    }

    return retorno;
}
