/* 14/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 * 
 * Leia n números e imprima-os na ordem inversa
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
  printf("A ordem inversa dos numeros digitados eh: ");
  for(i = n - 1; i >= 0; i--){
    printf("%d ", v[i]);
  }
  printf("\n");
  return 0;
}
