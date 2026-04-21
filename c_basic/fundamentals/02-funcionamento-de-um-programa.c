# include <stdio.h>
//Cada linha finalizada com ponto e vírgula formam uma sentença
//Cada operador vai definir uma expressão

int  main(){

    //cada variável (Ex: a,b e c) tem um espaço reservado na memória
    int a = 1;
    int b = 2;
    int c = a + b;

    //Não podemos quebrar dentro das aspas, mas podemos na vírgula
    printf("RESULTADO = %d\n", c);
    //Aqui não usamso "&c" pq o "&" é usado pra "pegar" o endereço da variével na memória
}