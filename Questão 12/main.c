#include <stdio.h>
int main (){
	int a; // a é um inteiro
	int *ptr;// ptr é um ponteiro p/ armazenar inteiros
	
	a = 7;
	ptr = &// ptr recebe o endereço de a
	printf("O endereço de a é %p\nO valor de aPtr é %p", &a, aPtr );
	printf( "\n\nO valor de a é %d\nO valor de *aPtr é %d", a, *aPtr );
	printf("\n Logo, na linha anterior, usou-se o endereço de a em *ptr p/ acessar o valor lá contido");
	return 0;
}