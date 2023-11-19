#include<stdio.h>

 

//PASO DE PARAMETROS POR REFERENCIA 
int devolverEnteros(int *numero1, int *numero2);

 

int main(int argc, char const *argv[])
{
    int numero1 = 0, numero2 = 0;
    printf("Antes de llamar a la funcion, numero1 es %d y numero2 es %d\n", numero1, numero2);

 

    // Con el operador & obtenemos la dirección de numero
    devolverEnteros(&numero1, &numero2);
    printf("Despues de llamar a la funcion, numero1 es %d y numero2 es %d\n", numero1, numero2);
}

 

// Ahora sí definimos la función con todo y cuerpo
//Notar el * antes de numero
int devolverEnteros(int *numero1, int *numero2){
    (*numero1) = 10;
    (*numero2) = 20;
}