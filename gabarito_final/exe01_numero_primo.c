/* 29/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 *
 *
 * 1. (15 pontos) Escreva um programa que leia um número inteiro maior do
 * que 2 e imprima se ele é um número primo ou não. Se o número lido for
 * menor do que 2, uma mensagem deve ser impressa “Número inválido” e a
 * leitura deve ser realizada novamente, até que um número válido seja lido.
 *
 *
 *
 *
 *
 */


#include <stdio.h>


int main(){
  int i, n, num_divisores = 0;

  //leitura de um número inteiro maior do que 2
  printf("Digite um numero inteiro, maior do que 2\n");
  scanf("%d", &n);
  while(n < 2){
    printf("Numero invalido, digite novamente\n");
    scanf("%d", &n);
  }

  //Conta a partir de 2. Como não vai dividir por 1, precisa ter apenas
  //1 divisor para ser um número primo (primos são divisíveis somente
  //por 1 e eles mesmos (n)
  //Nenhuma otimização foi considerada nessa implementação - simples é bom :-)
  for(i = 2; i <= n; i++){
    if(n % i == 0){
      num_divisores = num_divisores + 1;
    }
  }

  if(num_divisores == 1){
    printf("O numero %d eh primo\n", n);
  }
  else{
    printf("O numero %d nao eh primo\n", n);
  }

  return 0;
}
