# Algoritmos e Programação

Turmas: Engenharia de Alimentos e Engenharia Civil

#### Funções e Procedimentos (Subprogramas)

Aula 08/06/2015 (Engenharia de Alimentos)

Aula 10/06/2015 (Engenharia Civil)

----
## Tema da Aula

Nesta aula, discutiremos os seguintes temas:

* Subprogramas (subproblemas);
* Rotinas;
* Fluxo de Execução;
* Procedimentos;
* Funções Matemáticas;

com o objetivo de entendermos o mecanismo de
funções na linguagem C.

----
# Subprogramas (e subproblemas)


----
# Subproblemas

Nesta disciplina, temos estudado que um algoritmo
é a representação da solução de um problema em
passos finitos e não-ambíguos.

Além disso, conhecemos a técnica dos **refinamentos
sucessivos**, onde os passos são decompostos em problemas
menores.


----

# Subproblemas

Dessa forma, compreendemos que um **problema pode ser
decomposto** em vários subproblemas.

Na resolução de um problema, há também a distinção
entre **o quê fazer??** (problema) e **como fazer?** (a solução do problema).

----

# Subproblemas

O ser humano precisa dividir problemas em subproblemas,
porque o cérebro humano trabalha com o reconhecimento de padrões.

A decomposição de problemas facilita o domínio sobre o binômio
**problema x solução** e o reconhecimento de classes de problemas

----

# Subproblemas (Exemplos)

* Ler dois números, somar e imprimir
* Ler dois números, multiplicar e imprimir

----

# Subproblemas (Exemplos)

* Ler um vetor, imprimir na ordem inversa;
* Ler um vetor, imprimir somente positivos;
* Ler um vetor, imprimir números pares.

----

# Subproblemas (Exemplos)

* Calcular o fatorial de um número;
* Calcular o número de Euler, seguindo a fórmula:


----
# Subproblemas (Exemplos)

    !c
    e = 1/0! + 1/1! + 1/2!;

----

# Subproblemas (Exercício)


Identifique subproblemas presentes nos exercícios que resolvemos
na disciplina

----

# Subproblemas (programas)


Se escrevemos um programa de computador para representar a solução
de um problema, também podemos escrever programas de computador
que representem a soluções de subproblemas

----

# Subproblemas (vantagens)

A maior vantagem na solução de subproblemas é lidar com algo
que é menos complexo.


----

# Subproblemas (desvantagens)

Sincronizar e sintetizar as soluções dos subproblemas.
Eles funcionam isoladamente, mas não em conjunto.


----

# Rotina

Agora vamos ao conceito de **Rotina**.


Rotina é uma tarefa que é realizada de forma comum, constante ou periódica.

----

# Rotina

Em nosso curso de algoritmos, temos feito muitas tarefas rotineiras:

* Entrada;
* Processamento de Dados;
* Saída;

----

# Rotina

Logo no início da Programação de Computadores, percebeu-se que havia
um grande número de tarefas **comuns**, repetitivas e que era necessário
duplicar o código.


----

# Rotina

Essa característica motivou o surgimento dos Sistemas Operacionais e guiou
o desenvolvimento das Linguagens de Programação.


----

# Rotina

Nem todas as Linguagens de Programação utilizam o termo rotina, mas chamamos
atenção ao fato de que o conceito está presente e é muito popular na cultura
dos programadores.

----

# Rotina (Exercício)

Identifique tarefas rotineiras com as quais nos deparamos nos exercícios nesse
curso de Algoritmos e Programação.

----

# Rotina (Fluxograma)


Num fluxograma, uma rotina seria expressa por um padrão de "desenhos" semelhantes,
com os mesmos comandos.

-----
# Subprogramas e Rotinas

Até o momento, vimos que os Subprogramas tem por principal característica
nos ajudar a lidar com a complexidade de um problema.

Enquanto que uma rotina caracteriza um problema que se repete.


-----

# Fluxo de Execução

Denominamos de **fluxo de execução** a sequência de instruções executadas
por um programa de computador.

Naturalmente, e idealmente, o fluxo de execução é sequencial: as sequências
são executadas uma após a outra.

----

# Fluxo de Execução (Programação Estruturada)

Na programação estruturada, temos 3 tipos de comandos:

* comandos sequenciais;
* comandos de seleção;
* comandos de repetição.

-----

# Fluxo de Execução


Aprendemos que nos comandos de seleção e repetição o fluxo de execução
não é sequencial: existe a presença de **desvios**.

-----

# Desvio

Um desvio ocorre quando o fluxo **sequencial** de execuções é quebrado.

-----

# Desvio (Comando de Seleção)

Nos comandos de seleção, um desvio caracteriza-se pelo "salto" de algumas
instruções (que deixam de ser executadas).

------

# Desvio (Comando de Repetição)

Nos comandos de repetição, um desvio caracteriza-se pelo "salto" de algumas
instruções, por exemplo, quando um comando **enquanto** deixa de ser executado
e também pelo "salto" para trás, num laço (*loop*), quando um conjunto de instruções
é executado novamente.

------

# Desvios (Jump)

Em inglês, é comum encontrarmos o termo **jump** (salto) quando nos referimos
aos desvios, em programação.

-----

# Outros tipos de desvios

Também existem outros tipos de desvios, em programação:

* Comandos break e continue, que não foram vistos em detalhes, porque quebram
o paradigma da programação estruturada. Mas são muito úteis.

-----

# Comando break

Dentro de um **loop** (comandos de repetição) é utilizado para sair imediatamente
do bloco de repetição. Também pode ser utilizado com o comando de seleção (escolha-caso),
switch, que também não foi vista em detalhes.

-----

# Comando continue

Dentro de um **loop** (comandos de repetição) é utilizado para forçar a repetição
daquela iteração (num loop, uma repetição é chamada de iteração).


-----

# Outros desvios

* Chamada (invocação) e saída de subprogramas.

------

# Chamada de subprograma

É um desvio de fluxo, quando o programa passa o controle para um subprograma,
que executará suas próprias instruções, depois retornará para o programa **chamador**
(*caller*), que voltará a executar, a partir da próxima instrução.

------
# Exemplo 

    !c
    leia(x);
    y = x;

-------

# Exemplo

O comando **leia** pode ser visto como um subprograma, pois ele resolve um subproblema.

Quando invocamos o comando leia, o programa passa o controle (desvia o fluxo) para
o subprograma, que após terminar sua tarefa, retorna o fluxo (salta de volta) para
a próxima instrução

    !c
    y = x;

------

# Exercícios

Em nosso curso de programação, identifique quais subprogramas utilizamos
além dos comandos **leia** e **escreva**.

------

# Recapitulando

Até o momento, vimos que subprogramas ajudam a lidar com a complexidade
dos programas; rotinas referem-se às tarefas repetitivas e o desvio do 
fluxo serve para que um programa **dê o controle da CPU** para outro
programa (subprograma), que depois de terminar suas tarefas, retorna
o fluxo de execução para o programa que o chamou.

------

# Comando return

O comando return é utilizado para devolver o fluxo de execução para o
programa chamador.

--------

# Comando return

Até o momento, utilizamos return para sair do programa, porque o 
fluxo de execução é finalizado e devolvido para o sistema operacional,
já que no programa principal não há nenhum programa que o invocou (chamou).


---------

# Funções matemáticas

Na matemática, uma função é uma relação entre dois conjuntos (Domínio e Imagem).


    !c
    f(x) = y;

    f(x) = 3x + 4;

-------

# Funções matemáticas

É possível fazer uma analogia entre funções matemáticas e programas de computadores.

Um programa costuma ser dividido em: entrada, processamento (computação) e saída.

-------

# Funções matemáticas

Numa função matemática, há o conjunto domínio (entrada), o conjunto imagem (saída)
e o mapeamento ou relação entre os elementos do domínio com a imagem é a computação


-------

# Funções

Dessa forma, podemos "enxergar" um programa de computador como uma grande função
matemática.


-------

# Composição de funções

Na matemática, temos o conceito de composição de funções:

    !c
    f(g(x))

ou

    !c
    f(x) = 3x + 4;
    f(x) = g(x) + h(x);
    g(x) = 3x;
    h(x) = 4;

etc.

-------

# Funções

Fazendo uma analogia, podemos relacionar o conceito
de composição de funções com subprogramas: um programa
é composto por diversos subprogramas.

------

# Por que utilizar funções???

* Lidar com a complexidade dos problemas, separando
**o que fazer?** do **como fazer?**;
* Fazer tarefas repetitivas;
* Evitar duplicação de código;

-------

# Duplicação de Código

    !c
    int a = 1, b = 2, c = 3, d = 4, aux;

    aux = a;
    a = b;
    b = aux;

    aux = c;
    c = d;
    d = aux;

----

# Com o uso de funções....

    !c
    int a = 1, b = 2, c = 3, d = 4;

    troca(&a, &b);
    troca(&c, &d);

-----

# Análise do código

* Variável aux não é mais utilizada;
* Implementação (como fazer?) não é visível - separação
entre o que fazer (trocar) do como fazer (como é realizada a troca)
* Evita duplicação de código (repetição do algoritmo da troca);

------

# Outro exemplo


    !c
    int a, b, maior;

    if(a > b)
      maior = b;
    else
      maior = a;

-----

# Outro exemplo


    !c
    int a, b, maior;

    maior = max(a, b);

-----

# Análise

* Facilita a leitura do código (menos linhas);
* Esconde a complexidade do algoritmo


-----

# Função como um "contrato"

Uma função (subprograma) pode ser vista como um contrato.
Ela define quais são as entradas esperadas e o que será a 
saída. Mas o programador não precisa estar ciente de como
o algoritmo é implementado.

------

# Exemplos


    !c
    scanf("%d", &x);
    pow(x, y);
    sqrt(x);
    printf("%d\n", x);

-----

# Main é uma função

Desde o início do curso, temos escrito a função main.
Ela representa o programa principal. Todo programa
na linguagem C necessita dela.

------

# Função main

Em sua forma original, main é definida como:

    !c
    int main(int argc, char* argv[]);

-----
# Função main

Mas também pode ser definida como:

    !c
    int main(void);

ou

    !c
    int main();


-----

#Continua na próxima aula


----

# Referências e Links

[Subalgoritmos - PUCRS](https://www.inf.pucrs.br/~pinho/LaproI/Funcoes/AulaDeFuncoes.htm)

[Funções - Matemática](http://pt.wikipedia.org/wiki/Fun%C3%A7%C3%A3o_%28matem%C3%A1tica%29)

