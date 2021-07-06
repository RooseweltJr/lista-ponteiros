#include<stdio.h>
#include<stdlib.h>

int main(){

    float x[4];
    printf("x  = %d ", x);
    printf("\nx+1= %d ",x+1 );
    printf("\nx+2= %d ", x+2);
    printf("\nx+3= %d ", x+3);

return 0;
}

    /* RESULTADO IMPRESSO:
        x  = 6422288
        x+1= 6422292
        x+2= 6422296
        x+3= 6422300*/

/* Aqui acontece  o mesmo do que proposto no problema, x quando declarado como float
 tem valor de 4 bytes.*/
