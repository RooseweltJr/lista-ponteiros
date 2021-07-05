#include <stdio.h>
#include<stdlib.h>

void produto(int **,int **,int**,int m,int n,int p);
void impressora (int **C,int m,int p);

int main(void) {
  int m, n,p,k,**A,**B,**C,i,j;

  printf("Inira a quantidade de linhas (m) para matriz A:");
  scanf("%i",&m);
  printf("Inira a quantidade de colunas (n) de A e de linhas (n) de B:");
  scanf("%i",&n);
  printf("Colunas de B:");
  scanf("%i",&p);

  //criando as matrizes
  //A:
  A = malloc(m*sizeof(int*));//cria linhas

  for (i = 0;i<m;i++){
    A[i] = malloc(n*sizeof(int));
  }//cria as colunas
  //B:
  B = malloc(n*sizeof(int*));//cria linhas

  for (i = 0;i<n;i++){
    B[i] = malloc(n*sizeof(int));
  }//cria as colunas
  //C:
  C = malloc(m*sizeof(int*));//cria linhas

  for (i = 0;i<p;i++){
    C[i] = malloc(n*sizeof(int));
  }//cria as colunas

  //INPUT
  //A:
  printf("\n+INSIRA OS VALORES INTEIROS PARA A:\n");
  for (i=0;i<m;i++){
    for(j=0;j<n;j++){
      printf("\nInsira o valor para A[%i][%i]:",i,j);
      scanf("%i",&A[i][j]);
    }
  }
  //B:
  printf("\n+INSIRA OS VALORES INTEIROS PARA B:\n");
  for (i=0;i<n;i++){
    for(j=0;j<p;j++){
      printf("\nInsira o valor para B[%i][%i]:",i,j);
      scanf("%i",&B[i][j]);
    }
  }
  //função para realizar o produto
  produto(A, B,C,m,n,p);
  //função para imprimir
  impressora(C,  m, p);
//fechando
free(A);
free(B);
free(C);
 return 0;
}
void produto(int **A,int **B,int**C,int m,int n,int p){
  int i,j,k;
  // Formula do produto de matrizes de ALP
  for(i=0;i<m;i++){
    for(j=0;j<p;j++){
      for (k=0;k<n;k++){
        C[i][j] += A[i][k]*B[k][j];
      }
    }
  }
}
void impressora (int **C,int m,int p){
  int i,j;
  printf("\n\n+Sendo C= AB, então C[%i][%i] é igual a:\n",m,p);
   for (i=0;i<m;i++){
    for(j=0;j<p;j++){
      printf("%3i",C[i][j]);
    }
    printf("\n");
  }
}