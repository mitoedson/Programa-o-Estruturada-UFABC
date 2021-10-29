<h2>05. Ponteiros - parte 1</h2>

<h3>Lista de exercícios: </h3>

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
  

<h4>03. Estatísticas- Frases</h4>  
Escreva uma função que recebe uma frase e retorne o valor de algumas estatísticas sobre os comprimentos das palavras na frase. O retorno será realizado por parâmetros passados por referência. As frases podem conter pontuação.
<p>
Protótipo da função:<br>
void estatisticas_frase(char frase[], int *min, int *max, int *soma, double *media, double *desvio);
<p>
Valores que devem ser retornados:<br>
min: comprimento da menor palavra<br>
max: comprimento da maior palavra<br>
soma: soma dos comprimentos de todas as palavras<br>
media: média dos comprimentos das palavras<br>
desvio: desvio padrão (std) dos comprimentos das palavras, conforme fórmula a seguir, em que xi é o comprimento de palavra i e n é a quantidade de palavras na frase:<br>
std=1n∑i=1n(xi−média)2−−−−−−−−−−−−−−−√
<p>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/puts/fprintf/fscanf e headers adicionais (por exemplo, stdio.h, stdlib.h e string.h). Neste exercício, pode usar a função sqrt de math.h.
<p>
Formato do caso de teste: esse é o formato dos casos de teste que aparecem ao avaliar a atividade; não inclua impressão de dados no código, essa impressão é feita automaticamente pelo sistema de correção de acordo com o retorno da função submetida.
<p>
Entrada:<br>
frase
<p>
Saída:<br>
valores das estatísticas após executar a função estatisticas_frase
  
<h4>04. Conta linhas:</h4>    
Escreva uma função que recebe um texto e uma largura de linha. A função deve calcular a quantidade de linhas necessárias para imprimir o texto passada para a função. O retorno da quantidade de linhas será por referência, no parâmetro qtd_linhas.
<p>
Protótipo da função:<br>
void conta_linhas(char texto[], int largura_linha, int* qtd_linhas);
<p>
Algumas regras importantes para o cálculo da quantidade de linhas:<br>
- as palavras não podem ser separadas. Portanto, se não tiver espaço disponível para incluir uma palavra em uma linha, ela deverá ser incluída na próxima. Por exemplo, para o texto "Frase teste" e largura de linha 8, a divisão seria em duas linhas "Frase" e "teste" (não há espaço na primeira linha para incluir "Frase teste". Se a largura de linha for 11, apenas uma linha é suficiente.<br>
- toda linha deve iniciar com uma letra, ou seja, nenhuma linha deve iniciar com o caractere espaço ou com pontuação (ponto, vírgula, etc). Se algum sinal de pontuação ficar exatamente após uma quebra de linha, a palavra que precede o sinal deve ser passada para a próxima linha, de forma que nenhuma linha inicie com pontuação. Por exemplo, para o texto "Neste teste, a frase possui pontuacao." e largura de linha 11, a divisão seria em cinco linhas: "Neste", "teste, a", "frase", "possui", "pontuacao."<br>
- um caractere espaço que fique exatamente após uma quebra de linha deve ser suprimido, de forma que a próxima linha inicie com uma palavra (e não com um caractere espaço). Por exemplo, para o texto "Texto para teste ABCD" e largura 10, a divisão seria em duas linhas: "Texto para" e "teste ABCD".
<p>
Alguns exemplos:<br>
Para o texto "Este eh um teste" e largura de linha=5, a divisão seria em 3 linhas:
<p>
Este<br>
eh um<br>
teste<br>
<p>
Para o texto "Este eh outro teste" e largura de linha=5, a divisão seria em 4 linhas:
<p>
Este<br>
eh<br>
outro<br>
teste
<p>
Para o mesmo texto "Este eh outro teste" e largura de linha=7, a divisão seria em 3 linhas:
<p>
Este eh<br>
outro<br>
teste
<p>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/puts/fscanf/fprintf. Não inclua headers adicionais (por exemplo, stdio.h, stdlib.h ou string.h).
<p>
Formato do caso de teste: esse é o formato dos casos de teste que aparecem ao avaliar a atividade; não inclua impressão de dados no código, essa impressão é feita automaticamente pelo sistema de correção de acordo com o retorno da função submetida.
<p>
Entrada:<br>
largura da linha<br>
texto (alguns casos de teste foram gerados com Lorem Ipsum)
<p>
Saída:<br>
quantidade de linhas (retorno da função conta_linhas)
  
  
