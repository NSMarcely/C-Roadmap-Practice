# include <stdio.h>

 int main () {
    //para um carcter
    char letra;//1 byte

    //números inteiros
    short numero_inteiro_curto;//2 bytes
    int numero_inteiro;//4 bytes
    long int numero_inteiro_longo;//4 bytes

    //numeros quebrados
    float quebrados;//4 bytes
    double quebrados_maiores;//8 bytes
    long double quebrados_bem_maiores;//16 bytes

    //Atribuindo valores:
    letra = 'a';//usamos asjpas simples para um caracter
    numero_inteiro_curto = 32767; //min -32767
    numero_inteiro = 1358091384;
    return 0;
 }