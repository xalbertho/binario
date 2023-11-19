#include <stdio.h>

int main() {
    char c = 'A';
    printf("Caracter\tDecimal\tHexadecimal\tBinario\n");
    printf("\n");
    printf("%c\t", c-1); printf("\t%d\t", c-1);  printf("\t%X\t", c-1);
     for (int i = 7; i >= 0; i--) {
            printf("%d", (c-1 >> i) & 1);
    }
    printf("\n");
   
    printf("%c\t", c); printf("\t%d\t", c);  printf("\t%X\t", c);
    
    for (int i = 7; i >= 0; i--) {
            printf("%d", (c >> i) & 1);
    }
    printf("\n");

     printf("%c\t", c+1); printf("\t%d\t", c+1);  printf("\t%X\t", c+1);
     for (int i = 7; i >= 0; i--) {
            printf("%d", (c+1 >> i) & 1);
    }
    printf("\n");



    return 0;
}
