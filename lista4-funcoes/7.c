#include <stdio.h>

int maior_fator_primo(int);

int main() {
    int numero;
    printf("Entre com um numero inteiro positivo: ");
    scanf("%d", &numero);
    int maior_primo = maior_fator_primo(numero);
    if (maior_primo == numero) {
        printf("O numero que voce entrou eh primo, sendo ele (%d) o maior fator\n", numero);
    } else {
        printf("O maior fator primo eh %d\n", maior_primo);
    }
}

int maior_fator_primo(int num) {
    int maior_primo = 1;
    int fator = 2;
    while (num > 1) {
        if (num % fator == 0) {
            num /= fator;
            if (fator > maior_primo && num != fator) {
                maior_primo = fator;
            }
        } else {
            fator++;
        }
    }
    return maior_primo;
}

