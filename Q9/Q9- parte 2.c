#include<stdio.h>
#include<stdlib.h>

int main(){

  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);// Aqui é impresso os blocos de memória do vetor
  }                   // a cada loop é variado 4 bytes por se tratar de uma variável int.

  return 0;
}

