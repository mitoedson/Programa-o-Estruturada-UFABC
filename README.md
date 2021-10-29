<h2>06. Ponteiros - parte 2</h2>

<h3>Lista de exercícios: </h3>

<h4>01. Vetor com valores duplicados:</h4>
Escreva a função duplica_impares, que recebe um vetor de inteiros (v) de comprimento n_entrada e retorna outro vetor com todos os números ímpares duplicados. A função também retorna (por referência) a quantidade de elementos no vetor retornado (n_retorno).
<p><br>
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

  
<h4>02. Intercala vetores:</h4>  
Escreva um programa que leia dois vetores de inteiros. Assuma que os dois vetores estão ordenados em ordem crescente. Depois, o programa deve imprimir todos os números lidos em ordem crescente, intercalando os valores dos dois vetores. Por exemplo, se os vetores lidos forem [1, 5, 8, 12, 90] e [2, 5, 7, 46], o programa deverá imprimir 1, 2, 5, 5, 7, 8, 12, 46, 90.
<p><br>
Entrada:<br>
n1 (quantidade de elementos no vetor 1)<br>
elementos do vetor 1<br>
n2 (quantidade de elementos no vetor 2)<br>
elementos do vetor 2
<p>
Saída:<br>
elementos dos vetores 1 e 2 interlacados em ordem crescente (inclua um caractere espaço entre cada elemento, também inclua uma quebra de linha ao final)
<p>
Importante: o programa não pode usar colchetes, portanto, será necessário utilizar aritmética de ponteiros para acessar os elementos dos vetores. Para alocar os vetores, use malloc.
  
<h4>03. Avança palavra:</h4>    
Escreva uma função que procura um trecho de texto na frase e cria uma nova string com todo o conteúdo da frase a partir do trecho indicado. Por exemplo, para frase="Frase de teste." e trecho="de", a função deve criar uma nova string "de teste.". A função deve retornar NULL se não encontrar o trecho na frase. A função deve retornar uma nova string e não deve alterar o vetor com a frase passada para a função.
<p><br>
A função deve ter o seguinte protótipo:<br>
char *avanca_palavra(char *frase, char *trecho)
<p>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/puts/scanf/fscanf/fprintf e headers adicionais (por exemplo, stdio.h e string.h). Neste exercício, pode usar stdlib.h.
<p>
Formato do caso de teste: esse é o formato dos casos de teste que aparecem ao avaliar a atividade; não inclua impressão de dados no código, essa impressão é feita automaticamente pelo sistema de correção de acordo com o retorno da função submetida.
<p>
Entrada:<br>
frase<br>
trecho
<p>
Saída:<br>
frase de entrada<br>
string retornada pela função
<p>
Exercício adaptado de Prof. Fernando Teubl - Programação Estruturada 2020

<h4>04. Biblioteca Strings:</h4>    
Você deverá desenvolver uma biblioteca simples de manipulação de strings. Sim, já existe uma biblioteca de manipulação de strings padrão em C, a string.h. Sua biblioteca não será tão completa nem tão complexa como a string.h.
<p>
Alguns pontos importantes que você deve ter em mente durante a realização deste exercício:
<p>
Não utilize nenhuma função pronta da biblioteca string.h. De fato, esta biblioteca não deve nem ser incluída no seu código.
Um char * é um ponteiro para char, ou seja, ele é um ponteiro que pode apontar para regiões do tipo char (com um ou mais caracteres). Neste sentido, um char * pode ser considerado uma string, visto que aponta para o primeiro caractere da string (ele armazena, de fato, este endereço).
<p>
  Toda e qualquer string deve, obrigatoriamente, ser terminada com o caractere \0. Dessa forma, se quiser armazenar a palavra "Galaxie" em uma string, precisa de um vetor de char com 8 posições.
<pre>
G	a	l	a	x	i	e	\0
</pre>
Neste caso, o comprimento da string é 7, mas internamente, precisamos de 8 posições para armazená-la (ou seja, você precisa de um vetor de 8 posições). Em resumo, o tamanho da string não leva em conta o \0, mas ele precisa estar armazenado!
<p>
Qualquer string literal tem, automaticamente, o caractere \0 adicionado ao seu final. Por exemplo, ao chamar a função str_length como:
<p>
     int tamanho = str_length("Abacaxi");   
o compilador irá adicionar o caractere \0 ao final de Abacaxi. Assim, quando a chamada da função for de fato realizada, o caractere \0 estará lá.
<p>
Use e consulte a tabela ASCII para realizar esse exercício, ela será muito útil!
Por fim, lembre-se que um único caractere e uma string são tratados diferentemente em C. Um caractere único é denotado por aspas simples (ex, 'a') enquanto uma string é denotada por aspas duplas (ex, "a"). Neste caso, 'a' é diferente de "a".
As funções que você deve implementar estão descritas no arquivo strlib.h dentro do exercício. A descrição do que cada função deve fazer encontra-se nos comentários da mesma.
<p>
Deve ser submetido o arquivo strlib.c contendo a implementação de todas as funções listadas:
<pre>
int str_length (const char *str);
char* str_duplicate (const char *str);
int str_compare (const char *stra, const char *strb);
int str_reverse (char *str);
int str_upper (char *str);
int str_lower (char *str);
int str_copy (char *dst, const char *src);
char* str_concatenate (const char *stra, const char *strb);
int str_find_first (const char *str, const char c);
int str_find_last (const char *str, const char c);
int str_count_words (const char *str);
</pre>
Na aba Editar, há uma explicação para cada função. O formato de comentários utilizado neste código consiste em um padrão bastante utilizado. Veja mais em http://www.doxygen.nl/index.html
<p>
Importante: submeta apenas as funções. Não use variáveis globais. Não inclua o main. Não use printf/puts/scanf/fscanf/fprintf. Não inclua headers adicionais (por exemplo, stdio.h ou string.h). O header stdlib.h pode ser utilizado.
<p>
Exercício adaptado de: Prof. Thiago F. Covões - Programação Estruturada - 2019
