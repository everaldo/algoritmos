# Algoritmos e Programação

Turmas: Engenharia de Alimentos e Engenharia Civil

#### Funções e Procedimentos (Subprogramas) - Parte II

Aula 08/06/2015 (Engenharia de Alimentos)

Aula 10/06/2015 (Engenharia Civil)

----
# Funções (main)

Main é a função principal de um programa. Em pseudocódigo
trata-se da construção "algoritmo", delimitada por "início" e "fim"

    !c
    algoritmo: nome do algoritmo
    variaveis
    //declaração de variáveis
    inicio
      //programa principal
    fim.

----

# Escopo de variáveis

O escopo de uma variável define em qual "porção de código" (bloco)
uma variável é visível.

Todas as variáveis declaradas dentro do programa principal são
visíveis (podem ser utilizadas) em todo o programa.


-----

# Diferenças entre pseudocódigo e Linguagem C

Em pseudocódigo, todas as variáveis do programa principal são **globais**, vistas por
todo o programa;

Em linguagem C, as variáveis declaradas dentro da função main **não são globais**. Elas
são visíveis somente dentro da função main.


-------

# Linguagem C - Variáveis locais


    !c
    #include <stdio.h>

    //x não é visível fora da função main --- <<--aqui -->>
    int main(){
      int x; //x é uma variável local a função main

    }
    //x não é visível fora da função main --- <<--aqui -->>
    
------------

# Linguagem C - Variáveis Globais


    !c
    #include <stdio.h>

    int x; //x é uma variável global a função main
    //x é visível fora da função main --- <<--aqui -->>
    int main(){

    }
    //x é visível fora da função main --- <<--aqui -->>
    

---------

# Pseudocódigo - Todas as variáveis são globais

Depende da linguagem de pseudocódigo, mas a priori todas
as variáveis são globais.

    !c
    algoritmo: nome do algoritmo
    variaveis
        x: inteiro;
    inicio
      //x é visível durante todo o programa
    fim.

---------

# Pseudocódigo - Procedimentos e Funções


Em pseudocódigo, subprogramas são representados por procedimentos e funções.

* Procedimentos: subprogramas que não retornam valor

* Funções: subprogramas que retornam um valor

--------

# Pseudocódigo - Procedimentos

    !c
    procedimento <nome do procedimento> [(<lista de
                                      parâmetros>)]
    // Declaração de variáveis internas ao subprograma
    inicio
    // Código do Subprograma
    fimprocedimento

----------

# Pseudocódigo - Funções

    !c
    funcao <nome da função> [(<lista 
                  de parâmetros>)]: <tipo-de-dado>
    // Declaração de variáveis internas ao subprograma
    inicio
    // Código do Subprograma
    fimfuncao


------------

# Pseudocódigo - Funções

Para retornar um valor numa função, basta atribuir o valor à uma variável
com o mesmo nome da função:

    !c
    <nome da função> = valor;

------

# Pseudocódigo - Funções

Algumas pessoas usam o comando **retorne** para retornar valores
(lembrando que pseudocódigo é uma notação "semi-formal")

    !c
    retorne valor;


--------

# Linguagem C - Funções

Na linguagem C, não existe uma diferenciação entre procedimentos
e funções. Só existem funções. Caso queira simular um procedimento,
basta declarar uma função que não retorne valor.


---------

# Linguagem C - Funções

Uma função que não retorna valor, em linguagem C

    !c
    void imprime_numero(int x){
      printf("%d\n", x);
    }

--------

# Linguagem C - Funções

Uma função que retorna um valor, em linguagem C

    !c
    int max(a, b){
      if (a > b)
        return a;
      else
        return b;
    }

--------

# Linguagem C - Funções

Na linguagem C, a definição genérica de uma função é

    !c
    <tipo de dado> <nome da função>(<lista de
                                    parâmetros>){
      //declaração de variáveis locais
      //subprograma


    }

-----------

# Linguagem C - Protótipos

Um protótipo assemelha-se a um "contrato". Ele define
o tipo de retorno, o nome da função e o tipo dos parâmetros que ela
recebe. Mas ele não define o que a função faz!!

    !c
    int max(int a, int b);


Um protótipo termina com ponto-e-vírgula.


--------------

# Linguagem C - Protótipos


Usualmente, os arquivos .h contém apenas protótipos de funções -
os "contratos" de como elas devem ser utilizadas.

A implementação (definição) dessas funções encontra-se em outros
arquivos .c ou em arquivos já pré-compilados .o .


-------------------

# Linguagem C - Definição de Função

Como já mencionamos, a definição de uma função é feita utilizando 
um bloco de comandos. Abre e fecha chaves.


-------------------

Linguagem C - Definição de Função

    !c
    #include <stdio.h>
    //protótipo da função
    int max(int a, int b);
    int main(){
      int x = 5, y = 7, maior;
      maior = max(a, b);
      return 0;
    }
    //definição da função
    int max(int a, int b){
      if(a > b)
        return a;
      else
        return b;
      }
    }


-----

# Linguagem C - Protótipos

O uso de protótipos é opcional. Mas se você não utilizar um protótipo,
a função deve estar definida antes de ser chamada/invocada.


--------

# Subprograma - Entrada e Saída

Da mesma forma que os programas, os subprogramas também possuem Entrada
e Saída de dados.

A entrada consiste nos dados que um programa recebe.


Já a saída, é formada pelas informações que um programa retorna

-----------

# Subprograma - Retorno de dados

Procedimentos não costumam retornar dados.

Enquanto que as funções podem retornar dados.


----------

# Subprograma - Passagem de Parâmetros

Num subprograma, denomina-se parâmetros as variáveis
que consistem a entrada, e possivelmente também, a saída de dados.


--------------

# Subprograma - Passagem de Parâmetros por Valor


Quando desejamos apenas "ler" os dados de entrada, dizemos
que a passagem de parâmetros é feita por valor. Somente o valor
da variável é copiado.


--------------

# Subprograma - Passagem de Parâmetros por Referência


Quando desejamos também "alterar" os dados de entrada, dizemos
que a passagem de parâmetros é feita por referência. O endereço
da variável é repassado ao procedimento.


----------------

# Passagem de Parâmetros por Valor (por Cópia)

Os exemplos a seguir ilustram a passagem de parâmetros por valor.

---------------

    !c
    funcao max(a : inteiro, b : inteiro) : inteiro
    inicio
      se(a > b) entao
        max = a;
      senao
        max = b;
      fimse
    fim


---------------

    !c
    algoritmo: encontra o maior
    variáveis
      a, b, maior : inteiro;
    inicio
      leia(a, b);
      maior = max(a, b);
      imprima('o maior eh ', maior);
    fim.

-----------------

# Em Linguagem C

-----------------

    !c
    #include <stdio.h>

    int max(int a, int b);
    int main(){
      int a, b, maior; //não pode ter o
      //mesmo nome por isso usamos max/maior
      scanf("%d %d", &a, &b);
      maior = max(a, b);
      printf("o maior eh %d\n", maior);
      return 0;
    }
    int max(int a, int b){
      if (a > b)
        return a;
      else
        return b;
    }
    
---------------

# Linguagem C

O valor das variáveis a e b é copiado para o subprograma (função).
Se eles forem alterados no subprograma, não vão refletir no programa principal.


----------------

### Linguagem C

    !c
    #include <stdio.h>
    void troca(int a, int b){
      int aux;
      aux = a;
      a = b;
      b = aux;
    }
    int main(){
      int a = 3, b = 5;
      troca(a, b);
      printf("%d %d", a, b);
      //vai imprimir 3 e 5
      //a e b continuam com os valores originais!!!
      return 0;
    }

------------------

### Linguagem C - Passagem por Referência

Para podermos alterar o valor de uma variável dentro de uma função,
devemos passar os parâmetros por referência.

* Passagem por valor: passa-se uma cópia do valor da variável. O valor
original não é alterado.
* Passagem por referência: passa-se o endereço de memória da variável.
Se o valor for alterado dentro da função, ele refletirá no programa principal.

----------

# Linguagem C - Passagem por Referência


Para passarmos valores por referência, utiliza-se o par de operadores & e *.

* & - operador de referência - obtém o endereço de uma variável
* \* - operador de dereferência - obtém o valor de uma variável que armazena um endereço.


--------------

# Linguagem C - Ponteiros


Na linguagem C, denominamos de ponteiro (pointer) um tipo de dados especial.
O valor armazenado por um ponteiro é o endereço de uma variável.

Para declarar uma variável do tipo ponteiro, utilizamos o símbolo *.

    !c
    int *p; //declara um ponteiro do tipo inteiro

------------------

# Linguagem C - Ponteiros


Observação: Um vetor é um tipo de ponteiro. Ele aponta para o início de uma
região de memória.


--------------------

# Linguagem C - Ponteiros

    !c
    #include <stdio.h>
    int main(){
      int a = 5, *p; //p é um ponteiro;
      p = &a;
      //a variável p guardou o endereço de a
      printf("%x\n", p); //imprime o
      //endereço de a;
      printf("%d\n", *p); //imprime o
      //valor de a;
      *p = 9; //altera o valor de a
      printf("%d\n", a); //imprime o 
      //novo valor de a
      return 0;
    }


---------

# Pseudocódigo - Passagem por Referência

Em pseudocódigo, utilizamos a palavra-chave **var** para passar
valores por referência


----------

    !c
    procedimento troca(var x : inteiro,
                    var y : inteiro)
    var
      aux : inteiro;
    inicio
      aux = x;
      x = y;
      y = aux;
    fim.

----------

## Linguagem C - Vetores

Em linguagem C, todos os vetores são passados por referência,
porque seria muito ineficiente copiar todos os valores de um vetor!!


---------------

    !c
    void imprime_vetor(int v[], int tam){
      int i;
      for(i = 0; i < tam; i++){
        printf("%d ", v[i]);
      }
      printf("\n");
    }

Também poderia ser:

    !c
    void imprime_vetor(int* v, int tam){
      int i;
      for(i = 0; i < tam; i++){
        printf("%d ", v[i]);
      }
      printf("\n");
    }

---------------------

    !c
    concatena(int *concatenados, int *y, 
                  int *z, int tam){
      int i;
      for(i = 0; i < tam; i++){
        concatenados[i] = y[i];
      }
      for(i = 0; i < tam; i++){
        concatenados[tam + i] = z[i];
      }
    }

---------
# Referências e Links

[Subalgoritmos - PUCRS](https://www.inf.pucrs.br/~pinho/LaproI/Funcoes/AulaDeFuncoes.htm)

[Funções - Matemática](http://pt.wikipedia.org/wiki/Fun%C3%A7%C3%A3o_%28matem%C3%A1tica%29)

