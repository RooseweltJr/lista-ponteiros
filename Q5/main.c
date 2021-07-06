#include<stdio.h>
#include<stdlib.h>

int main(){

    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    /* (a) */
    valor = 10;// um inteiro
    p1 = &valor;// p1 recebe o endere�o de mem�ria de da vari�vel valor
    *p1 = 20; // se " p1 " vale " &valor ", logo � o mesmo que dizer que o ponteiro " *p " vale " valor "
    printf("%d \n", valor);// o que houve foi que imprimindo-se " valor" a variavel " p " j� tinha acessado o endere�o de do valor
                        // logo quando o ponteiro " *p " recebeu 20, este foi o valor atribuido a vari�vel " valor"
//mostra: 20

    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n", temp);// essa situa�o � semanlhante a anterior sendo o que se diferencia a vari�vel ser do tipo float
//29.0

    /* (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux);// Este auxiliar recebe o conte�do de " p3 " apontou do endere�o de " nome "
//p                        // como o primeiro carcter de nome era " P " esse foi o conte�do impresso

     /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);// Aqui � valido a mesma explica�o anterior. O que h� de novo � que agora o conteudo impresso
//e                        // esta na posis�o 5 do vetor  " nome "

    /* (e) */
    p3 = nome;
    printf("%c \n", *p3); /* Aqui o a vari�vel caractere " p3 " rececebe o valor que est� em "nome"
//p                           quando � impresso o " p* " esse aponta para o o conteudo do endere�o de "nome"
                           dessa forma imprimindo a letra " p" */
   /* (f) */
   p3 = p3+4;
   printf("%c \n", *p3);/* o ponteiro p3 esta acessando o conteudo do endere�o da vari�vel " nome ". Quando se coloca " p3= p3+4 "
                    "p3" vai da posi�ao onde estava percorrendo o vetor at� a 5� posi�o, quando eu chamo o ponteiro *p3 ele resgata o conteudo que est� nesse
                    endere�o. */
//e

   /* (g) */
   p3--;
   printf("%c \n", *p3);/* Aqui � como se " p3 " retornando uma casinha (mesmo que p3=p3-1) dentro no vetor, de modo quando chamamos o ponteiro "p3*" este aponta para o endere�o em que esta o
//i                        conteudo da posi�o 4 da palavra j� citada "Ponteiros" */


  /* (h) */
   vetor[0] = 31;
   vetor[1] = 45;
   vetor[2] = 27;
   p4 = vetor;
   idade = *p4;
   printf("%d \n", idade); /* O ponteiro " *p4 " aponta para o endere�o do primeiro elemento do vetor , logo
                            a impress�o � o conteudo desse endere�o. (idade � apenas um auxilar)*/
//31

   /* (i) */
   p5 = p4 + 1;
   idade = *p5;
   printf("%d \n", idade); /* A situa�o aqui � similiar e dessa vez o lelemnto impresso corresponde ao segundo valor dentro do vetor, que foi
   de froma que foi acrescido uma posi�o a frente da anterior sendo apontado tal conteudo pelo ponteiro " *p5"  */
//45

   /* (j) */
   p4 = p5 + 1;
   idade = *p4;
   printf("%d \n", idade); /* Novamente algo bem similiar ao que vem ocorrendo, dessa vez o valor impresso foi 27. Isso aconteceu por que p4 acrescido a duas posi�es
   a frente no vetor (p4 = p5 + 1;)  teve seu conteudo imprresse quando o ponteiro " *p4 " acessou o respectivo endere�o de mem�ria */

//27

   /* (l) */
   p4 = p4 - 2;
   idade = *p4;
   printf("%d \n", idade); /*  Aqui � v�lida a mesma explica�o sendo dessa vez o antigo valor de "p4" voltando duas posi�oes no vetor e tendo o tal conteudo neste endere�o
                            acessado por " *p4" */
//31

   /* (m) */
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);/*  "p5" recebe o endere�o do segundo elemento do vetor ( p5 = &vetor[2] - 1; ). Q que � mostrado no console � o valor 45 que so pode ser acessado pele
                        apontador *p5*/
//45

  /* /* (n) /*
   p5`;
   printf("%d \n", *p5); */ // o programa n�o compila. " ' " n�o � um tipo de operador.

    return 0;