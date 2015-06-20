/* Gabarito - Prova Prática - everaldo.gomes@pucpr.br - 20/06/2015
 *
 *
 * Questão 1)
 *
 * Exercícios
 * 1. (20 pontos) Escreva um programa que leia 3 notas de um aluno, calcule e
 * imprima a média aritmética e uma mensagem que depende do valor da média
 * conforme descrito a seguir: para alunos em exame, calcule e imprima a nota
 * mínima que deverá ser tirada no exame para aprovação, considerando que a
 * média para ser aprovado em exame é 6,0.
 * 
 * Médiaa         Mensagem
 * 0.0 a 2.9  | Imprima "Reprovado"
 * 3.0 a 6.9  | Imprima "Exame" e a nota necessária para ser aprovado no exame
 * 7.0 a 10.0 | Imprima "Aprovado"
 * 
 */


#include <stdio.h>


int main(){
  int i;
  float soma = 0.0, media, nota_exame, nota;

  //Leitura das Notas
  printf("Digite as 3 notas do aluno\n");
  for(i = 1; i <= 3; i++){
    printf("Digite a nota %d\n", i);
    scanf("%f", &nota);
    soma = soma + nota;
  }

  //Cálculo da Média
  media = soma / 3.0;

  if(nota >= 7.0){
    printf("Aprovado\n");
  }
  else if(nota >= 3.0){
    //Cálculo da nota do exame
    nota_exame = 12.0 - nota; //para ser aprovado com média 6.0
    printf("Exame - necessario tirar %f\n", nota_exame);
  }
  else{
    printf("Reprovado\n");
  }
  return 0;
}
