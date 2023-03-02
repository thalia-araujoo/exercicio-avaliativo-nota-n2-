#include <stdio.h>
//Escreva um programa que solicite ao usuário que digite um número inteiro positivo n.
//Em seguida, crie um vetor dinamicamente alocado de tamanho n.
//e preencha o vetor com valores inteiros informados pelo usuário.
//Em seguida, crie um ponteiro que aponte para o primeiro elemento do vetor 
//e percorra o vetor utilizando esse ponteiro, imprimindo na tela os valores dos elementos do vetor em ordem inversa.

int main(){
	int n;
	int *pv;
	printf("Informe um numero inteiro positivo: ");
	scanf("%d", n);
	
	int v[n];
	
	//para preecher os vetores e necessario usar for para percorrer os valores
	
	printf("informe os vetores desejados:\n");
	for(int i=0; i<n; i++){
		scanf("%d", &v[i]);

	}
	
	pv = v; //quando queremos apontar pro primeiro elemento e so colocar o nome dele, aq ele conhece o 
			//endereço do vetor
			
	//para mostrar os valores inversos, fazemos outro for
	for(int j=n-1; j>=0; j--){		//j=n-1, pq,suponhamos que o valor lido seja 100, entt aq ele lê ate 99
		printf("%d", *(pv + j));    //e aq ele mostra o valor do ponteiro mais um 
	}
	
	
	return 0;
}
