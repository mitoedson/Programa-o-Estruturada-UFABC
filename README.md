<h2>09. Estruturas e arquivos</h2>

<h3>Lista de exercícios: </h3>

<h4>01. Time de futebol:</h4>
Considere a estrutura a seguir para armazenar dados de um time de futebol:
<pre>
struct TimeFutebol {
    char *nome;
    int pontos, gols, vitorias, derrotas, empates;
};
</pre>
Escreva um programa que leia os dados de um time de futebol e armazene em uma estrutura struct TimeFutebol.
<p>
Após preencher os dados, chame a função imprimir e passe a estrutura preenchida. Essa função, que já está implementada no sistema de correção automática, irá imprimir os dados do time de futebol.
<p>
Protótipo da função imprimir:
<pre>
void imprimir(struct TimeFutebol dados_time);
</pre>
Importante: Não use variáveis globais. Não use printf/puts/fprintf. Neste exercício, pode usar stdio.h e stdlib.h. A impressão deve ser feita com a função imprimir.
<p>
A definição da struct TimeFutebol já existe no sistema de correção automática (portanto, não inclua a definição da struct no código submetido). A função imprimir também já existe no sistema de correção. É necessário incluir a seguinte linha no início do código do programa:
<pre>
#include "estruturas.h"
</pre>
Formato do caso de teste:
<p>
Entrada:<br>
dados do time de futebol: nome pontos gols vitorias derrotas empates
<p>
Saída:<br>
saída da função imprimir (com os dados do time de futebol)
  
<h4>02. Separar números primos:</h4>
Considere a estrutura ListaNumeros definida a seguir:
<pre>
typedef struct ListaNumeros ListaNumeros;
struct ListaNumeros {
    int *numeros;
    int *primos;
    int n_numeros, n_primos;
};
</pre>
Implemente a função separar_numeros_primos, que recebe um ponteiro para uma estrutura ListaNumeros. A estrutura é passada com o endereço de um vetor no campo numeros (a quantidade de números é armazenada em n_numeros). O valor preenchido no campo primos é NULL (e n_primos = 0).
<p>
Se existir números primos no vetor passado em numeros, eles devem ser removidos e colocados em um novo vetor que será referenciado pelo campo primos da estrutura. Portanto, se existir números primos, será necessário alocar um novo vetor para armazenar os números primos. Também deve ser preenchido o valor do campo n_primos com a quantidade de números primos.
<p>
Por exemplo, se estrutura for recebida como:
<pre>
numeros = [3, 40, 11, 507, 10]
n_numeros = 5
primos = NULL
n_primos = 0
</pre>
A função deve alterar os valores na estrutura para:
<pre>
numeros = [40, 507, 10]
n_numeros = 3
primos = [3, 11]
n_primos = 2
</pre>
Observação: a ordem relativa dos números deve ser mantida. No exemplo, 40 vinha antes de 507, que por sua vez vinha antes de 10 no vetor numeros. A ordem relativa foi mantida. O mesmo vale para o vetor primos, que deve manter a ordem relativa entre os números que existia no vetor numeros.
<p>
Protótipo da função:
<pre>
void separar_numeros_primos(ListaNumeros *lista);
</pre>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/fprintf/puts/gets/fgets/scanf/fscanf e headers adicionais (por exemplo, stdio.h). Neste exercício, pode usar stdlib.h e math.h.
<p>
A definição da struct ListaNumeros já existe no sistema de correção automática (portanto, não inclua a definição da struct no código submetido). É necessário incluir a seguinte linha no início do código submetido:
<pre>
#include "primos.h"
</pre>
Formato do caso de teste: esse é o formato dos casos de teste que aparecem ao avaliar a atividade; não inclua impressão de dados no código, essa impressão é feita automaticamente pelo sistema de correção de acordo com o retorno da função submetida.
<p>
Entrada:<br>
quantidade de números<br>
lista de números
<p>
Saída:<br>
lista de números não primos e lista de números primos (após executar a função separar_numeros_primos)
  
