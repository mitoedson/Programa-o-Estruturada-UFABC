#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void estatisticas_frase(char frase[], int *min, int *max, int *soma, double *media, double *desvio) {

    *min = 0;
    *max = 0;
    *soma = 0;
    *media = 0;
    *desvio = 0;

    int i = 0, j = 0;
    int eh_letra = 0; int eh_pontuacao = 0; int conta_letra = 0; int conta_palavra = 0;
    int quantidade[100];
    char pontuacao[7] = {'.',',',';',':','?','!',' '};

    while(frase[i] != '\0'){
        eh_pontuacao = 0;
        for(j = 0; j < 7; j++){
            if(frase[i] == pontuacao[j])
                eh_pontuacao = 1;
        }
        if(frase[i+1] == '\0')
            eh_pontuacao = 1;

        if(eh_pontuacao == 1 && i != 0 && conta_letra != 0){
            conta_palavra++;            
            (*soma) += conta_letra;
            quantidade[conta_palavra-1] = conta_letra;
            conta_letra = 0;
        }

        if(eh_pontuacao == 0)
            conta_letra++;
        i++;
    }

    if(quantidade[0] >= quantidade[1]){
        *max = quantidade[0];
        *min = quantidade[1];
    }
    else{
        *max = quantidade[1];
        *min = quantidade[0];
    }

    for(j = 2; j < conta_palavra; j++){
        if(quantidade[j] > *max)
            *max = quantidade[j];
        else if(quantidade[j] < *min)
            *min = quantidade[j];
    }

    *media = (*soma / (double)conta_palavra);
    for(i = 0; i < conta_palavra; i++)
    {
        *desvio += pow((double)quantidade[i] - (*media),2);
    }
    *desvio /= (double)conta_palavra;
    *desvio = pow(*desvio,0.5);
}

int main(){

    char frase[100];
    int *min, *max, *soma;
    double *media, *desvio;
    min = malloc(sizeof(int));
    max = malloc(sizeof(int));
    soma = malloc(sizeof(int));
    media = malloc(sizeof(double));
    desvio = malloc(sizeof(double));
    
    fgets(frase,100,stdin);

    estatisticas_frase(frase, min, max, soma, media, desvio);

    printf("[min= %d]", *min);
    printf("[max= %d]", *max);
    printf("[soma= %d]", *soma);
    printf("[media= %f]", *media);
    printf("[desvio= %f]", *desvio);


    free(min);
    free(max);
    free(soma);
    free(media);
    free(desvio);
}
