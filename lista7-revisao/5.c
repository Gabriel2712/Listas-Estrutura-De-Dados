// Código do exercício está errado, segue abaixo a correção

int main(){
    int valor;
    scanf("%d", &valor);
    int *p = &valor;
    *p = (*p) * (*p);  // necessário asteriscos antes da variável ponteiro para acessar ao conteudo do endereço apontado
    printf("Valor ao quadrado = %d\n", valor);
    return 0;
}
