/* 14/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 * 
 * Leia n números e imprima-os
 *
 */


#include <stdio.h>

#define TAM 20

int main(){
  int i, n, v[TAM];
  
  printf("Digite quantos numeros deseja ler\n");
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    printf("Digite um numero\n");
    scanf("%d", &v[i]);
  }
  printf("Os numeros digitados foram: ");
  for(i = 0; i < n; i++){
    printf("%d ", v[i]);
  }
  printf("\n");
  return 0;
}
