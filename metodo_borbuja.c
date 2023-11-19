#include <stdio.h>

void ingresa_datos(int n,int arreglo[]){
    printf("Ingresa los datos del arreglo\n");
    for(int i=0; i<n;i++){
        printf("Ingresa el valor del elemento (%d) del arreglo: ",i+1);
        scanf("%d",&arreglo[i]);
    }

}

void imprime_vector(int n,int arreglo[]){
    //printf("El vector original es:\n ");
    for (int i=0; i<n;i++){
        printf(" %d",arreglo[i]);
    }
}

void burbuja(int arreglo[],int n){

    for(int i=0;i<n;i++){

        for(int j=0;j<n-i-1;j++){
            
            if(arreglo[j]>arreglo[j+1]){
                //intercambiar
                int temp=arreglo[j];
                arreglo[j]=arreglo[j+1];
                arreglo[j+1]=temp;
            }
        }
    }
    printf("\nEl vector ordenado es el siguiente:\n ");
    imprime_vector(n,arreglo);
}



int main(){

    int n;
    printf("Cuantos elementos desea ingresar?: ");
    scanf("%d",&n);
    int arreglo[n];
    ingresa_datos(n,arreglo);
    printf("El vector original es: ");
    imprime_vector(n,arreglo);
    
    burbuja(arreglo,n);
 


    return 0;
}