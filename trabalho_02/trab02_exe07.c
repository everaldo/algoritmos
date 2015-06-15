/* 14/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 * 
 *
 * 7. Leia uma sequência de números, terminada pela leitura do número
 * -1 e, em seguida, imprima a soma de todos os elementos. Obs.: o
 *  número -1 não faz parte da soma.
 *
 *
 */
#include <stdio.h>

#define TAM 20

int main(){
  int i, n, v[TAM], soma = 0;
  
  n = 0; //vetor inicia com tamanho 0, vai crescendo conforme números
         //válidos sejam lidos (qualquer valor diferente de zero)
  printf("Digite um numero, -1 para indicar final da sequencia\n");
  scanf("%d", &v[n]);
  while(v[n] != -1){
    n++; //o número lido anteriormente é válido, aumenta o tamanho do vetor
    printf("Digite um numero, -1 para indicar final da sequencia\n");
    scanf("%d", &v[n]);
  }

  for(i = 0; i < n; i++){
    soma = soma + v[i]; //poderia ser soma += v[i];
  }
  printf("A soma dos numeros digitados foi: %d \n", soma);
  return 0;
}
