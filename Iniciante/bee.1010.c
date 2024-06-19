#include <stdio.h>

int main()
{
    int a, b, c, d;
    float f, g;

    scanf("%d %d %f", &a, &b, &f);
    scanf("%d %d %f", &c, &d, &g);

    float soma = (b * f) + (d * g);

    printf("VALOR A PAGAR: R$ %.2f\n", soma);
}