#include <stdio.h>
//Escreva um programa que declare uma variável real e um ponteiro para essa variável. Em seguida, preencha a variável com um valor real informado pelo usuário e utilize o ponteiro para calcular o dobro desse valor.
//Por fim, utilize o ponteiro para imprimir na tela o valor original e o dobro calculado.
int main(){
	float n;
	float *pn;
	
	printf("\tTrabalhando com ponteiros\n");
	printf("- - - - -- - - - - - -- - - - -- - - -\n");

	printf("Informe um número: ");
	scanf("%f", &n);
		
	pn = &n; //o ponteiro recebe o valor de n, ou seja, se o valor informado for 5, o valor do meu ponteiro é 5
	
	*pn * 2;  // se o meu ponteiro recebe n, suponhamos que seja 5, entt o valor do meu ponteiro é 5 
			//e multiplico por 2, no caso meu VALOR vai ser 10 AGR

	printf("O valor original eh: %.2f\n", *pn); //valor em q n foi alterado, q o meu ponteiro conhecia
	printf("O valor dobrado eh: %.2f\n", *pn * 2); // foi uma multiplicação em q pegamos o valor original e dobramos ele
													//usnado o ponteiro para modificar,pois meu pn conhece o indereço do n
	printf("\n");
	
	return 0;
}
