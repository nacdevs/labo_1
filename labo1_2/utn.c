#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"
static int getInt(int* pResultado);
static int getChar(char* pNombre);

int utn_getEntero(int* pEdad, int reintentos, char* msg, char* msgErr, int min, int max){

    int retorno = -1;
    int auxiliarEdad;

    for(reintentos; reintentos>0; reintentos--){
        printf("\nEdad?");
        if(getInt(&auxiliarEdad)==0){                      //scanf("%d",&auxiliarEdad)==1){
            if(auxiliarEdad >= min && auxiliarEdad < max){
            *pEdad=auxiliarEdad;
            retorno=0;
            break;
            }else{
           printf(msgErr);
            __fpurge(stdin);//flush en windows
            }

        }
    }

    return retorno;


}

char utn_getNombre(char* pNombre, int reintentos){
    int retorno;
    char nombre;


    for(reintentos; reintentos >0 ; reintentos--){
        printf("Ingrese nombre:\n");
        if(getChar(&nombre)==0){
            pNombre=nombre;
            retorno=0;
            break;
        }else{
        printf("Nombre Incorrecto");
        __fpurge(stdin);
        }
    }

    return retorno;

}

static int getChar(char* pChars){
        int retorno;

        if(scanf("%c",pChars)<10){
            retorno=0;
        }else{
            retorno=-1;
        }
    return retorno;
}


 static int getInt(int* pResultado){
    int retornoGetInt=-1;
    if(scanf("%d", pResultado)==0){
        retornoGetInt=0;
    }else{
        retornoGetInt=-1;
    }

    return retornoGetInt;

}

static float getFloat(float* pFloat){
    int retorno;
    if(scanf("%f", pFloat)==0){
        retorno=0;
    }else{
        retorno=-1;
    }

    return retorno;



}

