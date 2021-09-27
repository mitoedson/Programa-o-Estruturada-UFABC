#include <stdio.h>

int verificar_ordenacao_tamanho(char texto[]) {

    int indice = 0, numero_caracteres = -1, eh_palavra = 0, conta_palavra = 0, conta_letras = 0, palavra_atual = 0, ordenacao = 0,verifica_ordenacao = 0;

    while(texto[indice] != '\0')
    {
        numero_caracteres++;
        indice++;
    }

    indice = 0;    
    while(indice < numero_caracteres)
    {
        if(texto[indice] != ' ')
        {
            if(eh_palavra == 0)
            {
                conta_palavra++;
                eh_palavra = 1;    
            }
            conta_letras++;
            if(indice == (numero_caracteres - 1))
            {
                verifica_ordenacao = 1;
            }
        } 
        else
        {
            if(eh_palavra == 1)
            {
                eh_palavra = 0;
                verifica_ordenacao = 1;
            }
        }

        if(verifica_ordenacao == 1)
        {
            if(palavra_atual == 0)
                palavra_atual = conta_letras;
            else if(palavra_atual == conta_letras)
                conta_palavra--;
            else if(palavra_atual > conta_letras)
                ordenacao--;
            else if(palavra_atual < conta_letras)
                ordenacao++;
            palavra_atual = conta_letras;
            conta_letras = 0;
            verifica_ordenacao = 0;
       }

        indice++;
    }

    if(ordenacao == (conta_palavra-1))
        return 1;
    else if(ordenacao == (-1)*(conta_palavra-1))
        return 2;
    else
        return 3;
}

int main()
{
    char palavras[100];

    fgets(palavras,100,stdin);

    
    printf("%d",verificar_ordenacao_tamanho(palavras));

    return 0;
}
