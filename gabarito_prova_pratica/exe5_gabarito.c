/* Gabarito - Prova Prática - everaldo.gomes@pucpr.br - 20/06/2015
 *
 * 
 * 5. (20 pontos) Escreva um programa que leia dois vetores de tamanho n, do
 * tipo inteiro, e verifique se eles são idênticos. Imprima "Os vetores sao
 * identicos" caso sejam, ou "Os vetores nao sao idênticos" caso contrário.
 *
 * 
 */

#include <stdio.h>

#define TAM 20

int main(){
  //vamos utilizar u e v, ordem alfabética - primeiro u, depois v
  int u[TAM], v[TAM], n, i, identicos;

  printf("Digite o tamanho dos vetores\n");
  scanf("%d", &n);

  printf("Digite o primeiro vetor, u\n");
  for(i = 0; i < n; i++){
    printf("Digite o %d elemento\n", i + 1);
    scanf("%d", &u[i]);
  }

  printf("Digite o primeiro vetor, v\n");
  for(i = 0; i < n; i++){
    printf("Digite o %d elemento\n", i + 1);
    scanf("%d", &v[i]);
  }

  identicos = 1; //assume que são identicos

  for(i = 0; i < n; i++){
    if(u[i] != v[i]){
      identicos = 0; //não são idênticos
    }
  }

  if(identicos){
    printf("Os vetores sao identicos\n");
  }
  else{
    printf("Os vetores nao sao identicos\n");
  }

  return 0;
}
