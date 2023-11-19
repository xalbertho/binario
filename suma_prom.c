#include <stdio.h>

void pide_vector(int vec[], int longitud){
    for(int i=0;i<longitud;i++){
        printf("\nIngrese el elemnto (%d) del arreglo: ",i+1); scanf("%d",&vec[i]);
    }
}

void operaciones(int vec[], int longitud){
    int suma=0;
    float promedio;

    for(int i=0; i<longitud;i++){
        suma+=vec[i];

    }
    promedio=suma/longitud;
    printf("La suma de los valores ingresados es: %d\nEl promedio de los valores ingresados es: %.2f",suma,promedio);
}


int main(){
    int vec[]={0}, suma,longitud;
  
    printf("Ingrese el numero de elementos a considerar"); scanf("%d",&longitud);
   // int vec[longitud];
    pide_vector(vec,longitud);
    operaciones(vec,longitud);

    return 0;
}
