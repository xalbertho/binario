#include <stdio.h>




int main(){

    int arreglo[];
    int i=0;
    char opcion;

    do {
        printf("Ingrese el valor del elemento(%d): ",i+1); scanf("%d",&arreglo[i]);
        i++;
    printf("Desea agregar otro elemento al arreglo? (s/n)"); scanf("% c",&opcion);

    }while(opcion=='S'||opcion=='s');

    return 0;
}