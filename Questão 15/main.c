#include <stdio.h>
#include <stdlib.h>

int comparador(const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}//ensina o qsort como ordenar 

int main(void) {
 int  n,c,d;
 float *x,num,transferidor;

  printf("Quantos números serão inseridos?");
  scanf(" %i",&n);// pegando quantas entradas
  x = malloc (n* sizeof(float));// alocando vetor dinâmico
  if (x == 0 || x == NULL) printf("Erro de alocação");
  
  // input
  for (c = 0;c <n; c++){//armazenado os numeros no array x
    printf("\nDigite um número real:");
    scanf(" %f",&num);
    x[c] = num;
  }
 // ordenando com q sort()
  qsort(x,n,sizeof(float),comparador/*ponteiro p/ função :)*/);
  //out put
  printf("\nOs números em ordem são:");

  for(c = 0;c <n; c++){// imprimindo vetor ordernado
    printf("%.2f ",x[c]);
  }
  free(x);//liberando o x
  return 0;