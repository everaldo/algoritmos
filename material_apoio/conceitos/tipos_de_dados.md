# Tipos de Dados

Um tipo de dados é um nome que se refere ao domínio (conjunto de valores)
que podem ser armazenados. Concomitantemente, num computador eletrônico,
um tipo de dados também significa a interpretação que fazemos dos bytes armazenados.


# Tipo Lógico

O tipo lógico armazena os valores \{verdadeiro, falso\}.

Na Linguagem C, o valor falso é armazenado como 0 (zero) e qualquer
valor diferente de zero é considerado verdadeiro.

Entretanto, a linguagem C não possui um tipo de dados lógico, também
chamado de (*booleano*).

Costuma-se usar o tipo *char* para armazenar um valor lógico, pois esse
tipo ocupa somente 1 byte na memória, enquanto o tipo inteiro ocupa 4 bytes.


# Tipo Caractere

O tipo caractere armazena as letras do alfabeto, números e símbolos.
Porém, cada variável do tipo caractere armazena somente 1 letra.


A representação mais comum utilizada é a [Tabela ASCII](http://pt.wikipedia.org/wiki/ASCII)


Na linguagem C, utiliza-se o tipo *char* para armazenar um caractere e ele ocupa 1 byte na memória.


# Tipo String

Uma string é uma cadeia de caracteres. Em outras palavras, é uma sequência de caracteres (letras, números e símbolos).

As strings são o tipo de dados mais utilizados, pois a forma mais utilizada pelas pessoas para armazenar dados/informações/conhecimento
é com o uso da escrita.

A linguagem C não possui um tipo de dados String. Mas as strings são representadas através de *vetores de caracteres, que tem sua terminação
sinalizada pelo caractere nulo - \0* (*esse conceito é tema das próximas aulas*)




# Tipo Inteiro

Um dos tipos de dados mais comuns. Armazena valores do conjunto dos números inteiros.


Representado na linguagem C pelos tipos: *short*, *int* e *long*


Um tipo *char* também pode ser utilizado para armazenar números inteiros no intervalo de [-128, 127]

# Tipo Inteiro Longo

Armazena valores do conjunto dos números inteiros, utilizando o dobro de memória de um inteiro comum.

Na linguagem C, deve-se usar o tipo *long long*, pois numa arquitetura de 32-bits o tipo *int* e o tipo *long* ocupam
o mesmo tamanho na memória (4 bytes)



# Tipo Real

Armazena dados que pertencem ao conjunto dos números reais.

Como o conjunto dos números reais é infinito, o tipo utilizado é uma representação dos números mais significativos,
conhecida como *notação de ponto flutuante* (armazena-se os dados em notação científica em base binária).


Na linguagem C utiliza-se o tipo *float*.

# Tipo Real de Precisão Dupla

O mesmo do *tipo real*, só que utiliza o dobro de memória (8 bytes) para armazenar números com maior precisão.

Na linguagem C utiliza-se o tipo *double* para representar números em ponto-flutuante de precisão dupla.


# Sem Tipo

É representado na linguagem C pelo tipo *void*.

Todas as funções retornam um tipo de dados, exceto aquelas declaradas com o tipo void.
