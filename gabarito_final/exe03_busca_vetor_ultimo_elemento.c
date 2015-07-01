/* 29/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 *
 *
 * 3. (30 pontos) Leia uma sequência de números pares, terminada pela leitura
 * de um número ímpar (que não deve ser armazenado) e armazene-os em um
 * array (vetor ou arranjo). Após, leia um valor x, somente se o tamanho do vetor
 * for maior do que 1, e realize uma busca no vetor. Imprima a posição de x
 * (somente a última posição, no caso de múltiplas ocorrências) ou a mensagem
 * "o valor não foi encontrado".
 *
 *
 *
 */


#include <stdio.h>

#define TAM 20

int main(){
  int v[TAM], n, i, x, posicao;

  //inicializa vetor com tamanho zero;
  n = 0;
  //leitura de uma sequência de números pares, terminada pela leitura
  //de um número ímpar
  printf("Digite uma sequencia de numeros pares, terminada pela leitura "
         "de um numero impar\n");
  scanf("%d", &v[n]);

  //verifica se número lido é válido, caso seja, leia próximos valores
  //só é válido caso seja par
  while(v[n] % 2 == 0){
    n = n + 1; //número é válido, conta o elemento
    printf("Digite uma sequencia de numeros pares, terminada pela leitura "
         "de um numero impar\n");
    scanf("%d", &v[n]);
  }


  //Após, leia um valor x, somente se o tamanho do vetor for maior do que 1
  if(n == 0){
    return 0; //termina programa, caso vetor esteja vazio
  }

  printf("Digite um valor x, para pesquisar no vetor "
         "Em caso de multiplas ocorrencias, somente a posicao "
         "da ultima sera exibida\n");
  scanf("%d", &x);

  //Para buscar a ultima ocorrencia, basta fazer uma busca pela ordem inversa
  //e sair
  posicao = -1; //sinaliza que o valor não foi encontrado
  for(i = n - 1; i >= 0; i--){
    if(v[i] == x){
      posicao = i;
      i = -1; //para sair do loop
    }
  }

  if(posicao != -1){
    printf("A posicao de x eh %d\n", posicao);
  }
  else{
    printf("O valor nao foi encontrado\n");
  }


  return 0;
}
