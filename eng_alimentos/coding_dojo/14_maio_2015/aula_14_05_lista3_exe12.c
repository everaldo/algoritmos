/* Turma Eng. Alimentos
	14/05/2015

Escreva um Algoritmo que receba
dez números do usuário e imprima
 o quadrado de cada número.
	
*/

#include <stdio.h>
#include <math.h> //Para usar a função pow

int main(){
	float n;
	int i = 0;
	
	do{
		printf("Digite um numero: ");
		scanf("%f", &n);
		printf("%.2f\n",pow(n, 2.0));
		i++;
	}while(i < 10);
	
	
	
	return 0;
}

//Exercício feito com laço do-while. Poderia ter sido feito com for ou while