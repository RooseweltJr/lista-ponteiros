#include<stdio.h>
#include<stdlib.h>

int main( ){

    int i=3, j=5;
    int *p, *q;

    p = &i;
    q = &j;

    printf(" p==&i: %d\n", p==&i);
    printf("\n *p - *q: %d\n", *p - *q);// conteudo de p - conteudo d q
    printf("\n **&p: %d\n", **&p);
    printf("\n 3 - *p/(*q) + 7: %d\n", 3 - *p/(*q) + 7);


return 0;
}