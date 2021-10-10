#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void conta_linhas(char texto[], int largura_linha, int* qtd_linhas) {

    *qtd_linhas = 0;

    largura_linha;
    int quantidade[100];
    int i = 0, j = 0;
    int eh_espaco = 0, conta_letra = 0, conta_palavra = 0, total_letras = 0, resta_espaco = 0;

    do{
        eh_espaco = 0;

        if(texto[i] == ' ')
            eh_espaco = 1;
        else{
            conta_letra++;
            eh_espaco == 0;
        }

        if((eh_espaco == 1 && i != 0 && conta_letra != 0)){
            conta_palavra++;            
            total_letras += conta_letra;
            quantidade[conta_palavra-1] = conta_letra;
            conta_letra = 0;
        }
        else if(texto[i+1] == '\0' && eh_espaco == 0){
            conta_palavra++;            
            quantidade[conta_palavra-1] = conta_letra;
        }

        i++;
    }while(texto[i] != '\0');

    i = 0;
    resta_espaco = largura_linha;
    do{
        resta_espaco -= (quantidade[i]);

        if(resta_espaco > 1){
            resta_espaco--;
            i++;
        }
        else if(resta_espaco == 1 || resta_espaco == 0){
            resta_espaco = largura_linha;
            i++;
            (*qtd_linhas)++;
        }
        else{
            if((largura_linha - quantidade[i]) > 1){
                resta_espaco = largura_linha - quantidade[i] - 1;
                i++;
                (*qtd_linhas)++;
            }
            else{
                resta_espaco = largura_linha;
                i++;
                (*qtd_linhas)+= 2;
            }
        }

        if(i == conta_palavra && resta_espaco < largura_linha)
            (*qtd_linhas)++;

    }while(i != conta_palavra);
}

int main(){
    char texto[300];
    int largura_linha;
    int *qtd_linhas;
    qtd_linhas = malloc(sizeof(int));

    fgets(texto,300,stdin);
    scanf("%d",&largura_linha);    

    conta_linhas(texto, largura_linha, qtd_linhas);
    printf("%d", *qtd_linhas);

    free(qtd_linhas);
}
