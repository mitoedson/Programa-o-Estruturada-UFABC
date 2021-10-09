<h1>05. Ponteiros</h1>
<h3>Listas produzidas</h3>:

<h4>01. Valor da função (parâmetro por referência):</h4>

Implemente a função valor_funcao, que recebe um valor inteiro m, um valor inteiro n e um ponteiro para um valor inteiro resultado. A função deve calcular o valor da função matemática a seguir e retornar o valor por meio do parâmetro resultado.
<p>
f(m,n)=∑j=1m((j+1)2+10×∑k=1n(j+k)2)
<p>
Protótipo da função:
<p>
void valor_funcao(int m, int n, int *resultado);<br>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/fprintf/puts/gets/fgets/scanf/fscanf e headers adicionais (por exemplo, stdio.h e stdlib.h).
<p>
Formato do caso de teste: esse é o formato dos casos de teste que aparecem ao avaliar a atividade; não inclua impressão de dados no código, essa impressão é feita automaticamente pelo sistema de correção de acordo com o retorno da função submetida.
<p>
Entrada:<br>
valores m e n
<p>
Saída:<br>
retorno da função valor_funcao obtido por meio do parâmetro resultado

  
<h4>02. Ordena argumentos:</h4>  
Escreva uma função que ordena os argumentos passados nos parâmetros.
<p>
A função deve ter o seguinte protótipo:
<p>
void ordena(int *a, int *b, int *c);
<p>
Os valores A, B e C referenciados pelos parâmetros a, b e c devem ser trocados, caso necessário, para que A <= B <= C.
<p>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/puts e headers adicionais (por exemplo, stdio.h e stdlib.h).
<p>
Formato do caso de teste: esse é o formato dos casos de teste que aparecem ao avaliar a atividade; não inclua impressão de dados no código, essa impressão é feita automaticamente pelo sistema de correção de acordo com o retorno da função submetida.
<p>
Entrada:<br>
valores de *a, *b e *c
<p>
Saída:<br>
valores de *a, *b e *c após a execução da função ordena.
<p>
Exemplo 1
<p>
Entrada<br>
1 2 3
<p>
Saída<br>
1 2 3
<p>
Exemplo 2
<p>  
Entrada<br>
2 3 1
<p>
Saída<br>
1 2 3
<p>
Exemplo 3
<p>
Entrada<br>
3 2 1
<p>
Saída<br>
1 2 3
<p>
Exercício de: Prof. Fernando Teubl - Programação Estruturada - 2020
  
  
