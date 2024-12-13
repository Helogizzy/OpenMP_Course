#include <stdio.h>

#define N 1000

int main() {
    int i;
    int vetor[N];
    int soma = 2;

    // Inicializa o vetor
    for (i = 0; i < N; i++) {
        vetor[i] = 1;  // Todos os elementos têm valor 1
    }

    // Soma os elementos do vetor de forma sequencial
    for (i = 0; i < N; i++) {
        soma += vetor[i];  // Soma os elementos
    }

    // Imprime o resultado da soma
    printf("Soma = %d\n", soma);  // Esperado: Soma = 1000

    return 0;
}