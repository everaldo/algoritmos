/* Turma Eng. Alimentos
	14/05/2015
	
 	Escreva um Algoritmo que receba
	dez números do usuário e imprima
	a metade de cada número.
*/

#include <stdio.h>

#define MAX 3 //Testando com apenas 3 valores. Trocar MAX para 10
//#define MAX 10

int main(){
	//Ler 10 números
	//Imprimir a metade de cada número
	
	float n;
	int i;
	
	
	printf("Digite 10 números\n");
	
	for(i = 0; i < MAX; i++){
		printf("Digite: ");
		scanf("%f", &n);
		printf("%f\n", n / 2.0);
	}
	return 0;
		
}
