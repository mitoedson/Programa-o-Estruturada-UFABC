#include <stdio.h>

int main()
{
    int indice = 0,contador = 0,palavra = 0,numero_caracteres = 0,vazio = 0;
    char palavras[100];

    fgets(palavras,100,stdin);

    while(palavras[indice] != '\0')
    {
        numero_caracteres++;
        indice++;
    }

    indice = 0;    
    while(indice <= numero_caracteres)
    {
        if(palavras[indice] != ' ')
        {
            if(palavra == 0)
                contador++;
            palavra = 1;
        }
        else
            palavra = 0;

        indice++;
    } 

    printf("%d",contador);

    return 0;
}
