/* 15/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 * 
 * 20. Escreva uma função que receba quatro argumentos: três vetores
 * do tipo inteiro (int) e uma variável inteira que representa o tamanho
 * dos dois últimos vetores. O nome da função é “concatena” e o tipo de
 * retorno é
 * nenhum (void), pois ela não retorna nenhum valor. O primeiro
 * argumento dessa função é um vetor que armazena o valor da
 * concatenação dos outros dois vetores de tamanho n. Abaixo, segue a
 * assinatura
 * (protótipo) da função:
 * void concatena(int* concatenados, int* v, int* u, int n);
 *
 *
 * Obs.: O vetor de concatenação tem que ter o dobro de tamanho dos
 * outros vetores.
 *
 * Versão alternativa: concatena as duas metades simultaneamente
 */


#include <stdio.h>

#define TAM 20

void concatena(int* concatenados, int* v, int* u, int n){

	int i;
	for(i = 0; i < n; i++){
		concatenados[i] = v[i];
		concatenados[i + n] = u[i];
  }
}

int main(){
  int i, n, v[TAM], u[TAM], concatenados[2 * TAM], tam_concatenado;
  
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


  //o tamanho do vetor de concatenação é a soma do tamanho dos outros dois
  tam_concatenado = 2 * n;


  concatena(concatenados, v, u, n);

  printf("A concatenacao dos dois vetores eh: ");
  for(i = 0; i < tam_concatenado; i++){
    printf("%d ", concatenados[i]);
    
  }
  printf("\n");
  return 0;
}

