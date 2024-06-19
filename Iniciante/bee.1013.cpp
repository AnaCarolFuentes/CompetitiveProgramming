#include <iostream>
#include <math.h>

using namespace std;

int maiorValor (int a, int b)
{
    return (a + b + abs(a - b))/2;
}

int main()
{

    int a, b, c;

    cin >> a >> b >> c;

    int maiorAB = maiorValor(a,b);
    int maiorAC = maiorValor(a,c);

    if(maiorAB > maiorAC)
        printf("%d eh o maior\n", maiorAB);
    else
        printf("%d eh o maior\n", maiorAC);
}
