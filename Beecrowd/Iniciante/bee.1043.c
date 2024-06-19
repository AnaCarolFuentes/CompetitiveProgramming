#include <stdio.h>
#include <stdlib.h>

float area(float a, float b, float c)
{
    float area = ((a+b)*c)/2;
    return area;
}
float p(float a, float b, float c)
{
    float p = (a+b+c);
    return p;
}
int main()
{
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    if((a + b) > c && (a + c) > b && (c + b) > a)
    {
         printf("Perimetro = %.1f\n", p(a,b,c));
        
    } else
       printf("Area = %.1f\n", area(a,b,c));

       return 0;

}