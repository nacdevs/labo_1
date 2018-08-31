#include <stdio.h>
//#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"
int getEdad();
//int getEntero(int* pEdad, int reintentos, char* msg, char* msgErr, int min, int max);
int main()
{
    int edad;
    char nombre[20]={'\0'};
    /*if(getEdad(&edad)==0){
        printf("La edad es %d",edad);
    }*/

    if((utn_getEntero(&edad,3, "Edad?", "Error",0,199)==0) && (utn_getNombre(&nombre,3)==0)){
        printf("La edad es %d",edad);
        printf("\nEl nombre es %s",nombre);
        printf(&nombre+1);
        printf(&nombre+2);
    }
    return 0;
}



/*int getEdad(int* pEdad){

    int reintentos=3;
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
}*/
