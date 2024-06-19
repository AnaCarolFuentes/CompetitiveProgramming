#include <stdio.h>
#include <stdlib.h>

//REFAZER!!

double calcularPorcentagem (int, int);

int main()
{
    int c;
    int count = 0;
    
    scanf("%d", &c);

    int * v = (int*) malloc ( c*sizeof(int));

    for(int i = 0; i < c; i++)
    {
        int n = 0; 
        scanf("%d", &n);
        int * v2 = (int *) malloc( n * sizeof(int));

        for(int i = 0; i < n; i++)
        {
            scanf("%d", (v2 + i));
            if(*(v2 + i) >= 90)
            {
                count++;
            }
        }
    }

}
double calcularPorcentagem (int count, int n)
{
    double porcentagem = (count/n) * 100;
}