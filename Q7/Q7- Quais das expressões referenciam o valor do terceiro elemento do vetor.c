#include<stdio.h>
#include<stdlib.h>

int main (){

    int pulo[2] = {0,1,2};
    int *valor;
    *pulo + 2 = valor;
    printf ("*(pulo + 2)= %d",valor );   //6422284
    printf ("\n*(pulo + 4)= %d",*(pulo + 4) ); //6422400
    printf ("\n(pulo + 4)= %d",(pulo + 4) );   //6422312
    printf ("\n(pulo + 2)= %d",(pulo + 2) );   //6422304

return 0;
}
