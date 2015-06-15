/* 15/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 * 
 *
 *  18. Escreva uma função que receba dois argumentos: um vetor do tipo
 *  inteiro (int) e uma variável inteira que representa o tamanho desse
 *  vetor. O nome da função é “soma” e o tipo de retorno é inteiro (int).
 *  Essa função deve retornar a soma de todos os elementos do vetor.
 *
 *
 *
 */
#include <stdio.h>

#define TAM 20

int soma(int v[], int tam){
	int i, soma_vetor = 0;
	
	for(i = 0; i < tam; i++){
		soma_vetor = soma_vetor + v[i];
	}
	return soma_vetor;
	
}

int main(){
  int i, n, v[TAM];
  
  printf("Digite quantos numeros deseja ler\n");
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    printf("Digite um numero\n");
    scanf("%d", &v[i]);
  }
  //Note que usamos o retorno da função soma diretamente no printf
  printf("A soma dos numeros digitados foi: %d \n", soma(v,n));
  return 0;
}


