#include <stdio.h>
#include <stdlib.h>

// Função para calcular o maior divisor comum (MDC) usando o algoritmo de Euclides
int gcd(int a, int b) {
    // Enquanto b não for zero, continua calculando o MDC
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    // Quando b é zero, retorna o valor de a como o MDC
    return a;
}

// Função principal do programa
int main() {
    int N;
    // Solicita ao usuário o número de pares de números
    scanf("%d", &N);

    // Aloca memória para armazenar os pares de números fornecidos pelo usuário
    int *v1 = (int *)malloc(N * sizeof(int));
    int *v2 = (int *)malloc(N * sizeof(int));

    // Lê os pares de números fornecidos pelo usuário
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &v1[i], &v2[i]);
    }

    // Calcula e imprime o MDC para cada par de números
    for (int i = 0; i < N; i++) {
        printf("%d\n", gcd(v1[i], v2[i]));
    }

    // Libera a memória alocada para os arrays de números
    free(v1);
    free(v2);
    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}
