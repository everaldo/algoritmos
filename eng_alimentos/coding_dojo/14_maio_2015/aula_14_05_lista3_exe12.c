/* Turma Eng. Alimentos
	14/05/2015

Escreva um Algoritmo que receba
dez n�meros do usu�rio e imprima
 o quadrado de cada n�mero.
	
*/

#include <stdio.h>
#include <math.h> //Para usar a fun��o pow

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

//Exerc�cio feito com la�o do-while. Poderia ter sido feito com for ou while