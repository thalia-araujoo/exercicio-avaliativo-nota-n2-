//Escreva um programa que declare um array de inteiros com 5 elementos e um ponteiro para o primeiro elemento do array.
// Em seguida, preencha o array com valores informados pelo usu�rio e imprima esses valores utilizando o ponteiro. Ao final, mostre em tela cada valor armazenado e seu respectivo endere�o de mem�ria. 
#include <stdio.h>


int main(){
	
	int i, numeros[5];
	int *pt;
	
	for(int i = 0; i < 5; i++){
		printf("Informe os valores: ");
		scanf("%d", &numeros[i]);
	
	}
	
    
	pt = numeros;
	
	for(int j=0; j <5; j++){
		printf("O endere�o dessa variavel � %d", *(pt + j));
		printf("%p\n", pt + 1);
	}
	    

	
	
	return 0;
}
	
