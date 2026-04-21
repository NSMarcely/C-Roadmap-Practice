# include <stdio.h>

void reservarAssento(int fileira, int assento, int assentos[15][20]){
    if(assentos[fileira - 1 ][assento - 1] == 0){
        assentos[fileira - 1][assento - 1] = 1;
        puts("Assento reservado com sucesso!");
    } 
    else{
        printf("Não foi possivel reservar o assento %d na fileira %d",assento, fileira);
    }
}

void verAssentos(int assentos[15][20]){
    puts("Assentos disponíveis:");
    for(int i = 0; i<15; i++){
        printf("%d| ", i + 1);
        for(int j = 0; j<20; j++){
            printf("%d", assentos[i][j]);
        }
    printf("\n");
    }
}

int main(){
    int assentos [15][20] = {{0}};
    int fileira;
    int assento;
    int opc = 0;
    while (opc != 3){
        puts("Teatro da Rafinha");
        puts("1- Reservar um assento\n2- Ver assentos\n3- Sair\n°Opção: ");
        scanf("%d", &opc);
        
        if(opc == 1){
            puts("Fileira: ");
            scanf("%d", &fileira);
            puts("Assento: ");
            scanf("%d", &assento);
            reservarAssento(fileira, assento, assentos);
        }

        else if(opc == 2){
            verAssentos(assentos);
        }
        else if (opc == 3){
            puts("Saindo..");
            break;
        }

        else{
            puts("Opção inválida, tente novamente!");
        }
    }
    
    return 0;
}