/* 15/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 * 
 * 14. Leia dois vetores de tamanho n. Verifique se eles são idênticos.
 * Imprima "são idênticos" ou "não são idênticos".
 *
 */


#include <stdio.h>

#define TAM 20

int main(){
  int i, n, v[TAM], u[TAM], identicos = 1;
  
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

  //Comparando os elementos do vetor
  //Se apenas um elemento na mesma posição não for idêntico, então
  //eles não são idênticos
  for(i = 0; i < n; i++){
    if(v[i] != u[i]){
      identicos = 0;
      i = n; //pra sair do for. Poderia ter usado break
    }
  }

  if(identicos){ //o mesmo que if(identicos == 1){
    printf("Os vetores sao identicos.\n");
  }
  else {
    printf("Os vetores nao sao identicos.\n");
  }
  return 0;
}
