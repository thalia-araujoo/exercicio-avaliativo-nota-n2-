#include <stdio.h>
//Escreva um programa que declare duas variáveis inteiras e dois ponteiros para essas variáveis.
//Em seguida, preencha as variáveis com valores informados pelo usuário.
//Utilizando ponteiros, troque os valores entre as duas variáveis sem usar uma variável temporária e sem utilizar operadores de atribuição direta.
//Em seguida, imprima os valores atualizados das duas variáveis.

int main(){
	int a, b;
	
	int *pa;
	int *pb;
	
	pa = &a;
	pb = &b;
	
	
	printf("\tTroca de variaveis, usando ponteiro\n\n");
	printf("- - -- - - -- - - - - - - -- - - -- - - - - - --\n\n");
	printf("Informe um valor: ");
	scanf("%d", &a);
	
	printf("Informe outro valor: ");
	scanf("%d", &b);
	
	*pa = *pa + *pb;
	*pb = *pa - *pb;
	*pa = *pa - *pb;
	
	printf("valor de A: %d\n valor de B: %d\n", *pa, *pb);
	
return 0;
}
