/* Turma Eng. Alimentos
	14/05/2015
	
 	Escreva um Algoritmo que receba
	dez n�meros do usu�rio e imprima
	a metade de cada n�mero.
*/

#include <stdio.h>

#define MAX 3 //Testando com apenas 3 valores. Trocar MAX para 10
//#define MAX 10

int main(){
	//Ler 10 n�meros
	//Imprimir a metade de cada n�mero
	
	float n;
	int i;
	
	
	printf("Digite 10 n�meros\n");
	
	for(i = 0; i < MAX; i++){
		printf("Digite: ");
		scanf("%f", &n);
		printf("%f\n", n / 2.0);
	}
	return 0;
		
}
