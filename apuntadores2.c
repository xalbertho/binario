#include<stdio.h>

int incrementar(int *numero);

int main(int argc, char const *argv[])
{
    int numero = 10;
    printf("Antes de llamar a la funcion, numero es %d\n", numero);


    // Con el operador & obtenemos la dirección de numero
    incrementar(&numero);//Invocación de la función con el operador de direccion 
    printf("Despues de llamar a la funcion, numero es %d", numero);
}


// Ahora sí definimos la función con todo y cuerpo
//Notar el * antes de numero
int incrementar(int *numero){
    //Incrementar en 1
    //(*numero) = (*numero) + 1;
   ++*numero; 
}