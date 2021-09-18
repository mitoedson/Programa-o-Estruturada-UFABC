/*
Test 3: Teste 3
[Incorrect program output]
--- Input ---
25
33 33 22 11 11 22 33 11 22 33 33 11 22 33 11 11 11 22 33 11 22 33 11 22 33
4
11 22 33 11


--- Program output ---
vetor1 = [ 33 33 22 11 11 22 33 11 22 33 33 11 22 33 11 11 11 22 33 11 22 33 11 22 33 ]
vetor2 = [ 11 22 33 11 ]
verificar_sequencia = 2

--- Expected output (exact text)---
vetor1 = [ 33 33 22 11 11 22 33 11 22 33 33 11 22 33 11 11 11 22 33 11 22 33 11 22 33 ]
vetor2 = [ 11 22 33 11 ]
verificar_sequencia = 4

Summary of tests
+------------------------------+
|  6 tests run/ 5 tests passed |
+------------------------------+


Descrição

*/
#include <stdio.h>

int verificar_sequencia(int vetor1[], int n1, int vetor2[], int n2) {

    int i,j,contador_sequencias,contador_passos;

    contador_sequencias = 0; 
    for(i = 0; i < n1; i++)
    {
        contador_passos = 0;
        for(j = 0; j < n2; j++)
        {
            if(vetor1[i] == vetor2[j])
            {
                contador_passos++;
                if(contador_passos == n2)
                {
                    contador_sequencias++;
                    i--;
                    break;
                }
                else
                {
                    i++;
                }
            }
            else
            {
                if(contador_passos != 0)
                    i--;
                break;
            }
        }
    }
    return contador_sequencias;
}


int main()
{
    int a,b;
    int vetor1[25]={33,33,22,11,11,22,33,11,22,33,33,11,22,33,11,11,11,22,33,11,22,33,11,22,33};
    int vetor2[3]={33,11,22};

    printf("%d",verificar_sequencia(vetor1,25,vetor2,3));

    return 0;
}
