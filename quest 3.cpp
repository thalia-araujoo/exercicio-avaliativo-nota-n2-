#include <stdio.h>
//Escreva um programa que declare duas vari�veis inteiras e dois ponteiros para essas vari�veis.
//Em seguida, preencha as vari�veis com valores informados pelo usu�rio.
//Utilizando ponteiros, troque os valores entre as duas vari�veis sem usar uma vari�vel tempor�ria e sem utilizar operadores de atribui��o direta.
//Em seguida, imprima os valores atualizados das duas vari�veis.

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
