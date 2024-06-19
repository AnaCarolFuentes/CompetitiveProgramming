#include <stdio.h>
#include <math.h>
#define pi  3.14159

double area ( double r)
{
    return ((4.0/3)*pi*(pow(r, 3)));
}

int main()
{
    double r;

    scanf("%lf", &r);

    printf("VOLUME = %.3lf", area(r));
}