// C�digo do exerc�cio est� errado, segue abaixo a corre��o

int main(){
    int valor;
    scanf("%d", &valor);
    int *p = &valor;
    *p = (*p) * (*p);  // necess�rio asteriscos antes da vari�vel ponteiro para acessar ao conteudo do endere�o apontado
    printf("Valor ao quadrado = %d\n", valor);
    return 0;
}
