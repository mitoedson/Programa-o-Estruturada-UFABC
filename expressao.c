#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    int i,j,k,sinal,tmp_numero,indice_conversao,encerra_loop,conta_entradas,op_prioritarios,op_total,a,b,encerra_mover,indice_mover;
    int saida;
    char expressao[100];
    int conversao[100];
    char operadores[5]={'+','-','*','/','='};
    char numeros[10]={'0','1','2','3','4','5','6','7','8','9'};

    // entrada de string
    for(i = 0; i <= 99; i++) 
    {
        expressao[i]='#';
    }    
    scanf("%s",expressao);
   

    // somente coloca zeros no vetor conversao
    for(i = 0; i <= 99; i++) 
    {
        conversao[i] = 0;
    }

    // leitura de caracteres de expressao e passa para conversao
    sinal = 1;
    tmp_numero = 0;
    indice_conversao = 0;
    conta_entradas = 0;
    encerra_loop = 0;
    op_prioritarios = 0;
    for(i = 0; i <= 99; i++) 
    {
        // verifica numeros na sequencia do vetor expressao 

        for(j=0;j<=9;j++)
        {
            if(numeros[j] == expressao[i])
            {
                if(sinal == 1)
                    sinal = 0; 

                tmp_numero = tmp_numero*10 + j;
            }
        }

        // verifica simbolos na sequencia do vetor expressao
        for(k=0;k<=4;k++)
        {
            if(operadores[k] == expressao[i+1])
            {
                if(sinal == 0)
                {
                    conversao[indice_conversao] = tmp_numero;
                    tmp_numero = 0;
                    indice_conversao++;
                    conta_entradas++;
                    sinal = 1;
                }                
                conversao[indice_conversao] = k;
                conta_entradas++;
                
                if(expressao[i+1] == '*' || expressao[i+1] == '/')
                           op_prioritarios++;

                if(expressao[i+1] == '=')
                    encerra_loop = 1;
                else
                    indice_conversao++;

                break;
            }
        }

        if(encerra_loop == 1)
            break;
    }

    // Trabalho de calculo com o vetor conversao (i impares = operadores, i pares = numeros)
    op_total = (conta_entradas/2) - 1;
    while(op_total != 0)
    {

        saida = 0;
        encerra_loop = 0;
        // verifica a prioridade dos operadores, e seleciona qual será calculado 
        while(encerra_loop == 0)
        {
            for(i=0;i<(conta_entradas/2) - 1;i++) // le as casas onde estao os operadores
            {
                a = conversao[(i*2)];
                b = conversao[(i*2)+2];

                if(op_prioritarios == 0) // se zero, não há mais operadores * e /
                {
                    if(conversao[(i*2)+1] == 0) // o operador eh +
                    {
                        saida = a+b;
                        op_total--;
                        encerra_loop = 1;
                    }
                    else if(conversao[(i*2)+1] == 1) // o operador eh -
                    {
                        saida = a-b;
                        op_total--;
                        encerra_loop = 1;
                    }
                }
                else // há operadores * e /
                {
                    if(conversao[(i*2)+1] == 2) // o operador eh *
                    {
                        saida = a*b;
                        op_prioritarios--;
                        op_total--;
                        encerra_loop = 1;
                    }
                    else if(conversao[(i*2)+1] == 3) // o operador eh /
                    {
                        saida = a/b;
                        op_prioritarios--;
                        op_total--;
                        encerra_loop = 1;
                    }
                }
                if(encerra_loop == 1)
                    break;
            }     

        conversao[(i*2)] = saida;
        conversao[(i*2)+1] = 0;
        conversao[(i*2)+2] = 0;
        indice_mover = i*2;

        break;
        }

        // Remaneja os campos existentes
        j=0;
        encerra_mover = 0;
        while(encerra_mover == 0)
        {
 
            for(j=indice_mover+3;j<=conta_entradas-1;j++)
            {
                conversao[j-2] = conversao[j];
                conversao[j] = 0;
            }
            encerra_mover = 1;
        }
        conta_entradas = conta_entradas - 2;
        op_total = (conta_entradas/2) - 1;

    }

    printf("%d",conversao[0]);

    return 0;
}
