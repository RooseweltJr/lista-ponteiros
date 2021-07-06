#include<stdio.h>
#include<stdlib.h>

int main(){

    double x[4];
    printf("x  = %d ", x);
    printf("\nx+1= %d ",x+1 );
    printf("\nx+2= %d ", x+2);
    printf("\nx+3= %d ", x+3);

return 0;
}

    /* RESULTADO IMPRESSO:
        x  = 6422272
        x+1= 6422280
        x+2= 6422288
        x+3= 6422296*/

/* Aqui acontece  o mesmo do que proposto no problema, x quando declarado como double
 tem valor de 8 bytes.*/
