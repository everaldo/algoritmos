/* 15/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 * 
 * 19. Escreva uma função que receba três argumentos: dois vetores do
 * tipo inteiro (int) e uma variável inteira que representa o tamanho
 * desses vetores. O nome da função é “iguais” e o tipo de retorno é
 * inteiro (int). Essa função deve retornar 1 (um) se os dois vetores
 * forem idênticos e 0 (zero), caso contrário.
 *
 */
#include <stdio.h>

#define TAM 20

int iguais(int v[], int u[], int tam){
	int i;
	
	for(i = 0; i < tam; i++){
		if(v[i] != u[i]){
			return 0;
		}
	}
	return 1;
}

int main(){
  int i, n, v[TAM], u[TAM], identicos;
  
  printf("Digite o tamanho dos vetores\n" );
  scanf("%d", &n);

  printf("Digite os elementos do primeiro vetor\n");
  for(i = 0; i < n; i++){
    printf("Digite um numero\n");
    scanf("%d", &v[i]);
  }

  printf("Digite os elementos do segundo vetor\n");
  for(i = 0; i < n; i++){
    printf("Digite um numero\n");
    scanf("%d", &u[i]);
  }

  identicos = iguais(v, u, n);

  if(identicos){ //o mesmo que if(identicos == 1){
    printf("Os vetores sao identicos.\n");
  }
  else {
    printf("Os vetores nao sao identicos.\n");
  }
  return 0;
}

