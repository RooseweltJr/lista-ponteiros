#include <stdio.h>
#include <stdlib.h>

void soma_vetor(int*,int*,int*,int );

int main(void) {
  int *x, *y,*soma, c,n;
  printf("Insira quantas componentes terão os vetores a e b:");
  scanf("%i",&n);
  x = malloc(n*sizeof(int));
  if (x == 0 || x == NULL) printf("Erro de alocação");

  y = malloc(n*sizeof(int));
  if (y == 0 || x == NULL) printf("Erro de alocação");
  
  soma = malloc(n*sizeof(int));
  if (soma == 0 || x == NULL) printf("Erro de alocação");

  printf("\nIndique os valores inteiros p/ a:\n");
  for (c=0;c<n;c++){
    scanf("%i",&x[c]);
  }
  printf("\nIndique os valores inteiros p/ b:\n");
  for (c=0;c<n;c++){
    scanf("%i",&y[c]);
  }
  printf("\nO velor soma (a+b) é:(");
  
  for (c=0;c<n;c++){
    if (c == n-1)printf("%i)",soma[c]);
    else printf("%i,",soma[c]);
  }
free(x);
free(y);
free(soma);
  return 0;
}
void soma_vetor(int*a,int*b,int*soma,int n ){
  int c;
  for (c=0;c<n;c++){
    soma[c] = a[c]+b[c]; 
  }
}