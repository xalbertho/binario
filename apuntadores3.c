#include <stdlib.h>

 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int PasodeParametroRef(int *a,int *b);
int main(int argc, char *argv[]) {
    
    int a=0,b=0;

 

    //printf("El valor de a=%d, b=%d", a,b);
    PasodeParametroRef(&a,&b);
    printf("El valor de a=%d, b=%d", a,b);
    
    return 0;
}

 

 int PasodeParametroRef(int *a,int *b)
{
    (*a) = 50;
    (*b) = 60;
    return 0;
    
}