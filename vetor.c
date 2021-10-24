#include <stdio.h>
#include <stdlib.h>

int intercala_vetores(int *v_a, int n_a, int *v_b, int n_b, int **v) {

    int i = 0, j = 0, k = 0, verifica_ordem = 1, conta_mudanca = 0, auxilia_troca = 0;
    int *v_ordena = malloc(sizeof(int) * (n_a + n_b));

    i = 0;
    for(i = 0; i < n_a; i++)
        *(v_ordena + i) = *(v_a + i);
    for(j = 0; j < n_b; j++){
        *(v_ordena + i) = *(v_b + j);
        i++;
    }

    while(verifica_ordem != 0){
        conta_mudanca = 0;
        for(i = 0; i < (n_a + n_b - 1); i++){
            if(*(v_ordena + i) > *(v_ordena + i + 1)){
                auxilia_troca = *(v_ordena + i);
                *(v_ordena + i) = *(v_ordena + i + 1);
                *(v_ordena + i + 1) = auxilia_troca;
                conta_mudanca++;
            }
        }
        if(conta_mudanca == 0)
            verifica_ordem = 0;
    }
    *v = v_ordena;

    return (n_a + n_b);
}


void preenche_vetores(int *v, int n) {
    int i;
    for(i = 0; i < n; i++)
        scanf("%d",&v[i]); 
}

void mostra_vetores(int *v, int n) {
    int i;
    for(i = 0; i < n; i++)
        printf("%d",*(v + i)); 
}

int main(){

    int *v_a = malloc(sizeof(int) * 3);
    v_a[0] = 10;
    v_a[1] = 30;
    v_a[2] = 50;
    int *v_b = malloc(sizeof(int) * 2);
    v_b[0] = 20;
    v_b[1] = 40;

    int *v_r;
    int n_r = intercala_vetores(v_a, 3, v_b, 2, &v_r);
    int i;
    for (i = 0; i < n_r; i++)
	    printf("%d ", v_r[i]);

    free(v_a);
    free(v_b);
    free(v_r);
}
