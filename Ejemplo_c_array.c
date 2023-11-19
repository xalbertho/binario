#include <stdio.h>

int main(){

    int vec1[4],vec2[4],resultado[4];
    printf("Ingresa los elementos del vector 1");

    for(int i=0; i<4;i++){
        printf("\nEl valor %d",i+1); scanf("%d",&vec1[i]);
    }

    printf("\nIngresa los elementos del vector 2");

    for(int i=0; i<4;i++){
        printf("\nEl valor %d",i+1); scanf("%d",&vec2[i]);

    }
    
    //calcular la suma de ambos vectores 
    for(int i=0;i<5;i++){
        resultado[i]=vec1[i]+vec2[i];
    }
    
    printf("\nLa suma de ambos vectores es: ");
    // Imprimir el vector en pantalla

    for(int i=0; i<4;i++){
        printf("\n%d",resultado[i]);
    }




    return 0;
}