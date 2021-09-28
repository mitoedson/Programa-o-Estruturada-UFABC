#include <stdio.h>

void remover_palavra(int i, char frase[]) {

    int indice = 0, eh_palavra = 0, conta_palavras = 0, conta_letras = 0, marcacao = 0, total_letras = 0, deslocamento = 0;
    int referencias[20],j;
    char pontuacao[6]={'.',';',',','?','!',':'};

    // contador de palavras e letras
    while(frase[indice] != '\0')
    {
        if(frase[indice] != ' ')
        {
            if(eh_palavra == 0)
            {
                conta_palavras++;
                eh_palavra = 1;
            }

            if(conta_palavras == i)
            {
                for(j = 0; j < 6; j++)
                {
                    if(frase[indice] == pontuacao[j])
                        marcacao = j+1;
                }
            }

            conta_letras++;
        }
        else if(frase[indice] == ' ')
        {
                referencias[conta_palavras - 1] = conta_letras;
                conta_letras = 0;
                eh_palavra = 0;
        }
        indice++;
        total_letras++;
    }
    referencias[conta_palavras - 1] = conta_letras;

    if(i == 1)
    {
        indice = 0;
        while(frase[indice] != '\0')
        {
            frase[indice] = frase[indice + referencias[0] + 1];
            if(frase[indice] == '\0')
                break;

            indice++;
        }
    }
    else if(i == conta_palavras)
    {
        indice = 0;
        for(j = 0; j < conta_palavras - 1; j++)
        {
            indice += referencias[j] + 1;
        }
        indice--;
        if(marcacao != 0)
        {
            frase[indice] = pontuacao[marcacao-1]; 
            indice++;
        }
        frase[indice] = '\0';
    }
    else
    {
        indice = 0;
        for(j = 0; j < i - 1; j++)
        {
            indice += referencias[j] + 1;
        }
        indice--;

        if(marcacao != 0)
            deslocamento = 0;
        else
            deslocamento = 1;

        for(j = indice; j < total_letras; j++)
        {
            frase[indice] = frase[indice + referencias[i-1] + deslocamento];
            indice++;
        }
    }
    printf("%s",frase);
}

int main(){

    int elimina_frase;
    char expressao[100];

    fgets(expressao,100,stdin);
    scanf("%d",&elimina_frase);

    remover_palavra(elimina_frase,expressao);

    return 0;
}
