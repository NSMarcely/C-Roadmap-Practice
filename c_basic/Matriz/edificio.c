# include <stdio.h>
# include <stdlib.h>
# include <time.h>
//temos andar(5) = camada| sala(10) = linha| temperatura(para cada hora do dia 24h) = coluna 
//media de temperatura por andar 
//vamos automatizar as temperaturas com o rand() e utilizaremos o operador resto "%" para 
// dar um limite de até onde vai o nosso max será 50° e o -15° 
void organizador(int edificio[5][10][24]){
    for(int i = 0; i < 5; i++){
        int temp;
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 24; k++){
                temp = (rand() % 66) - 15; 
                edificio[i][j][k] = temp;
            }
        }
    }
}

void media(int edifico[5][10][24], int andar){
    int sum = 0;
    for(int j = 0; j < 10; j++){
        for(int k = 0; k < 24; k++){
            int temp = edifico[andar - 1][j][k];
            printf("SALA: %d| TEMPERATURA: %d (%d hora)", j + 1, temp, k);
            printf("\n");
            sum += temp;
        }
    }
    float med = sum/(24.0*10.0);
    printf("MÉDIA = %.2f\n", med);
}

int main(){
    int edificio [5][10][24] = {{{0}}};
    int opc = 0;
    int andar;
    int sala;
    int horario;
    organizador(edificio);
    while (opc != 3){
        puts("___Edifício Azul___");
        puts("1- Ver tempetura da sala\n2- Ver média da temperatura\n3- Sair\n°Opção:");
        scanf("%d", &opc);
        if (opc == 1){
            puts("Andar: "); 
            scanf("%d", &andar);
            puts("Sala: ");
            scanf("%d", &sala);
            puts("Horário: ");
            scanf("%d", &horario);
            printf("TEMPERATURA : %d\n", edificio[andar - 1][sala - 1][horario]);
        }
        else if(opc == 2){
            puts("Andar: "); 
            scanf("%d", &andar);
            media(edificio, andar);
        }

        else if(opc == 3){
            puts("Saindo...");
            break;
        }
    }
    
    return 0;
}