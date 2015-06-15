/* 15/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 *
 * 13. Leia uma sequência de n números e armazene-os em um array.
 * Após, leia um valor x e realize uma busca no vetor. Imprima a posição
 * de x (somente a primeira posição, no caso de múltiplas ocorrências)
 * ou "o valor não foi encontrado".
 *
 */


#include <stdio.h>

#define TAM 20

int main(){
  int i, n, v[TAM], x, achou = 0, posicao;


  printf("Digite o tamanho da sequencia (n)\n");
  scanf("%d", &n);

  printf("Digite os elementos do vetor\n");
  for(i = 0; i < n; i++){
    printf("Digite um numero\n");
    scanf("%d", &v[i]);
  }

  printf("Digite o valor que deseja pesquisar: ");
  scanf("%d", &x);

  //realiza a busca no vetor
  for(i = 0; i < n; i++){
    if(v[i] == x){
      achou = 1;
      posicao = i;
      i = n; //fazendo i = n, ele não vai mais entrar no for
      //poderia ter utilizado também o comando break para esse fim
      //aí não seria preciso usar a variavel posicao
    }
  }

  //verifica se encontrou o elemento
  if(achou){ //é o mesmo que if(achou == 1)
    printf("A posicao de x eh %d\n", posicao);
  }
  else{
    printf("O valor nao foi encontrado\n");
  }
  return 0;
}
