#include<stdio.h>
#include<stdlib.h>

 int main (){

    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value;// VÁLIDO

    scanf("%f", &aloha);// VÁLIDO- PRÉM É PASSIVEL DE ACARRETAR LIXO DE MEMÓRIA

    //aloha = "value"; // INVÁLIDO- Creio que tenha sido proposital colocar o value entre parentese. Logo, ALOHA É UM FLOAT NÃO UM CHAR.

    printf("%f", aloha);// VÁLIDO

    coisas[4][4] = aloha[3];// VÁLIDO

    //coisas[5] = aloha;// INVÁLIDO- NÃO SE TEM COMO ATRIBUIR UMA VARIÁVEL A UM VETOR

    //pf = value;// INVÁLIDO- P COMO PONTEIRO RECEBE VALORES DO TIPO INTEIRO

    pf = aloha;// VÁLIDO

return 0;
 }
