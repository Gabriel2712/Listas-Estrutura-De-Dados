#include <stdio.h>

float realiza_operacao(float, float, char);

int main(){
    float num1, num2;
    char op;

    printf("Entre com o primeiro numero: ");
    scanf("%f", &num1);

    printf("Entre com o segundo numero: ");
    scanf("%f", &num2);

    fflush(stdin);
    printf("Entre com a operacao: ");
    scanf("%c", &op);

    float resultado = realiza_operacao(num1, num2, op);

    printf("Resultado da operacao solicitada: %.2f", resultado);
}

float realiza_operacao(float n1, float n2, char op){
    float resultado;

    if(op == '+'){
        return n1 + n2;
    }else if(op == '-'){
        return n1 - n2;
    }else if(op == '*'){
        return n1 * n2;
    }else{
        return n1 / 2;
    }
}

