# include <stdio.h>

int in_verified(int number){
    if(number == 0){
        return 0;
    }

    for(int i = 2; i*i<= number; i++){
        if(number%i == 0) return 0;
    }

    return 1;
}

int main(){
    int number;
    int cont = 1;
    while(cont == 1){

    puts("Digie o número:");
    scanf("%d", &number);

    if(number == 0){
        break;
    }
    int result = in_verified(number);
    if(result == 1){
        printf("O número %d é primo\n", number);
    }

    else{
        printf("O número %d é não é primo\n", number);
    }

    return 0;
    }
}