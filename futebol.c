#include <stdio.h>
#include <stdlib.h>

struct TimeFutebol {
    char *nome;
    int pontos, gols, vitorias, derrotas, empates;
};

void imprimir(struct TimeFutebol dados_time){
    printf("%s", dados_time.nome);
    printf("%d", dados_time.pontos);
    printf("%d", dados_time.gols);
    printf("%d", dados_time.vitorias);
    printf("%d", dados_time.derrotas);
    printf("%d", dados_time.empates);
}

int main() {

    struct TimeFutebol dados_time;

    dados_time.nome = malloc(sizeof(char) * 30);

    scanf("%s", dados_time.nome);
    scanf("%d", &dados_time.pontos);
    scanf("%d", &dados_time.gols);
    scanf("%d", &dados_time.vitorias);
    scanf("%d", &dados_time.derrotas);
    scanf("%d", &dados_time.empates);

    imprimir(dados_time);
 
    free(dados_time.nome);
   
    return 0;
}
