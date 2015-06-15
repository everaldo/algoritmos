/* 14/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 * 
 * 8. Um professor deseja calcular a média da turma em uma avaliação.
 * Leia um conjunto de notas num array de números reais e calcule a
 * média da turma com 2 casas decimais de precisão.
 *
 */
#include <stdio.h>

#define TAM 20

int main(){
  float notas[TAM], media, soma = 0.0;
  int i, n;

  printf("Numero de alunos?\n");
  scanf("%d", &n);

  printf("Digite as notas dos alunos\n");
  for(i = 0; i < n; i++){
    scanf("%f", &notas[i]);
  }
  
  for(i = 0; i < n; i++){
    soma = soma + notas[i]; //poderia ser soma += notas[i];
  }
  
  if(n)  media = soma / n;
  //é o mesmo que if(n != 0) media = soma / n;

  printf("A media da turma eh %.2f\n", media);


  return 0;
}
