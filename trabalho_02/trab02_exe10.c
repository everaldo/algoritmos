/* 15/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 * 
 * 
 * 10. Leia uma sequência de números, terminada pela leitura do número
 * 0 e, em seguida, imprima o menor valor encontrado.
 *
 *
 */
#include <stdio.h>

#define TAM 20

int main(){
  int i, n, v[TAM], menor;
  
  n = 0; //vetor inicia com tamanho 0, vai crescendo conforme números
         //válidos sejam lidos (qualquer valor diferente de zero)
  printf("Digite um numero, 0 para indicar final da sequencia\n");
  scanf("%d", &v[n]);
  menor = v[n]; //uma estratégia muito comum é inicializar o menor com
                //o primeiro elemento. Outra é inicializar com um valor
                //o mais alto possível
  while(v[n] != 0){
    n++; //o número lido anteriormente é válido, aumenta o tamanho do vetor
    printf("Digite um numero, 0 para indicar final da sequencia\n");
    scanf("%d", &v[n]);
  }

  //Percorre todos os elementos em busca do menor valor
  for(i = 0; i < n; i++){
    if (v[i] < menor){
      menor = v[i];
    }
  }
  printf("O menor valor encontrado foi %d\n", menor);

  printf("\n");
  return 0;
}
