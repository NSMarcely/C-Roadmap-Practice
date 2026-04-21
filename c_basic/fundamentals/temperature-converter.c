# include <stdio.h>

 int main (){
    int cont = 1;

    while (cont == 1){
        puts("C - Fahrenheit para Celsiusz.\nF - Celsius para Fahrenheita.\nS - Sair.");
        char opt;
        float temp;
        puts("OPÇÃO: ");
        scanf(" %c", &opt);

        if(opt == 'S' || opt == 's') break;

        puts("TEMPERATURA:");
        scanf(" %f", &temp);

        if(opt == 'C' || opt == 'c'){
           float result = (5.0/9) * (temp - 32);
            printf("Em Celsiusz: %.2f\n", result);
        }

        else if(opt == 'F' || opt == 'f'){
           float result = ((9.0/5) * temp) + 32;
            printf("Em Fahrenheita: %.2f\n", result);
        }
    }
    
    return 0;
 }
 