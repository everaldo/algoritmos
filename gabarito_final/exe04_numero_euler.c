/* 29/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 *
 *
 * 4. (40 pontos) Escreva um programa que lê um valor n inteiro e positivo (no
 * máximo 12), que calcula e imprime com 10 casas decimais de precisão o valor
 * do número de Euler – e, dado pela fórmula abaixo, onde o símbolo !
 * representa o fatorial de um número:
 *
 *   e = 1/0! + 1/1! + 1/2! + 1/3! ,,, + 1/n!
 * 
 * Esse programa deve utilizar duas funções, de acordo com os protótipos abaixo:
 *
 * int fatorial(int n); //função que calcula o fatorial
 *
 *
 * double e(int precisao); //função que calcula o número de euler
 *
 * A função fatorial, calcula e retorna o fatorial de um número n (máximo 12).
 * A função e, calcula e retorna o número de euler, através da série de Taylor
 * expressa na fórmula acima e de acordo com a precisão (o valor lido para n)
 * desejada (máximo 12).
 * Caso o valor de n (lido do teclado) esteja fora do intervalo 0-12, o
 * número deve ser lido novamente, até que um valor válido seja lido.
 * O valor do número de Euler (e) deve ser impresso com 10 casas de
 * precisão.
 *
 *
 */


#include <stdio.h>


//função fatorial
//assume que n é positivo.
//caso n seja 0 ou 1, retorna 1. Correto pela definição de fatorial
int fatorial(int n){
  int fat = 1, i;
  for(i = 2; i <= n; i++){
    fat = fat * i;
  }
  return fat;
}

double e(int precisao){
  double euler = 0.0;
  int i;
  for(i = 0; i <= precisao; i++){
    euler = euler + 1.0 / fatorial(i); //é importante que seja 1.0 para não fazer divisão inteira
                                       //também poderia ser ((double)1) / fatorial(i);
  }
  return euler;
}


int main(){
  int n;

  //leitura de um valor n inteiro e positivo, assumindo que zero pode ser lido
  printf("Digite um valor para n no intervalo [0-12]\n");
  scanf("%d", &n);

  //verifica se n é válido
  while(n < 0 || n > 12){
    printf("Digite um valor para n no intervalo [0-12]\n");
    scanf("%d", &n);
  }

  printf("Euler para %d casas de precisao = %.10f\n", n, e(n));


  return 0;
}
