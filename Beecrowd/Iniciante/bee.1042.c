#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[3];
    int y[3];
    
    scanf("%d %d %d", &x[0], &x[1], &x[2]);

    for(int i = 0; i <= 2; i++)
    {
        y[i] = x[i];
    }

    for(int i = 0; i <= 2; i++)
    {
        for(int j = (i + 1); j <= 2; j++)
        {
            if(x[i] > x[j])
            {
                int aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    
    }
    for (int i = 0; i <= 2; i++)
    {
        printf("%d\n", x[i]);
    }

    printf("\n");

    for (int i = 0; i <= 2; i++)
    {
        printf("%d\n", y[i]);
    }
        


}