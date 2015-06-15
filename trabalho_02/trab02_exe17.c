/* 15/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 *
 *
 * 17. Escreva uma fun��o que receba dois argumentos do tipo inteiro
 * (int) e compara-os. O nome da fun��o � "compara" e o tipo de retorno
 * � inteiro (int). Se os dois n�meros s�o iguais, a fun��o deve retornar
 * zero. Se o primeiro argumento � menor que o segundo, a fun��o
 * retorna -1. Sen�o, se o primeiro argumento for maior que o segundo,
 * a fun��o retorna 1.
 *
 *
 *
*/

#include <stdio.h>

int compara(int x, int y){
	if (x == y){
		return 0;
	}
	else if(x < y){
		return -1;
	}
	else if (x > y){
		return 1;
	}

}

int main(){
	int x = 5, y = 6;
	int resultado;
	
	resultado = compara(x, y);
	
	if(resultado == 0){
		printf("sao iguais\n");
	}
	else if(resultado == 1){
		printf("primeiro eh maior\n");

	}
	else {
		printf("segundo eh maior\n");

	}
	return 0;
}



