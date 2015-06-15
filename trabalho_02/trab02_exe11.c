/* 15/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 * 
 * 11. Leia dois vetores de tamanho n, e calcule
 * a soma de seus elementos
 *
 *
 */


#include <stdio.h>

#define TAM 20

int main(){
  int i, n, v[TAM], u[TAM], soma[TAM];
  
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

  //Realizando a soma dos dois vetores
  //Neste caso não é preciso inicializar soma
  //porque ele guarda apenas a soma de dois valores
  //que pode ser efetuada imediatamente
  for(i = 0; i < n; i++){
    soma[i] = v[i] + u[i];
  }


  printf("A soma dos dois vetores eh:\n");
  for(i = 0; i < n; i++){
    printf("%d ", soma[i]);
  }
  printf("\n");
  return 0;
}
