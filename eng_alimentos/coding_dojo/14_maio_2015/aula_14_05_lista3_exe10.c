/*Turma Eng. Alimentos 14/05/2015
 Escreva um Algoritmo que imprima todos
  os números ímpares do intervalo
   fechado de 1 a 100. 
*/

#include <stdio.h>

int main(){
	int i;
	for (i = 1; i <= 100; i = i + 2 )
		// imprime i se i é ímpar
	  printf ("%d ",i);	
	
	/* // Também poderia ter sido feito conforme abaixo - pra treinar o uso de if
	for(i = 1; i <= 100; i++){
		// imprime i se i é ímpar
	  if (i % 2){ //ou i % 2 == 1 - são equivalentes
	    printf ("%d ",i);	
	  }
	}
	*/
	
	return 0;
}


