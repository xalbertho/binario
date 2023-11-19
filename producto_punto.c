
#include <stdio.h>

void pide_datos(int vec1[],int tam){
    //vec1[tam];
    for (int i=0; i<tam;i++){
        printf("\nIngrese el valor (%d) del vector: ",i+1); scanf("%d",&vec1[i]);
    }
}
int producto_punto(int vec1[],int vec2[],int resultado,int tam){
    int multiplicacion[tam];
    for(int i=0;i<tam;i++){
        multiplicacion[i]=vec1[i]*vec2[i];
        resultado+=multiplicacion[i];

    }
  printf("El producto punto es: %d",resultado );
}

int main(){
    int tam;
    printf("De que tamaño son los vectores: "); scanf("%d",&tam);
    int vec1[tam],vect2[tam],resultado=0;
    printf("\nIngrese los valores del vector A: "); pide_datos(vec1,tam);
    printf("\nIngrese los valores del vector B: "); pide_datos(vect2,tam);

    producto_punto(vec1,vect2,resultado,tam);
   
    return 0;

}