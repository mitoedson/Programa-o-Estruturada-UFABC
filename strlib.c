//inclua as implementações das funções descritas em strlib.h
#include <stdio.h>
#include <stdlib.h>


/**
 * @brief string length (tamanho da string)
 * @details função determina o tamanho da string passada como parâmetro
 * desconsiderando o caractere '\0', ou seja, ele não é contabilizado no
 * tamanho. se a string for nula, a função deve retornar -1. a função 
 * assume que a string é bem formada, isto é, termina com o '\0'.
 * 
 * @param str string para qual o tamanho deve ser computado
 * @return o tamanho da string ou -1 no caso de string nula
 */
int str_length (const char *str) {
    if(str == NULL)
        return -1;

    int i = 0;
    while(*(str + i) != '\0'){
        i++;
    }

    if(i == 0)
        return 0;
    else
        return i;   
}


/**
 * @brief string duplicate (duplica string)
 * @details a função duplica a string recebida como parâmetro. um novo
 * ponteiro é criado, memória para acomodar a cópia é alocada e o con-
 * teúdo de str é copiado para a nova região de memória criada. este 
 * ponteiro é então retornado pela função.
 * 
 * @param str a string a ser duplicada
 * @return ponteiro para a nova string que é uma cópia da original. caso
 * a string recebida como parâmetro seja nula a função retorna um pon-
 * teiro nulo.
 */
char* str_duplicate (const char *str) {
    if(str_length(str) != -1){
        int i;
        char *nova_string = malloc(sizeof(char) * str_length(str));
        for(i = 0; i < str_length(str); i++)
            *(nova_string + i) = *(str + i);
        *(nova_string + i) = '\0';
        return nova_string;
    }
    else{
        char *nova_string = 0;
        return nova_string;
    }
}

/**
 * @brief string compare (compara strings)
 * @details compara duas strings com relação a seus caracteres. a função 
 * assume (pré condição) que as duas strings passadas como parâmetro não
 * são nulas e não trata estes casos.
 * 
 * @param stra uma string não nula devidamente formada (com \0 ao final)
 * @param strb uma string não nula devidamente formada (com \0 ao final)
 * 
 * @return a função retorna: 0 caso as strings sejam lexicograficamente 
 * iguais; -1 caso stra < strb; +1 caso stra > strb.
 */
int str_compare (const char *stra, const char *strb) {
    if(stra == NULL || strb == NULL)
        return -1;

    int i = 0; 
    // inicio da stra com o caracter, valor referencial para inicio_a.
    int inicio_a = 0; 
    int comprimento_stra = str_length(stra);
    while(*(stra + i) != '\0'){
        if(*(stra + i) != ' '){
            inicio_a = i;
            break;
        }
        i++;
    }
    // inicio da strb com o caracter, valor referencial para inicio_b.
    i = 0;
    int inicio_b = 0; 
    int comprimento_strb = str_length(strb);
    while(*(strb + i) != '\0'){
        if(*(strb + i) != ' '){
            inicio_b = i;
            break;
        }
        i++;
    }

    // analisa string
    do{
        if(*(stra + inicio_a) != *(strb + inicio_b)){
            if(*(stra + inicio_a) > *(strb + inicio_b))
                return 1;
            else
                return -1;
        }
        else{
            if(*(stra + inicio_a) == '\0' && *(strb + inicio_b) == '\0' )
                return 0;
            else if(*(stra + inicio_a) == '\0' && *(strb + inicio_b) != '\0')
                return -1;
            else if(*(stra + inicio_a) != '\0' && *(strb + inicio_b) == '\0')
                return 1;
            else{
                inicio_a++;
                inicio_b++;
            }
        }
    }while(*(stra + inicio_a) != '\0' || *(strb + inicio_b) != '\0');
}


/**
 * @brief string revese (reverte string)
 * @details reverte uma string
 * 
 * @param str a string a ser revertida
 * @return retorna 1 caso consiga reverter a string e 0 caso contrário. 
 * Note que é possível reverter uma string vazia (o resultado é ela mes-
 * ma), mas não é possível reverter uma string nula.
 */
int str_reverse (char *str) {
    if(str_length(str) == -1)
        return 0;
    else{
        char reverte_str[str_length(str)];
        int i;
        for(i = 0; i < str_length(str); i++){
            reverte_str[str_length(str) - 1 - i] = *(str + i);
        }
        reverte_str[i] = '\0';

        i = 0;
        while(*str != '\0'){
            *str = reverte_str[i];
            ++str;
            i++;
        }
        return 1;
    }
}


/**
 * @brief string upper (string maiúsculas)
 * @details transforma todos caracteres alfabéticos da string para caixa 
 * alta (maiúsculo). somente os caracteres alfabéticos são alterados.
 * 
 * @param str a string que deve ser passada para caixa alta
 * @return o número de caracteres que foram transformados para caixa al-
 * ta. caso a string seja nula, retorna -1.
 */
int str_upper (char *str) {
    if(str_length(str) == -1)
        return -1;
    else{
        int i,contador = 0;
        char muda_str;

        i = 0;
        while(*str != '\0'){
            if(*str > 96 && *str < 123){
                muda_str = *str;
                muda_str -= 32;
                *str = muda_str;
                contador++; 
            }
            i++;
            ++str;
        }
        return contador;
    }
}


/**
 * @brief string lower (string minúsculas)
 * @details transforma todos caracteres alfabéticos da string para caixa 
 * baixa (minúsculo). somente os caracteres alfabéticos são alterados.
 * 
 * @param str a string que deve ser passada para caixa baixa
 * @return o número de caracteres que foram transformados para caixa
 * baixa. caso a string seja nula, retorna -1.
 */
int str_lower (char *str) {
    if(str_length(str) == -1)
        return -1;
    else{
        int i,contador = 0;
        char muda_str;

        i = 0;
        while(*str != '\0'){
            if(*str > 64 && *str < 91){
                muda_str = *str;
                muda_str += 32;
                *str = muda_str;
                contador++; 
            }
            i++;
            ++str;
        }
        return contador;
    }
}


/**
 * @brief string copy (copia string)
 * @details copia o conteúdo da string src (source - fonte) para a 
 * string dst (destination - destino), incluindo o caractere \0. Todo o 
 * conteúdo da string dst será perdido. antes de realizar a cópia, a 
 * função verifica se a string dst possui tamanho suficiente para acomo-
 * dar a string src. ou seja, o número de caracteres de dst inlcuindo \0
 * deve ser maior ou igual que o número de caracteres de src (incluindo 
 * o caractere \0). caso dst seja menor que src a cópia não é realizada.
 * 
 * @param dst string que conterá a cópia
 * @param src string a ser copiada
 * 
 * @return retorna 1 caso a cópia seja feita, 0 caso não seja possível 
 * copiar (restrições de tamanho) e -1 caso src ou dst sejam nulas.
 */
int str_copy (char *dst, const char *src) {
    if(str_length(dst) == -1 || str_length(src) == -1)
        return -1;
    else if(str_length(dst) < str_length(src))
        return 0;
    else{
        while(*dst != '\0'){
            *dst = *src;
            ++dst;
            ++src;
        }
        *dst = '\0';
        return 1;
    }
}


/**
 * @brief string contatenate (contatena strings)
 * @details contatena stra e strb em uma nova string, alocada pela fun-
 * ção. o ponteiro desta nova string é retornado pela função.
 * 
 * @param stra primeira string
 * @param strb segunda string
 * 
 * @return a concatenação das strings stra e strb. caso as duas sejam 
 * não nulas, retorna a concatenação. caso uma das strings seja nula, 
 * uma nova string deve ser alocada e uma cópia da string não nula é
 * retornada. caso stra e strb sejam nulas, um ponteiro nulo é retorna-
 * do pela função.
 */
char* str_concatenate (const char *stra, const char *strb) {
    if(str_length(stra) == -1 && str_length(strb) == -1){
        char *nova_string = NULL;
        return nova_string;
    }
    else{
        int i, contador = 0, total = 0;
        if(str_length(stra) != -1)
            total += str_length(stra);
        if(str_length(strb) != -1)
            total += str_length(strb);


        char *nova_string = malloc(sizeof(char) * (total + 1));

        if(str_length(stra) != -1){
            for(i = 0; i < (str_length(stra)); i++){
                *(nova_string + contador) = *(stra + i);
                contador++;
            }
        }
        if(str_length(strb) != -1){
            for(i = 0; i < (str_length(strb)); i++){
                *(nova_string + contador) = *(strb + i);
                contador++;
            }
        }
        *(nova_string + contador) = '\0';
        return nova_string;
    }
}


/**
 * @brief string find first (encontra primeira ocorrência)
 * @details encontra a primeira ocorrência do caractere c em str
 * 
 * @param str a string na qual o caractere será procurado
 * @param c o caractere a ser buscado
 * 
 * @return retorna a posição da primeira ocorrência do caractere c na 
 * string str. caso o caractere não seja encontrado ou str seja nula
 * a função retorna -1.
 */
int str_find_first (const char *str, const char c) {
    if(str_length(str) == -1)
        return -1;
    else{
        int i, posicao, encontrado = 0;
        for(i = 0; i < str_length(str); i++){
            if(*(str + i) == c){
                posicao = i;
                encontrado = 1;
                break;
            }
        }
        if(encontrado == 0)
            return -1;
        else
            return (posicao);
    }
}


/**
 * @brief string find last (encontra última ocorrência)
 * @details encontra a última ocorrência do caractere c em str
 * 
 * @param str a string na qual o caractere será procurado
 * @param c o caractere a ser buscado
 * 
 * @return retorna a posição da última ocorrência do caractere c na 
 * string str. caso o caractere não seja encontrado ou str seja nula
 * a função retorna -1.
 */
int str_find_last (const char *str, const char c) {
    if(str_length(str) == -1)
        return -1;
    else{
        int i, posicao, encontrado = 0;
        for(i = (str_length(str) - 1); i >= 0; i--){
            if(*(str + i) == c){
                posicao = i;
                encontrado = 1;
                break;
            }
        }
        if(encontrado == 0)
            return -1;
        else
            return (posicao);
    }
}


/**
 * @brief string count words (conta palavras)
 * @details conta o número de palavras em uma string
 * 
 * @param str a string para a qual a contagem será realizada
 * @return retorna o número de palavras da string. uma palavra é defini-
 * da como uma região de caracteres (quaisquer caracteres) separada por 
 * um ou mais espaços, ex: "   o gato preto cruzou a   estrada" possui
 * seis palavras. retorna -1 caso str seja nula.
 */
int str_count_words (const char *str) {
    if(str_length(str) == -1)
        return -1;
    else{
        int i, contador = 0, inicia_palavra = 0;
        for(i = 0; i < str_length(str); i++){
            if(*(str + i) > 32){
                if(inicia_palavra == 0){
                    contador++;
                    inicia_palavra = 1;
                }
            }
            else
                inicia_palavra = 0;
        }
        return contador;
    }
}


