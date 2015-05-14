# Passagem por Referência

Conforme mencionado, uma variável é um nome que referencia um endereço de memória,
que por sua vez armazena um dado, que é de determinado tipo (definido no momento da declaração da variável).

Quando referenciamos o nome de uma variável, obtemos seu valor.

Porém, em determinados momentos, é necessário saber qual o endereço da variável em memória.
Esse endereço não pode ser definido em tempo de compilação, ele só será conhecido no momento em que o programa
executa - porque a cada execução pode ser um endereço diferente.

Quando referenciamos o endereço de uma variável, utilizamos o operador *\&*.

Utilizamos passagem de valor por referência no comando *scanf* e em chamadas de funções (*tema de próximas aulas*)

