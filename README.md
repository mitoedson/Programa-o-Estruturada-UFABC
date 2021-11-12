<h2>11. Listas Ligadas - parte 2</h2>

<h3>Lista de exercícios: </h3>

<h4>01. Remover elementos da lista ligada:</h4>
Um disco voador abandonado foi encontrado e dentro do disco havia sequências de DNA de outro planeta, que também era formado pelas quatro bases A, C, G, T. Contudo, quando entrou em contato com a água, as bases C e G foram eliminadas da sequência.
<p>
Implemente a função remover_bases, que recebe uma referência para o início de uma lista ligada com as bases que formam o DNA. A função deve retornar o DNA modificado após contato com a água. Ou seja, a função irá remover todos os nós com as bases C e G. Por exemplo, para a sequência AAGCGAGTCAGGCTGAAGCTAGCTA, a função retornaria a lista AAATATAATATA. A função deve retornar o ponteiro para o início da lista após a remoção dos nós.
<p>
Observação: a função deve remover os nós da lista original e não alocar uma nova lista com novos nós.
<p>
Considere a seguinte estrutura para um nó de lista ligada:
<pre>
typedef struct LinkedNode LinkedNode;
struct LinkedNode {
   char data;
   LinkedNode *next;
};
</pre>
A função deve seguir o seguinte protótipo:
<pre>
LinkedNode *remover_bases(LinkedNode *inicio);
</pre>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/fprintf/puts/gets/fgets/scanf/fscanf e headers adicionais (por exemplo, stdio.h). Neste exercício, pode usar stdlib.h.
<p>
A definição da struct LinkedNode já existe no sistema de correção automática (portanto, não inclua a definição da struct no código submetido). É necessário incluir a seguinte linha no início do código submetido:
<pre>
#include "dna.h"
</pre>
Formato do caso de teste: esse é o formato dos casos de teste que aparecem ao avaliar a atividade; não inclua impressão de dados no código, essa impressão é feita automaticamente pelo sistema de correção de acordo com o retorno da função submetida.
<p>
Entrada:
<pre>
sequência de bases
</pre>
Saída:
<pre>
sequência de bases original
sequência de bases após chamar a função remover_bases
</pre>
