
/* Gabarito - Prova Prática - everaldo.gomes@pucpr.br - 20/06/2015
 *
 *
 * Questão 3)
 *
 *
 * 3. (15 pontos) Escreva um programa que leia um valor de dinheiro em
 * centavos (armazene numa variável inteira) e calcule o menor número de
 * moedas de 1 real (equivale a 100 centavos), 50 centavos, 25 centavos, 10
 * centavos, 5 centavos e 1 centavo que o valor pode ser decomposto. Escrever a
 * relação das moedas.
 * 
 */

#include <stdio.h>

int main(){
  int valor, moedas_1_real, moedas_50_centavos, moedas_25_centavos,
      moedas_10_centavos, moedas_5_centavos, moedas_1_centavo;

  printf("Digite um valor de dinheiro em centavos:\n");
  scanf("%d", &valor);


  //Calcula-se o número de moedas dividindo pela quantia 
  //da moeda de maior valor, até chegar na moeda de 1 centavo

  //O resto será armazenado na própria variável valor

  moedas_1_real = valor / 100;
  valor = valor % 100;

  moedas_50_centavos = valor / 50;
  valor = valor % 50;

  moedas_25_centavos = valor / 25;
  valor = valor % 25;

  moedas_10_centavos = valor / 10;
  valor = valor % 10;

  moedas_5_centavos = valor / 5;
  valor = valor % 5;

  moedas_1_centavo = valor;

  printf("Moedas  de  1 real: %d\n", moedas_1_real);
  printf("Moedas de 50 centavos: %d\n", moedas_50_centavos);
  printf("Moedas de 25 centavos: %d\n", moedas_25_centavos);
  printf("Moedas de 10 centavos: %d\n", moedas_10_centavos);
  printf("Moedas de 5 centavos: %d\n", moedas_5_centavos);
  printf("Moedas de 1 centavo: %d\n", moedas_1_centavo);



  return 0;
}
