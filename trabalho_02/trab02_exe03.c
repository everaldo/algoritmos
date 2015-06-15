/* 14/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 * 
 * 3. Leia uma sequência de números, terminada pela leitura do número
 * 0 e, em seguida, imprima-os.
 *
 */

#include <stdio.h>

#define TAM 20

int main(){
  int i, n, v[TAM];
  
  n = 0; //vetor inicia com tamanho 0, vai crescendo conforme números
         //válidos sejam lidos (qualquer valor diferente de zero)
  printf("Digite um numero, 0 para indicar final da sequencia\n");
  scanf("%d", &v[n]);
  while(v[n] != 0){
    n++; //o número lido anteriormente é válido, aumenta o tamanho do vetor
    printf("Digite um numero, 0 para indicar final da sequencia\n");
    scanf("%d", &v[n]);
  }
  printf("Os numeros digitados foram: ");
  for(i = 0; i < n; i++){
    printf("%d ", v[i]);
  }
  printf("\n");
  return 0;
}
