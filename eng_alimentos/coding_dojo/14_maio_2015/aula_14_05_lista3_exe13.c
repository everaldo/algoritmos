 /* Engenharia de Alimentos - 14/05/2015
 Escreva um Algoritmo que 
 receba dez n�meros do 
 usu�rio e imprima o cubo de cada n�mero
 */
#include <stdio.h>
#include <math.h> //Para usar a fun��o pow

int main(){
	float n;
	int i = 0;
	
	do{
		printf("Digite um numero: ");
		scanf("%f", &n);
		printf("%.2f\n", pow(n, 3.0));
		i++;
	}while(i < 10);
	
	
	
	return 0;
}
