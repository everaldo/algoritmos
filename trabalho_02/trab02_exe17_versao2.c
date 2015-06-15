/* 14/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 *
 *
 * 17. Escreva uma função que receba dois argumentos do tipo inteiro
 * (int) e compara-os. O nome da função é "compara" e o tipo de retorno
 * é inteiro (int). Se os dois números são iguais, a função deve retornar
 * zero. Se o primeiro argumento é menor que o segundo, a função
 * retorna -1. Senão, se o primeiro argumento for maior que o segundo,
 * a função retorna 1.
 *
 * Versão mais compacta
 *
*/

#include <stdio.h>

//Versão mais compacta
int compara(int x, int y){
	if (x == y) return 0;
	if(x < y)   return -1;
	else        return 1;

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


