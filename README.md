<h2>10. Listas Ligadas - parte 1</h2>

<h3>Lista de exercícios: </h3>

<h4>01. Ímpares e pares na lista:</h4>
Implemente a função impares_pares, que recebe um ponteiro para o início de uma lista ligada. A função deve retornar a quantidade de números ímpares e a quantidade de números pares na lista ligada. O retorna será por meio dos parâmetros qtd_impares e qtd_pares por referência.
<p>
Considere a seguinte estrutura para um nó de lista ligada:
<pre>
typedef struct LinkedNode LinkedNode;
struct LinkedNode {
   int data;
   LinkedNode *next;
};
</pre>
A função deve seguir o seguinte protótipo:
<pre>
void impares_pares(LinkedNode *inicio, int *qtd_impares, int *qtd_pares);
</pre>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/fprintf/puts/gets/fgets/scanf/fscanf e headers adicionais (por exemplo, stdio.h). Neste exercício, pode usar stdlib.h.
<p>
A definição da struct LinkedNode já existe no sistema de correção automática (portanto, não inclua a definição da struct no código submetido). É necessário incluir a seguinte linha no início do código submetido:
<pre>
#include "lista.h"
</pre>
Formato do caso de teste: esse é o formato dos casos de teste que aparecem ao avaliar a atividade; não inclua impressão de dados no código, essa impressão é feita automaticamente pelo sistema de correção de acordo com o retorno da função submetida.
<p><br>
Entrada:
<pre>
quantidade de itens na lista
itens da lista
</pre>
Saída:
<pre>
itens da lista
quantidade de ímpares
quantidade de pares
</pre>

<h4>02. Comparar listas ligadas:</h4>
Implemente a função comparar_listas, que recebe dois ponteiros para os primeiros nós de duas listas ligadas. A função deve comparar os dados nos nós das listas para verificar se eles são iguais (retorna verdadeiro se forem iguais e falso caso contrário). As listas são iguais apenas se tiverem o mesmo número de nós e os nós correspondentes tiverem os mesmos dados. O ponteiro dado pode ser nulo, o que significa que a lista estaria vazia.
<p>
Considere a seguinte estrutura para um nó de lista ligada:
<pre>
typedef struct LinkedNode LinkedNode;
struct LinkedNode {
   int data;
   LinkedNode *next;
};
</pre>
A função deve seguir o seguinte protótipo:
<pre>
int comparar_listas(LinkedNode *inicio_lista1, LinkedNode *inicio_lista2);
</pre>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/fprintf/puts/gets/fgets/scanf/fscanf e headers adicionais (por exemplo, stdio.h). Neste exercício, pode usar stdlib.h.
<p>
A definição da struct LinkedNode já existe no sistema de correção automática (portanto, não inclua a definição da struct no código submetido). É necessário incluir a seguinte linha no início do código submetido:
<pre>
#include "comparar_listas.h"
</pre>
Formato do caso de teste: esse é o formato dos casos de teste que aparecem ao avaliar a atividade; não inclua impressão de dados no código, essa impressão é feita automaticamente pelo sistema de correção de acordo com o retorno da função submetida.
<p><br>
Entrada:
<pre>
quantidade de itens na lista1
itens da lista1
quantidade de itens na lista2
itens da lista2
</pre>
<p>
Saída:
<pre>
itens da lista1
itens da lista2
resuldado de comparar_listas
</pre>
Exercício adaptado do material do Prof. Jesús P. Mena-Chalco - Algoritmos e Estruturas de Dados I (2019).

<h4>03. Inserir elemento na posição:</h4>
Implemente a função inserir_posicao, que recebe um ponteiro para o primeiro nó de uma lista ligada, e dois números inteiros, posicao e valor. Crie um novo nó com o inteiro valor e o insira na posição informada na lista. A função deve devolver um ponteiro ao primeiro elemento da lista. Assuma que a posição passada sempre será válida.
<p>
Uma posição igual a 0 indica início da lista. Uma posição igual a 1 indica o nó seguinte ao início da lista e assim por diante. O ponteiro dado pode ser nulo, o que significa que a lista inicial está vazia.
<p>
Considere a seguinte estrutura para um nó de lista ligada:
<pre>
typedef struct LinkedNode LinkedNode;
struct LinkedNode {
   int data;
   LinkedNode *next;
};
</pre>
A função deve seguir o seguinte protótipo:
<pre>
LinkedNode* inserir_posicao(int posicao, int valor, LinkedNode *inicio);
</pre>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/fprintf/puts/gets/fgets/scanf/fscanf e headers adicionais (por exemplo, stdio.h). Neste exercício, pode usar stdlib.h.
<p>
A definição da struct LinkedNode já existe no sistema de correção automática (portanto, não inclua a definição da struct no código submetido). É necessário incluir a seguinte linha no início do código submetido:
<pre>
#include "inserir.h"
</pre>
Formato do caso de teste: esse é o formato dos casos de teste que aparecem ao avaliar a atividade; não inclua impressão de dados no código, essa impressão é feita automaticamente pelo sistema de correção de acordo com o retorno da função submetida.
<p><br>
Entrada:
<pre>
quantidade de itens na lista
itens da lista
posição
valor
</pre>
Saída:
<pre>
itens da lista antes de inserir o valor
itens da lista após inserir o valor
</pre>
Exercício adaptado do material do Prof. Jesús P. Mena-Chalco - Algoritmos e Estruturas de Dados I (2019).
