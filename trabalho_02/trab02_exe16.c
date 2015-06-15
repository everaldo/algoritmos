/* 15/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 *
 * 16. Escreva uma função que receba dois argumentos do tipo inteiro
 * (int) e realize a troca desses dois valores. O tipo de retorno da função
 * é void. Use passagem de parâmetros por referência.
 */


#include <stdio.h>

void troca(int *a, int *b){
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

//Programa de Teste. Somente a função acima é suficiente
int main(){
  int a = 1, b = 2;
  int c = 3, d = 4;
  int x = 5, y = 6;
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("c = %d\n", c);
  printf("d = %d\n", d);
  printf("x = %d\n", x);
  printf("y = %d\n", y);
  troca(&a, &b);
  troca(&c, &d);
  troca(&x, &y);
  printf("Depois\n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("c = %d\n", c);
  printf("d = %d\n", d);
  printf("x = %d\n", x);
  printf("y = %d\n", y);
  return 0;
}
