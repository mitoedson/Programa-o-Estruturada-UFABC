#include <stdlib.h>

char separar_palavras(char *frase, int *n_palavras) {

    // conta palavras em *frase
    int i = 0, contador_palavras = 0, inicia_palavra = 0, maior_palavra = 0, contador_letras = 0,  contador_total = 0;
    while(*(frase + i) > 31)
    {
        if(*(frase + i) > 32){
            if(inicia_palavra == 0){
                contador_palavras++;
                inicia_palavra = 1;
            }
        contador_letras++;
        }
        else{
            if(contador_letras != 0){
                if(maior_palavra < contador_letras)
                    maior_palavra = contador_letras;
                    contador_total += contador_letras;
            }
            contador_letras = 0;
            inicia_palavra = 0;
        }
        i++;
    }
    *n_palavras = contador_palavras;

    // matriz palavra
    i = 0, inicia_palavra = 0;
    int j = 0, k = 0;
    char **palavra = malloc(contador_palavras * sizeof(char *));
    while(frase[i] > 31)
    {
        if(frase[i] > 32){
            if(inicia_palavra == 0){
                palavra[j] = malloc(maior_palavra * sizeof(char));
                inicia_palavra = 1;
                k = 0;
            }
            palavra[j][k] = frase[i];
            k++;
        }
        else{
            if(inicia_palavra != 0){
                palavra[j][k] = '\0';
                k = 0;
                j++;
            }
            inicia_palavra = 0;
        }
        i++;
        if(frase[i] < 31 && inicia_palavra != 0){
            palavra[j][k] = '\0';
        }
    }

    for(i = 0; i < contador_palavras; i++)
        printf("[%s]\n",palavra[i]);

    return palavra;
}
