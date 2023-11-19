#include <stdio.h>

 

int main(void)
{
    int mi_arreglo[6] = {1,23,17,4,-5,100};
    int *ptr;
    int i;
    ptr = &mi_arreglo[0]; /* apuntamos nuestro puntero
    al primer elemento del arreglo*/
    printf("\n\n");
      for (i = 0; i < 6; i++)
          {
            printf("mi_arreglo[%d] = %d ", i, mi_arreglo[i]); /*<-- A */
            printf("ptr + %d = %d\n",i, *(ptr + i)); /*<-- B */
            //printf ("ptr + %d = %d\n", i, *ptr++);
            //printf("ptr + %d = %d\n", i, *(++ptr));
          }
             return 0;
}
 
 