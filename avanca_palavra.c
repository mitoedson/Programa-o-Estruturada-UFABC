#include <stdio.h>
#include <stdlib.h>

char *avanca_palavra(char *frase, char *trecho) {

    int i = 0, comprimento_trecho = 0, comprimento_frase = 0;

    // comprimento da frase
    while(*(frase + i) > 31){
        if(*(frase + i) > 31) 
            comprimento_frase++;
        i++;
    }
    i = 0;
    // comprimento do trecho
    while(*(trecho + i) > 31){
        if(*(trecho + i) > 31) 
            comprimento_trecho++;
        i++;
    }

    int j = 0, k = 0, l = 0, marcador_inicial = 0, inicio_trecho = 0;
    while(*(frase + j) > 31){

        if(*(trecho + 0) == *(frase + j)){
            marcador_inicial = j;
            inicio_trecho = 1;
            k = 1;
            j++;
            while(inicio_trecho == 1){

                if(*(trecho + k) != *(frase + j)){
                    inicio_trecho = 0;
                    j = marcador_inicial;
                    marcador_inicial = 0;
                    k = 0;
                }
                // encontrou o trecho
                if(k == comprimento_trecho - 1){
                    char *frase_retorno = malloc(sizeof(char) * (comprimento_frase - marcador_inicial));
                    int l = 0;
                    for(k = marcador_inicial; k < comprimento_frase; k++){
                        *(frase_retorno + l) = *(frase + k);
                        l++;
                    }
                    *(frase_retorno + l) = '\0';

                    return frase_retorno;
                }
                k++;
                j++;
            }
        }
        j++;
    }
    return NULL;
}

int main(){

    char *frase = malloc(sizeof(char)*200);
    char *trecho = malloc(sizeof(char)*20);

    printf("[%s]",avanca_palavra("  Abcd efgh ijkl  0","jk"));

    free(frase);
    free(trecho);
}
