/* 15/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 * 
 * 
 * 9. Leia uma sequência de números, terminada pela leitura do número
 * 0 e, em seguida, imprima o maior valor encontrado.
 *
 *
 */
#include <stdio.h>

#define TAM 20

int main(){
  int i, n, v[TAM], maior;
  
  n = 0; //vetor inicia com tamanho 0, vai crescendo conforme números
         //válidos sejam lidos (qualquer valor diferente de zero)
  printf("Digite um numero, 0 para indicar final da sequencia\n");
  scanf("%d", &v[n]);
  maior = v[n]; //uma estratégia muito comum é inicializar o maior com
                //o primeiro elemento. Outra é inicializar com um valor
                //o mais baixo possível
  while(v[n] != 0){
    n++; //o número lido anteriormente é válido, aumenta o tamanho do vetor
    printf("Digite um numero, 0 para indicar final da sequencia\n");
    scanf("%d", &v[n]);
  }

  //Percorre todos os elementos em busca do maior valor
  for(i = 0; i < n; i++){
    if (v[i] > maior){
      maior = v[i];
    }
  }
  printf("O maior valor encontrado foi %d\n", maior);

  printf("\n");
  return 0;
}
