/* Gabarito - Prova Prática - everaldo.gomes@pucpr.br - 20/06/2015
 *
 *
 * Questão 4)
 *
 *  4. (15 pontos) Escreva um programa que leia dois valores em ponto-flutuante
 *  (float) e realize a troca desses dois valores. Defina e utilize uma função que
 *  recebe dois argumentos do tipo float e realiza a troca desses dois valores. O
 *  tipo de retorno da função é void e seu nome é troca. Use passagem de
 *  parâmetros por referência.
 *
 * 
 */

#include <stdio.h>


void troca(float* x, float* y){
  float aux;
  aux = *x;
  *x = *y;
  *y = aux;
}



int main(){
  float a = 3.14, b = 1.61;

  printf("Valores Antigos\na=%f\nb=%f\n",a,b);
  troca(&a, &b);

  printf("Novos valores\na=%f\nb=%f\n",a,b);


  return 0;
}
