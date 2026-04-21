#include <stdio.h>

float calculator(float number1, char ope, float number2){
    float result = 0;

    switch (ope)
    {
    case '+':
        result = number1 + number2;
        break;

    case '-':
        result = number1 - number2;
        break;

    case 'x':
        result = number1 * number2;
        break;

    case '/':
        result = number1/number2;
        break;

    default:
        puts("Operador não encontrado, tente: +, -, x ou /");
        break;
    }
    return result;
}

int main(){
    float number1;
    char ope;
    float number2;
    int optional;
    int stop = 0;

    while(!stop){
        puts("\n____Calculadora____\n");
        puts("1- Fazer operação\n2- Finalizar sessão\n°Opção:");
        scanf("%d", &optional);
        
        if(optional == 2){
            puts("Saindo...");
            break;
        }

        puts("\nDigite o primeiro número: ");
        scanf(" %f",&number1);
        puts("Digite o operador: ");
        scanf(" %c",&ope);
        puts("Digite o segundo número: ");
        scanf(" %f",&number2);

        if (ope == '/' && number2 == 0){
            puts("Não é possivel fazer divisão p2or 0!\n");
            continue;;
        }

        printf("\nOPERAÇÃO = %.2f %c %.2f\n", number1, ope, number2);
        printf("RESULTADO = %.2f\n", calculator(number1, ope, number2));
    }
    return 0;
}