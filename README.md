<h1>06. Ponteiros - parte 2</h1>
<h3>Listas produzidas</h3>:

<h4>01. Vetor com valores duplicados:</h4>
Escreva a função duplica_impares, que recebe um vetor de inteiros (v) de comprimento n_entrada e retorna outro vetor com todos os números ímpares duplicados. A função também retorna (por referência) a quantidade de elementos no vetor retornado (n_retorno).
<p>
Por exemplo, se o vetor v for [11, 22, 33, 55, 44], o vetor retornado deve ser [11, 11, 22, 33, 33, 55, 55, 44] e também o valor referenciado por n_retorno deve receber o valor 8 (comprimento do vetor retornado).
<p>
Observação: a função deve retornar um novo vetor e não alterar o vetor de entrada (v).
<p>
Protótipo da função:<br>
int *duplica_impares(int *v, int n_entrada, int *n_retorno);<br>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/puts/scanf/fprintf/fscanf e headers adicionais (por exemplo, stdio.h). Neste exercício, pode usar stdlib.h.
<p>
Formato do caso de teste: esse é o formato dos casos de teste que aparecem ao avaliar a atividade; não inclua impressão de dados no código, essa impressão é feita automaticamente pelo sistema de correção de acordo com o retorno da função submetida.
<p>
Entrada:<br>
n<br>
elementos do vetor
<p>
Saída:<br>
elementos do vetor de entrada<br>
elementos do vetor de retorno
