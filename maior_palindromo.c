#include <stdio.h>

void converte_numero_para_vetor_de_digitos(int n, int v[]) {

    int elementos,indice,encerra_verificacao,numero_temporario,i;

    elementos = 0;
    encerra_verificacao = 0;
    numero_temporario = n;
    
    while(encerra_verificacao == 0)
    {
        if(elementos == 0)
            indice = 1;
        else
            indice *= 10;

        if(n/indice != 0)
            elementos++;
        else
            encerra_verificacao = 1;
    }

    for(i = 0; i < elementos; i++)
    {
        indice /= 10;
        v[i] = numero_temporario / indice;
        numero_temporario = numero_temporario % indice;
    }
    v[elementos] = -1;
}

int eh_palindromo(int v[]) {

    int indice,i,palindromo;

    indice = 0;
    while(v[indice] != -1)
    {
        if(v[indice] != -1)
            indice++;
    }

    palindromo = 1; 
    while((indice % 2 == 0))
    {
        for(i = 1; i <= (indice / 2); i++)
        {
            if(v[indice - i] != v[i -1])
                palindromo = 0;
        }
        break;
    }

    while((indice % 2 != 0))
    {
        for(i = 1; i <= (indice - 1)/ 2; i++)
        {
            if(v[indice - i] != v[i-1])
                palindromo = 0;
        }
        break;
    }

    if(palindromo == 0)
        return 0;
    else
        return 1;
}

int maior_palindromo(int m, int fatores[2]) {

    int vetor_numero[12],i,j,maior_palindromo,produto;

    maior_palindromo = 0;
    for(i = 1; i <= m; i++)
    {
        for(j = 1; j <= m; j++)
        {
            converte_numero_para_vetor_de_digitos((i * j),vetor_numero);
            if(eh_palindromo(vetor_numero) == 1)
            {
                if((i * j) > maior_palindromo)
                {
                    maior_palindromo = (i * j);
                    fatores[0] = i;
                    fatores[1] = j;
                }
            }
        }
    }

    return maior_palindromo;
}

int main()
{
    int V[11];
    int N = 142024,indica_palindromo;

    int M = 1000;
    int Fatores[2];

    converte_numero_para_vetor_de_digitos(N,V);
    indica_palindromo = eh_palindromo(V);
    printf("%d ",N);
    if(indica_palindromo == 0)
        printf("nao eh palindromo.\n");
    else
        printf("eh palindromo.\n");

    printf("%d ",maior_palindromo(M,Fatores));
    printf("=  %d * %d\n",Fatores[0],Fatores[1]);

    return 0;
}
