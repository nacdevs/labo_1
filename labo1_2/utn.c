#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

int utn_getEntero(int* pEdad, int reintentos, char* msg, char* msgErr, int min, int max){

    int retorno = -1;
    int auxiliarEdad;

    for(reintentos; reintentos>0; reintentos--){
        printf("\nEdad?");
        if(scanf("%d",&auxiliarEdad)==1){
            if(auxiliarEdad >= min && auxiliarEdad < max){
            *pEdad=auxiliarEdad;
            retorno=0;
            break;
                }
            }else{
            printf(msgErr);
            __fpurge(stdin);
            }

    }

    return retorno;


}
