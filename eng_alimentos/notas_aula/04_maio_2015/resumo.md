# Algoritmos e Programação 04/05/2015

Turma: Engenharia de Alimentos
9h40 às 11h10
Bloco 2 - Sala 3


# Resumo da Aula

O objetivo da aula consistiu na reapresentação dos principais conteúdos da
disciplina de Algoritmos e Programação para que fosse possível uma melhor
compreensão do andamento da disciplina e as principais dificuldades
encontradas pela turma.

Os alunos relataram que, na parte prática, estavam estudando as funções
de entrada/saída - scanf/printf.

Enquanto que, na parte teórica (pseudo-código e fluxograma) estavam estudando
os comandos de repetição: enquanto, repita-enquanto (ou repita-até) e para-passo.

Os alunos solicitaram que fossem ministrados mais exercícios de fixação, de preferência
com uma posterior solução, e também resolução de problemas em sala-de-aula.

Os principais conteúdos abordados na aula de hoje foram os conceitos de:

* Processos
* Algoritmos
* Dados
* Tipos de Dados
* Abstrações/Representações
* Programa de computador
* Variáveis
* Fluxograma
* Entrada/Saída


* Histórico da computação (primeiros computadores)
* Alan Turing
* Máquina de von Neumann (arquitetura de von Neumann - John von Neumann) - CPU, memória, barramento, periféricos; conceito de programa armazenado.
* Sistema Posicional (decimal e binário)
* Bit/Byte
* Sistemas Operacionais
* Documentação


# Processos

Um processo é um conjunto sequencial de ações com objetivo comum.
Utilizamos a analogia de processos para contextualizarmos e compararmos os processos existentes na Engenharia de Alimentos
com os algoritmos e programas de computadores.

Além disso, foi enfatizado que os programas de computadores são amplamente utilizados na automação e otimização de processos.


# Algoritmos

Um algoritmo é uma sequência finita de passos não-ambíguos que descrevem a solução de um problema.

Um algoritmo não é um programa de computador. Mas uma linguagem de programação pode ser utilizada para *implementar* um algoritmo,
criando assim um *programa de computador*.

Utilizamos a analogia da *receita de bolo* para enfatizarmos o aspecto abstrato de um algoritmo (o bolo não é a receita de bolo,
mas é criado através dela).

Enfatizamos que o objetivo primordial do uso de algoritmos é a *solução de problemas*, salientando que nem todos os problemas podem
ser resolvidos por computadores (problemas não-computáveis).

# Dados

Revisitamos também o conceito de *dados*, que são os atributos da informação, e uma de suas características é que são quantificáveis e/ou qualitativos.

A informação consiste em fatos.

Exemplos:

"O tempo está ensolarado"
"A temperatura é de 20º"
"Esta caixa de tomate pesa 30,5kg"

No contexto de algoritmos e programação, os dados possuem tipos: lógico (verdadeiro ou falso), caractere (letras), número inteiro e número real.

Utilizamos a analogia de que um programa de computador é um processo que transforma os dados. Primeiro, ele recebe *dados de entrada*, após
faz o *processamento dos dados* (transformações, operações de aritmética e lógica), finalizando, o programa apresenta a saída, com *dados de saída*.

Os algoritmos e programas são projetados para realizar esse processamento de dados.

A interpretação dos *dados de saída* é essencial na solução do problema


# Tipos de Dados

Discorremos sobre os principais tipos de dados usados em algoritmos e programação, conforme mencionado anteriormente.

Também salientamos a questão da memória do computador ser finita, enquanto que alguns dados do "mundo real" são infinitos,
como por exemplo, a quantidade de números entre 1 e 2, no conjunto dos números reais e o número pi, que é irracional.

*Faltou mencionar que, pelo fato da memória do computador ser finita, a solução é armazenarmos aproximações. Por exemplo,
guardar apenas as 6 primeiros dígitos significativos do número pi*


# Abstrações/Representações

Durante muitos momentos da aula, enfatizamos a importância de Abstrações e Representações.

Por exemplo, um número é uma representação. Números representam quantidades, mas por si só eles não são os objetos que representam.
O número 1 pode significar uma laranja, um limão, uma pessoa - seu significado depende do contexto.

Quanto às abstrações, demos ênfase ao conceito de modelagem, de ideias e de símbolos.

Em um momento da aula, foi perguntado aos alunos *quem conhecia um ábaco?*, ao que todos os alunos responderam positivamente.
Foi explicado então que, apesar de não haver nenhum ábaco presente na sala de aula, todos nós sabíamos o que era um ábaco,
fazíamos uma ideia dele. Ressaltamos que a *palavra ábaco* era utilizada como uma representação do objeto real e que através
de simplificações (abstrações) comunicamos ideias e resolvemos problemas (os programas de computador trabalham com abstrações
de problemas reais - processando-se os dados, resolve-se o problema real).

# Programa de computador

Apresentamos um breve histórico da computação, desde o ábaco até os primeiros computadores à válvula.
Foi fornecida uma breve explicação sobre o modelo de computação proposto por John von Neumann, conhecido como Máquina de von Neumann,
que trouxe o conceito de programa armazenado em memória, com processamento realizado por uma CPU e comunicação entre CPU-Memória-Periféricos
feita por um barramento.

Os conceitos de CPU, barramento, periféricos e memória foram definidos e exemplificados.

Também comentamos sobre sistema operacional, que realiza o papel de *host* (hospedeiro), controlando o acesso dos usuários/programas
aos recursos de hardware do computador. Salientando a evolução do processo da programação: no início, o reposicionamento das válvulas,
até o surgimento de sistemas com multiprogramação (vários programas executando em paralelo).

# Variáveis

No início da aula, alguns alunos comentaram sobre variáveis, quando lhes foi questionado o que eram os dados.
Esse conceito foi trabalhado em dois momentos, e foi explicado que as variáveis são abstrações que surgiram com as linguagens
de programação para referenciar endereços de memória, já que um mesmo programa pode ser alocado em endereços diferentes, em diferentes execuções.

Uma variável é um nome, que representa (*aponta para*) um endereço de memória e possui um tipo (*ver tipo de dados*).


# Fluxograma

Trabalhamos também o conceito de fluxograma. Expomos que fluxogramas são representações de um algoritmo.
São desenhos, diagramas e representam o fluxo de execução de um programa.

Um programa possui, a princípio, um fluxo sequencial de execução - a CPU executa uma instrução após a outra.

Mencionamos dois tipos de desvios possíveis: os desvios condicionais (comandos de desvio se-senão escolha/caso, também chamados de estruturas de seleção) e
os laços/loops (comandos de repetição enquanto/repita-até ou repita-enquanto/para, também chamados de estruturas de repetição).

Não mencionamos os desvios incondicionais: chamadas de função, retorno de função, comando abandone - pois serão tratados em outras aulas.

Salientamos também que o fluxo natural de execução de um programa é partir do estado inicial (*Início*) até o estado final (*Fim*), fazendo analogia com o conceito de processo.


![Fluxograma - Programador com Insônia](https://raw.githubusercontent.com/everaldo/algoritmos/master/eng_alimentos/notas_aula/04_maio_2015/images/fluxograma_programador_insonia.jpg?raw=true)


# Entrada/Saída

Junto com o conceito de fluxogramas, expomos o conceito de Entrada/Saída, que são feitas pelos periféricos.
Exemplificamos os principais tipos de periféricos, até os históricos: cartões perfurados, impressoras, monitores, teclado, mouse, rede e tela-de-toque.

Ressaltamos que em algoritmos e programação, a entrada e a saída são *dados* e o programa de computador realiza transformações sobre esses dados.

Esse conceito está relacionado com os fluxogramas e também com a questão das abstrações/representações.

Lembramos que a interpretação dos dados é importante para se chegar à solução dos problemas, o nosso maior objetivo.



# Histórico da Computação

Em vários momentos, mencionamos o aspecto histórico da computação. Desde os primeiros computadores, o ábaco (não mencionamos a máquina de calcular
criada por Pascal Blaise), mencionamos brevemente Charles Babbage e Ada Lovelace; explicamos a história de Hermann Holerith e o uso de cartões perfurados
para a computação do Censo nos EUA, em 1890; os primeiros computadores eletromecânicos (ENIAC) e os computadores portáteis atuais (celulares e tablets)


![Miniaturização](https://raw.githubusercontent.com/everaldo/algoritmos/master/eng_alimentos/notas_aula/04_maio_2015/images/miniaturizacao.jpg?raw=true)

# Alan Turing

Comentamos que Alan Turing é considerado o Pai da computação, pois propôs o modelo teórico da *Máquina de Turing*.
Alguns alunos mencionaram o filme "O Jogo da Imitação", que conta sua história. Também discorremos sobre a quebra da criptografia da máquina Enigma, por ele
e as causas de sua morte, tocando na questão do preconceito.

# Máquina de von Neumann

Como mencionado anteriormente, introduzimos o conceito da arquitetura ou máquina de von Neumann, como um marco na história da computação.
Através dela, temos o conceito de computador formado por CPU-Memória-Barramento-Periférico, com o grande avanço dos *programas armazenados*, culminando
na criação das Linguagens de Programação e Sistemas Operacionais.

Outra característica importante desse modelo é o fluxo sequencial de execução, com a possibilidade de desvios (condicionais ou incondicionais), consistindo nos
principais comandos da programação estruturada.

# Sistema Posicional (decimal e binário)

Também explanamos sobre os sistemas de numeração posicionais. Em vários momentos da aula, trabalhamos com o conceito de abstrações e representações.

Enfatizamos que números são representações. E que o sistema que utilizamos é o sistema de numeração decimal, que é também um sistema posicional.

Explicamos, basicamente, o que é o sistema binário e porque os computadores o utilizam.

# Bit/Byte

Definimos o que é um bit (digito binário) e um byte (conjunto de 8 bits).

Explicamos rapidamente o que seria uma arquitetura de 8-bits, mencionamos que o modelo mais utilizado é a de 32-bits, embora a de 64-bits esteja prevalecendo.
Mas que, para fins de aprendizados, é mais fácil lidar com a de 32-bits.

Mencionamos rapidamente unidades de grandeza, como o Gigabyte, para exemplificar como a informação é armazenada na memória


# Sistemas Operacionais

Conforme mencionado anteriormente, trabalhamos com o conceito de sistema operacional, como responsável pelo acesso aos recursos de hardware
(cpu, memória e periféricos). 


# Documentação

Enfatizamos que a programação e o projeto de algoritmos é uma tarefa social, de comunicação. Que o software vai muito além do código,
que é necessário documentá-lo, escrevê-lo de forma legível para que outros programadores possam entendê-lo, ou mesmo o próprio programador, posteriormente.



# Conclusões


Este breve resumo foi redigido nos dias 04 e 05 de Maio de 2015, referentes à aula ministrada no dia 04 de Maio de 2015, para o curso de Engenharia
de Alimentos, na disciplina de Algoritmos e Programação.

O intuito desse documento é documentar os principais tópicos discutidos em sala-de-aula, pois essa foi a primeira aula do professor, devido à substituição
do docente responsável por essa turma.

A aula foi uma aula de revisão. O foco foi a participação dos alunos, com diálogos, exemplos, analogias, perguntas e respostas.

Abaixo, seguem referências com links sobre os principais tópicos abordados em sala-de-aula.

Essa aula permitiu ao professor expor sua metodologia de ensino e compreender o nível atual de entendimento dos alunos em relação ao conteúdo.

Uma demanda dos alunos é que, nas próximas aulas, mais listas de exercícios sejam dadas como tarefa, e que alguns exercícios sejam resolvidos em sala-de-aula.

Uma das dificuldades encontradas pelo corpo discente, também, é a interpretação de algoritmos (exercício na prova é diferente do exercício da lista).


Esse resumo serve como material de consulta para os alunos, e também como futuro repositório para o preparo de uma aula introdutória num curso de algoritmos
e programação, pois introduz os principais conceitos: história da computação, algoritmos e programas de computador, processamento de dados.


# Links e Referências

[Linguagem de Programação](http://pt.wikipedia.org/wiki/Linguagem_de_programa%C3%A7%C3%A3o)

[Software](http://pt.wikipedia.org/wiki/Software)

[John von Neumann](http://pt.wikipedia.org/wiki/John_von_Neumann)

[Ada Lovelace - Primeira Programadora](http://pt.wikipedia.org/wiki/Ada_Lovelace)

[Alan Turing](http://pt.wikipedia.org/wiki/Alan_Turing)

[Herman Hollerith](http://pt.wikipedia.org/wiki/Herman_Hollerith)

[Máquina de Turing](http://pt.wikipedia.org/wiki/M%C3%A1quina_de_Turing)

[O Jogo da Imitação - Filme](http://www.imdb.com/title/tt2084970/?ref_=nv_sr_1)

[Fluxogramas](http://pt.wikipedia.org/wiki/Fluxograma)

[Ábaco - O primeiro computador](http://www.tecmundo.com.br/tecnologia-da-informacao/1697-a-historia-dos-computadores-e-da-computacao.htm)

[História do primeiro computador](https://sites.google.com/site/historiasobreossitesdebusca/Historia-da-tecnologia/historia-do-primeiro-computador)
