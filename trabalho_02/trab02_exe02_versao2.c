/* 14/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 * 
 * Leia n números e imprima-os na ordem inversa
 *
 *
 * Versão alternativa - utiliza n - 1 - i 
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
  //Utiliza um for "progressivo", ao invés de uma contagem
  //regressiva, como na versão 1
  for(i = 0; i < n; i++){
    printf("%d ", v[n - 1 - i]);
  }
  printf("\n");
  return 0;
}
