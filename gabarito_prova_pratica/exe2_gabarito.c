/* Gabarito - Prova Prática - everaldo.gomes@pucpr.br - 20/06/2015
 *
 *
 * Questão 2)
 *
 *
 * 2. (30 pontos) Escreva um programa que leia uma sequência de números,
 * que deve ser armazenada num vetor, terminada pela leitura do número 0
 * e, em seguida, imprima:
 * a) o menor valor encontrado;
 * b) o maior valor encontrado;
 * c) a média, caso pelo menos um valor tenha sido lido (o número 0 não entra
 * na conta);
 * d) uma mensagem: “Nenhum numero foi digitado”, caso a sequência seja
 * vazia.
 * Observação: os cálculos não devem ser feitos no mesmo laço de
 * repetição em que é feita a leitura dos números (que serão
 * armazenados num vetor).
 *
 *
 *
 * 
 */

#include <stdio.h>

#define TAM 20

int main(){
  int i, v[TAM], menor, maior, n;
  float media, soma = 0.0;



  //Leitura da Sequencia de Números
  n = 0; //inicializa tamanho do vetor
  printf("Digite uma sequencia de numeros, 0 para terminar\n");
  scanf("%d", &v[n]);
  maior = v[n]; //inicializa maior
  menor = v[n]; //inicializa menor


  //Continua Sequencia de Números, enquanto eles forem válidos
  while(v[n] != 0){
    n++; //número válido, então aumenta tamanho do vetor
    printf("Digite uma sequencia de numeros, 0 para terminar\n");
    scanf("%d", &v[n]);
  }
  
  //Cálculo do Menor, do Maior e da Média
  for(i = 0; i < n; i++){
    //soma, para depois fazer a média
    soma = soma + v[i];

    if(v[i] < menor){
      menor = v[i];
    }

    if(v[i] > maior){
      maior = v[i];
    }
  }

  //Imprime os valores, calcula a média (somente se foi lido no mínimo
  //um valor), imprime mensagem caso contrário
  if(n){
    printf("O menor valor é %d\n", menor);
    printf("O maior valor é %d\n", maior);
    media = soma / n;
    printf("O valor medio é %.2f\n", media);
  }
  else{
    printf("Nenhum número foi digitado\n");
  }
  return 0;
}
