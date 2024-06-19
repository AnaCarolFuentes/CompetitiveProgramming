#include <stdio.h>
#include <stdlib.h>
#include <math.h>
///Refazer

void maior(float a[], int size)
{

    for(int i = 0; i < size - 1; i++)
    {
        
              for(int j = i + 1; j < size; j++)
              {
                    int aux = a[j];
                    a[j] = a[i];
                    a[i] = aux;
              }
    }
}

int main()
{
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);
    float vet[3] = {a, b, c};
    
    maior(&vet, 3);

    if(vet[0] <= vet[1] + vet[2])
    {
        printf("NAO FORMA TRIANGULO\n");
        return;
    }
    float quadrado_a = pow(vet[0], 2);
    float quadrado_b = pow(vet[1], 2);
    float quadrado_c = pow(vet[2], 2);
  
    if(quadrado_a = (quadrado_b + quadrado_c))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if(quadrado_a > (quadrado_b + quadrado_c))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(quadrado_a < (quadrado_b + quadrado_c))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(vet[0] == vet[1] == vet[2])
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(vet[0] == vet[1] || vet[0] == vet[2] || vet[1] == vet[2])
    {
        printf("TRIANGULO ISOSCELES\n");
    }

}