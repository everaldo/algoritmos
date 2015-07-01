/* 29/06/2015 - Everaldo Gomes - everaldo.gomes@pucpr.br
 *
 *
 * 2. (15 pontos) Escreva um programa que leia a idade de um nadador e
 * classifique-o (imprima uma mensagem) em uma das seguintes categorias:
 *
 * Categoria     | Idade
 *----------------------------------
 * Infantil A    | 5 a 7 anos
 * Infantil B    | 8 a 10 anos
 * Juvenil A     | 11 a 13 anos
 * Juvenil B     | 14 a 17 anos
 * Adultos       | 18 a 45 anos
 * Melhor Idade  | 46 a 65 anos
 * Senior        | 66 anos em diante
 *------------------------------------
 * Importante:
 * Se a idade lida for menor do que 0 (zero), o programa deve imprimir uma
 * mensagem “Idade inválida, Digite novamente” e repetir a leitura, até que
 * um valor válido seja lido.
 *
 */


#include <stdio.h>


int main(){
  int idade;


  //leitura da idade do nadador, deve ser maior do que zero
  printf("Digite a idade do nadador\n");
  scanf("%d", &idade);
  while(idade < 0){
    printf("Idade invalida, digite novamente\n");
    scanf("%d", &idade);
  }

  if(idade >= 5 && idade <= 7){
    printf("Infantil A\n");
  }
  else if(idade >= 8 && idade <= 10){
    printf("Infantil B\n");
  }
  else if(idade >= 11 && idade <= 13){
    printf("Juvenil A\n");
  }
  else if(idade >= 14 && idade <= 17){
    printf("Juvenil B\n");
  }
  else if(idade >= 18 && idade <= 45){
    printf("Adultos\n");
  }
  else if(idade >= 46 && idade <= 65){
    printf("Melhor Idade\n");
  }
  else if(idade >= 66){
    printf("Senior\n");
  }

  return 0;
}

//Observação: se a idade do nadador estiver entre 0 e 4, não deve imprimir nada :-)
