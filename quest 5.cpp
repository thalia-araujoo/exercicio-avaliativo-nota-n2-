#include <stdio.h>
//Escreva um programa que declare uma vari�vel real e um ponteiro para essa vari�vel. Em seguida, preencha a vari�vel com um valor real informado pelo usu�rio e utilize o ponteiro para calcular o dobro desse valor.
//Por fim, utilize o ponteiro para imprimir na tela o valor original e o dobro calculado.
int main(){
	float n;
	float *pn;
	
	printf("\tTrabalhando com ponteiros\n");
	printf("- - - - -- - - - - - -- - - - -- - - -\n");

	printf("Informe um n�mero: ");
	scanf("%f", &n);
		
	pn = &n; //o ponteiro recebe o valor de n, ou seja, se o valor informado for 5, o valor do meu ponteiro � 5
	
	*pn * 2;  // se o meu ponteiro recebe n, suponhamos que seja 5, entt o valor do meu ponteiro � 5 
			//e multiplico por 2, no caso meu VALOR vai ser 10 AGR

	printf("O valor original eh: %.2f\n", *pn); //valor em q n foi alterado, q o meu ponteiro conhecia
	printf("O valor dobrado eh: %.2f\n", *pn * 2); // foi uma multiplica��o em q pegamos o valor original e dobramos ele
													//usnado o ponteiro para modificar,pois meu pn conhece o indere�o do n
	printf("\n");
	
	return 0;
}
