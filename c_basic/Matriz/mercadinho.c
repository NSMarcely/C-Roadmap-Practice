# include <stdio.h>

void catalogo(int produtos[]){
    puts("Lista de Produtos");
    for(int i = 0; i<10; i++){
        printf("PRODUTO: %d (ESTOQUE: %d)\n", i + 1, produtos[i]);
    }
}

void addIntens(int i, int valorAdicionar, int produtos[]){
    produtos [i - 1] += valorAdicionar;
    printf("Foi adicionado com sucesso %d unidades no estoque do produto %d\n",
    valorAdicionar, i);
}

void removeIntens(int i, int valorRemover, int produtos[]){
    produtos[i - 1] -= valorRemover;
    printf("Foi removido com sucesso %d unidades no estoque do produto %d\n",
    valorRemover, i);
}

int main(){
    int opc = 0;
    int produtos [10] = {8, 3, 6, 9, 1, 4, 0, 2, 3, 0};
    int i;
    int quantidade;
    while (opc != 3){
        puts("---Mercado do Ricardinho---");
        catalogo(produtos);
        puts("1- Adicionar itens\n2- Remover itens\n3-Sair\n°Opção:");
        scanf("%d", &opc);
        if (opc == 1){
            puts("Número do produto:");
            scanf("%d", &i);
            puts("Quantidade a ser adicionada:");
            scanf("%d", &quantidade);
            addIntens(i, quantidade, produtos);
        }

        else if( opc == 3){
            puts("Saindo...");
            break;
        }

        else if(opc == 2){
            puts("Número do produto:");
            scanf("%d", &i);
            puts("Quantidade a ser removida:");
            scanf("%d", &quantidade);
            removeIntens(i, quantidade, produtos);
        }
        else{
            puts("Opção inválida, tente novamente!");
        }
    }
    return 0;
}