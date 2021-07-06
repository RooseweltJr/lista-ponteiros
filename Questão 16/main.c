//O tempo para a questão 15 foi de 0.006 ms, já para a 13 foi de 0.003 ms. O modelo usado para determinar foi por meio da biblioteca time.h, as funções clock(), clock_t e CLOCKS_PER_SECOND.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
 int  n,c,d;
 float *x,num,transferidor;
 clock_t tempo;// CRIA UMA VARIAVEL P/ ARMAZENAR O TEMPO

  printf("Quantos números serão inseridos?");
  scanf(" %i",&n);
  x = malloc (n* sizeof(float));
  if (x == 0 || x == NULL) printf("Erro de alocação");
  
  // input
  for (c = 0;c <n; c++){
    printf("\nDigite um número real:");
    scanf(" %f",&num);
    x[c] = num;
  }
  // meu bubble
  tempo = clock(); //TEMPO INICIAL
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
  tempo = clock()/*tempo final*/-tempo;/*tempo inicial*/
  //out put
  printf("\nOs números em ordem são:");

  for(c = 0;c <n; c++){
    printf("%.2f ",x[c]);
  }
  printf("\nTempo de execução(milisegundos): %lf", ((double)tempo)/((CLOCKS_PER_SEC/1000))); 
  free(x);
  return 0;
}