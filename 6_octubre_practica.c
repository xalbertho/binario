#include <stdio.h>
#include <math.h>
void menu(){
    printf("Que opcion desea realizar:\n 1.Calculadora\n 2.Conversion de grados\n 3.Area\n 4.Numero par\n 5.Numero mayor o menor\n");

}
void menu_calcu(){

    printf("\n1. Suma\n 2.Resta\n 3.Multiplicacion\n 4.division\n 5.Poencia de un numero \n 6.Raiz de un numero\n");
}

void caluladora();
void coversion_grados();
void area();
void modulo();
void num_mayor();
void suma(float a, float b);
void resta(float a, float b);
void multiplicacion(float a, float b);
void potencia(float a, float b);
void raiz(float a, float b);
void cel_far(float temp);
void cel_kel(float temp);
void cel_rank(float temp);
void far_cel(float temp);
void far_kel(float temp);
void far_rank(float temp);
void kel_cel(float temp );
void kel_far(float temp);
void kel_rank(float temp);
void rank_cel(float temp);
void rank_far(float temp);
void rank_kel(float temp);
void area_circulo(float radio,float resultado);



int main(){
    int opcion;
    float num1=0,num2=0,num3=0;
    int num_par;
    char regreso;

        do{
        menu(); scanf("%d",&opcion);

        switch(opcion){
            case 1:
                calculadora(num1,num2,num3);
                break;
            case 2:
                conversion_grados(num1,num2,num3);
                break;
            case 3:
                area(num1,num2);
                break;
            case 4:
                numero_par(num_par);
                break;
            case 5:
                num_mayor(num1,num2,num3);
                break;

        }

        printf("\nDesea volver al menu?: (s/n)");scanf(" %c",&regreso);

        system("cls");



    }while(regreso=='s' || regreso=='S');

return 0;
}


void calculadora(float num1,float num2){
        int opcion;
        printf("\nBienvenido al menu.\n Selecciona una opcion");
        menu_calcu(); scanf("%d",&opcion);
            switch(opcion){
                    case 1:
                        suma(num1,num2);
                        break;
                    case 2:
                        resta(num1,num2);
                    break;
                case 3:
                        multiplicacion(num1,num2);
                    break;
                case 4:
                        division(num1,num2);
                    break;
                case 5:
                        potencia(num1,num2);
                    break;
                case 6:
                        raiz(num1,num2);
                    break;

                }
}

void suma(float a, float b){
    printf("\nIntroduce el primer numero: "); scanf("%f",&a);
    printf("\nIntroduce el segundo numero: "); scanf("%f",&b);
    float resultado=a+b;
    printf("\nEl resultado es %.2f",resultado);

}

void resta(float a, float b){
    printf("\nIntroduce el primer numero: "); scanf("%f",&a);
    printf("\nIntroduce el segundo numero: "); scanf("%f",&b);
    float resultado=a-b;
    printf("\nEl resultado es %.2f",resultado);

}

void multiplicacion(float a,float b){
    printf("\nIntroduce el primer numero: "); scanf("%f",&a);
    printf("\nIntroduce el segundo numero: "); scanf("%f",&b);
    float resultado=a*b;
    printf("\nEl resultado es %.2f",resultado);
}

void division(float a,float b){
    printf("\nIntroduce el numerador: "); scanf("%f",&a);
    printf("\nIntroduce el denominador: "); scanf("%f",&b);
    while(b==0){
         printf("\nNo se puede dividir entre 0\n");
         printf("\nIntroduce el denominador: "); scanf("%f",&b);
    }
    float resultado=a/b;
    printf("El resultado de la division es %.2f",resultado);
}

void potencia(float a,float b){
    printf("\Introduce la base: "); scanf("%f",&a);
    printf("\Introduce la potencia: "); scanf("%f",&b);
    float resultado=pow(a,b);
    printf("\nEl resultado de %.2f elevado a %.2f es %.2f",a,b,resultado);


}

void raiz(float a, float b){


    printf("Introduce el numero: "); scanf("%f",&a);
    printf("Introduce el grado de la raiz: "); scanf("%f",&b);
    float resultado=pow(a,(1/b));
    printf("El resultado de la raiz %.2f del numero %.2f es %.2f",b,a,resultado);

}


void menu_temp(){
    printf("Cual es la temperatura de entrada (1-5): ");
    printf("\n1.Celsius \n2.Farenheit \n3.Kelvin \n4.Rankin\n");

}


void conversion_grados(){
    int opcion=0;
    float temp=0;
    char regreso;

    menu_temp();
    scanf("%d",&opcion);
    printf("\nIngrese la temperatura: "); scanf("%f",&temp);

    switch(opcion) {
       case 1:
           cel_far(temp);
           cel_kel(temp);
           cel_rank(temp);
           break;
       case 2:
            far_cel(temp);
            far_rank(temp);
            far_kel(temp);
            break;
       case 3:
            kel_cel(temp);
            kel_far(temp);
            kel_rank(temp);
            break;
       case 4:
            rank_cel(temp);
            rank_far(temp);
            rank_kel(temp);
            break;


    }



}



void cel_far(float temp){
float far=(9/5*temp)+32;
printf("La conversion de %.2f celcius a fahrenheit es : %.2f",temp,far);
}

void cel_kel(float temp){
float k=temp-273.16;
printf("La conversion de %.2f celcius a kelvin es : %.2f",temp,k);
}

void cel_rank(float temp){
float rank=(1.8*temp)+491.67;
printf("La conversion de %.2f celcius a rankie es : %.2f",temp,rank);

}

void far_cel(float temp){
    float cel=(temp-32)/(1.8);
    printf("La conversion de %.2f farhenheit a celcius es: %.2f ",temp,cel);
}

void far_kel(float temp){
    float k=(75*temp+459.67)*(5/9);
    printf("La conversion de %.2f farhenheit a kelvin es: %.2f ",temp,k);

}

void far_rank(float temp){
    float rank=temp+458.67;
    printf("\nLa conversion de %.2f farhenheit a rankie es: %.2f ",temp,rank);
}

void kel_cel(float temp){
    float c=temp-273.16;
    printf("\nLa conversion a grados celcius es: %.2f",c);

}
void kel_far(float temp){
    float f=((temp-273.16)*1.8)+32;
    printf("\nLa conversion a grados Fahrenheit es: %.2f",f);
}

void kel_rank(float temp){
    float rank=temp*1.8;
    printf("\nLa conversion a grados Rankine es: %.2f",rank);

}

void rank_cel(float temp){
    float c=(5/9)*(temp)-491.67;
    printf("\nLa conversion a grados celsius es: %.2f",c);
}

void rank_far(float temp){
    float f=temp+459.67;
    printf("\nLa conversion a grados fahrenheit es: %.2f",f);
}

void rank_kel(float temp){
    float k=(5/9)*(temp-491.67)+273.16 ;
    printf("\nLa conversion a grados kelvin es: %.2f",k);

}

void area(){
            float radio,resultado;
   area_circulo(radio,resultado);

}

    void area_circulo(float radio, float resultado){


printf("\nIngrese el radio del circulo: ");

scanf("%f",&radio);
resultado= (3.14159265)*(radio*radio);
printf("\El area del circulo con radio %.2f es:%.2f\n",radio,resultado);
    }


void numero_par(){
 int numero=0;

    printf("Ingrese un numero: ");
    scanf("%d",&numero);

    if(numero%2==0){
        printf("El numero ingresado es par");
    }else {
        printf("El numero ingresado es impar");
    }

}

void num_mayor(){
    float a=0,b=0,c=0;

    printf("Introduce el primer numero: "); scanf("%f", &a);
    printf("Introduce el segundo numero: "); scanf("%f", &b);
    printf("Introduce el tercer numero: "); scanf("%f", &c);
    if (a == b && b == c) {
        printf("Los tres numeros son iguales: %d\n", a);
    }   else if (a == b || a == c || b == c) {
        printf("Dos numeros son iguales: ");

        if (a == b) {
            printf("%d y %.2f\n", a, b);
            printf("El numero diferente es %.2f\n", c);
        } else if (a == c) {
            printf("%.2f y %.2f\n", a, c);
            printf("El numero diferente es %.2f\n", b);
        } else {
            printf("%.2f y %.2f\n", b, c);
            printf("El numero diferente es %.2f\n", a);
        }
                                            }

        else {
        // Ninguno de los n�meros es igual a otro
        if (a >= b && a >= c) {
            printf("El numero mayor es %.2f\n", a);
            if (b >= c) {
                printf("El numero intermedio es %.2f\n", b);
                printf("El numero menor es %.2f\n", c);
            } else {
                printf("El numero intermedio es %.2f\n", c);
                printf("El numero menor es %.2f\n", b);
            }
        } else if (b >= a && b >= c) {
            printf("El numero mayor es %.2f\n", b);
            if (a >= c) {
                printf("El numero intermedio es %.2f\n", a);
                printf("El numero menor es %.2f\n", c);
            } else {
                printf("El numero intermedio es %.2f\n", c);
                printf("El numero menor es %.2f\n", a);
            }
        } else {
            printf("El numero mayor es %.2f\n", c);
            if (a >= b) {
                printf("El numero intermedio es %.2f\n", a);
                printf("El numero menor es %.2f\n", b);
            } else {
                printf("El numero intermedio es %.2f\n", b);
                printf("El numero menor es %.2f\n", a);
            }
        }
    }
}



