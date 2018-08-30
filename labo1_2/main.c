#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
int getEdad();
int getEntero(int* pEdad, int reintentos, char* msg, char* msgErr, int min, int max);
int main()
{
    int edad;
    /*if(getEdad(&edad)==0){
        printf("La edad es %d",edad);
    }*/

    if(getEntero(&edad,3, "Edad?", "Error",0,199)){
        printf("La edad es %d",edad);
    }
    return 0;
}

int getEntero(int* pEdad, int reintentos, char* msg, char* msgErr, int min, int max){

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
