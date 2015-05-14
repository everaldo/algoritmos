/* Turma Eng. Alimentos
	14/05/2015
	
	Escreva um Algoritmo que
	imprima todos os números
	inteiros de 100 a 1
	(em ordem decrescente).
*/

#include <stdio.h>

int main(){
	int i;
	
	for(i = 0; i < 100; i++)
		printf("%d ", 100 - i);
	// ou também
	/*
	 * for(i = 100; i >= 1; i--)
		printf("%d ", i);
	 * 
	 */
	printf("\n");
	
	
}
