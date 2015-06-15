/* 15/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 * 
 * 15. Leia dois vetores de tamanho n. Construa um terceiro vetor que é
 * a concatenação dos dois primeiros.
 *
 *
 * Obs.: O vetor de concatenação tem que ter o dobro de tamanho dos
 * outros vetores.
 *
 * Versão alternativa: concatena as duas metades simultaneamente
 */


#include <stdio.h>

#define TAM 20

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

  //concatena simultaneamente
  for(i = 0; i < n; i++){
    concatenados[i] = v[i];
    concatenados[n + i] = u[i];
  }


  printf("A concatenacao dos dois vetores eh: ");
  for(i = 0; i < tam_concatenado; i++){
    printf("%d ", concatenados[i]);
    
  }
  printf("\n");
  return 0;
}
