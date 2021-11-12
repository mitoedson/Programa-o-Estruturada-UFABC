//#include "primos.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct ListaNumeros ListaNumeros;
struct ListaNumeros {
    int *numeros;
    int *primos;
    int n_numeros, n_primos;
};

void separar_numeros_primos(ListaNumeros *lista) {

    // variaveis de apoio
    int i, j, k, resto, quociente, contador_primos, base_primo;

    contador_primos = 0;
    // calcula numero de primos na sequencia
    for(i = 0; i < lista->n_numeros; i++){

        resto = 0, quociente = 0, base_primo = 1;
        do{
            // exclui pesquisa para menor que 2
            if(lista->numeros[i] < 2)
                break;

            base_primo++;
            resto = lista->numeros[i] % base_primo;
            quociente = lista->numeros[i] / base_primo;
            // analisa primos
            if(resto == 0 && quociente == 1)
                contador_primos++;
            else if(resto == 0 && quociente != 1)
                break;
        } while(lista->numeros[i] != base_primo);
    } // contador_primos
    int *qtde_numeros = malloc(sizeof(int));
    *qtde_numeros = (lista->n_numeros - contador_primos);
    int *qtde_primos = malloc(sizeof(int));
    *qtde_primos = contador_primos;

    // novos ponteiros para transferencia de numeros
    int *transfere_numeros = malloc(sizeof(int) * (lista->n_numeros - contador_primos));
    int *transfere_primos = malloc(sizeof(int) * contador_primos);

    // transferencia de numeros para os novos ponteiros
    j = 0, k = 0;
    for(i = 0; i < lista->n_numeros; i++){

        resto = 0, quociente = 0, base_primo = 1;
        do{
            // exclui pesquisa para menor que 2
            if(lista->numeros[i] < 2){
                transfere_numeros[j] = lista->numeros[i];
                j++;
                break;
            }
            base_primo++;
            resto = lista->numeros[i] % base_primo;
            quociente = lista->numeros[i] / base_primo;
            // analisa primos
            if(resto == 0 && quociente == 1){
                transfere_primos[k] = lista->numeros[i];
                k++;
            }
            else if(resto == 0 && quociente != 1){
                transfere_numeros[j] = lista->numeros[i];
                j++;
                break;
            }
        } while(lista->numeros[i] != base_primo);
    }

    free(lista->numeros);
    free(lista->primos);

    lista->n_numeros = *qtde_numeros;    
    lista->numeros = malloc(sizeof(int) * lista->n_numeros);
    for(i = 0; i < *qtde_numeros; i++)
        lista->numeros[i] = transfere_numeros[i];

    lista->n_primos = *qtde_primos;    
    lista->primos = malloc(sizeof(int) * lista->n_primos);
    for(i = 0; i < *qtde_primos; i++)
        lista->primos[i] = transfere_primos[i];

    free(qtde_numeros);
    free(qtde_primos);
    free(transfere_numeros);
    free(transfere_primos);

}

int main(){
/* Lista eh ponteiro */
    int i;
    ListaNumeros *lista = malloc(sizeof(ListaNumeros));

    lista->n_numeros = 5;
    lista->numeros = malloc(sizeof(int) * lista->n_numeros);
    lista->numeros[0] = 11;
    lista->numeros[1] = 101;
    lista->numeros[2] = 234;
    lista->numeros[3] = 32;
    lista->numeros[4] = 99;

    lista->n_primos = 0;
    lista->primos = malloc(sizeof(int) * lista->n_primos);
    lista->primos =  NULL;
//    lista->primos[1] = 3;
//    lista->primos[2] = 5;
//    lista->primos[3] = 7;
//    lista->primos[4] = 11;

    // devo colocar & se lista nao for ponteiro
    separar_numeros_primos(lista);

    // imprimir variaveis
    printf("[new n_numeros = %d]\n",lista->n_numeros);
    for(i = 0; i < lista->n_numeros; i++){
        if(i == 0)
            printf("{");
        printf("%d",lista->numeros[i]);
        if(i < (lista->n_numeros - 1))
            printf(" ");
        if(i == (lista->n_numeros - 1))
            printf("}\n");
    }
    printf("[new n_primos = %d]\n",lista->n_primos);
    for(i = 0; i < lista->n_primos; i++){
        if(i == 0)
            printf("{");
        printf("%d",lista->primos[i]);
        if(i < (lista->n_primos - 1))
            printf(" ");
        if(i == (lista->n_primos - 1))
            printf("}\n");
    }

    free(lista);


/* Lista não é ponteiro 

    int i;
    ListaNumeros lista;
    lista.numeros = malloc(sizeof(int) * 5);
    lista.primos = malloc(sizeof(int) * 0);

    lista.numeros[0] = 3;
    lista.numeros[1] = 5;
    lista.numeros[2] = 5;
    lista.numeros[3] = 5;
    lista.numeros[4] = 5;
    lista.n_numeros = 5;

     lista.primos = NULL;

//    lista.primos[0] = 0;
//    lista.primos[1] = 3;
//    lista.primos[2] = 5;
//    lista.primos[3] = 7;
//    lista.primos[4] = 11;
//    lista.primos[5] = 13;
//    lista.primos[6] = 17;
    lista.n_primos = 0;

    // imprimir variaveis
    printf("[old n_numeros = %d]\n",lista.n_numeros);
    for(i = 0; i < lista.n_numeros; i++){
        if(i == 0)
            printf("{");
        printf("%d",lista.numeros[i]);
        if(i < (lista.n_numeros - 1))
            printf(" ");
        if(i == (lista.n_numeros - 1))
            printf("}\n");
    }
    printf("[old n_primos = %d]\n",lista.n_primos);
    for(i = 0; i < lista.n_primos; i++){
        if(i == 0)
            printf("{");
        printf("%d",lista.primos[i]);
        if(i < (lista.n_primos - 1))
            printf(" ");
        if(i == (lista.n_primos - 1))
            printf("}\n");
    }
    printf("\n");


    // devo colocar & se lista nao for ponteiro
    separar_numeros_primos(&lista);

    // imprimir variaveis
    printf("[new n_numeros = %d]\n",lista.n_numeros);
    for(i = 0; i < lista.n_numeros; i++){
        if(i == 0)
            printf("{");
        printf("%d",lista.numeros[i]);
        if(i < (lista.n_numeros - 1))
            printf(" ");
        if(i == (lista.n_numeros - 1))
            printf("}\n");
    }
    printf("[new n_primos = %d]\n",lista.n_primos);
    for(i = 0; i < lista.n_primos; i++){
        if(i == 0)
            printf("{");
        printf("%d",lista.primos[i]);
        if(i < (lista.n_primos - 1))
            printf(" ");
        if(i == (lista.n_primos - 1))
            printf("}\n");
    }

   
    free(lista.numeros);
    free(lista.primos);
*/

    return 0;
}
