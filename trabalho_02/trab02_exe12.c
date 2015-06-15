/* 15/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 * 
 *  12. Calcule o produto escalar entre dois vetores de números reais de
 *  tamanho n.
 *
 */


#include <stdio.h>

#define TAM 20

int main(){
  float v[TAM], u[TAM], produto_escalar = 0.0;
  int i, n;
  
  printf("Digite o tamanho dos vetores\n" );
  scanf("%d", &n);


  printf("Digite os elementos do primeiro vetor\n");
  for(i = 0; i < n; i++){
    printf("Digite um numero\n");
    scanf("%f", &v[i]);
  }

  printf("Digite os elementos do segundo vetor\n");
  for(i = 0; i < n; i++){
    printf("Digite um numero\n");
    scanf("%f", &u[i]);
  }

  //Realizando o produto escalar dos dois vetores
  for(i = 0; i < n; i++){
     produto_escalar = produto_escalar +  v[i] * u[i];
     //poderia ser também produto_escalar += v[i] * u[i];
  }

  //o exercício não especifica, mas vamos imprimir com 2 casas de precisão
  printf("O produto escalar dos vetores eh: %.2f\n", produto_escalar);
  return 0;
}
