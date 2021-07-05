#include <stdio.h>
#include <stdlib.h>

int main(void) {
 int  n,c,d;
 float *x,num,transferidor;
  printf("Quantos números serão inseridos?");
  scanf(" %i",&n);// pegando quantas entradas
  x = malloc (n* sizeof(float));// alocando vetor dinâmico
  if (x == 0 || x == NULL) printf("Erro de alocação");

  // input
  for (c = 0;c <n; c++){
    printf("\nDigite um número real:");
    scanf(" %f",&num);
    x[c] = num;
  }
  // meu bubble
  for (c=0;c <n-1;c++){
    for (d=c;d<n;d++)
    {
      if (x[c] > x[d]){
        transferidor = x[c];
        x[c] = x[d];
        x[d] = transferidor;
      }
    }
  }
  //out put
  printf("\nOs números em ordem são:");

  for(c = 0;c <n; c++){
    printf("%.2f ",x[c]);
  }
  free(x);
  return 0;
}