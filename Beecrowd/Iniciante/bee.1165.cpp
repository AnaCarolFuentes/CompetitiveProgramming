#include <iostream>

using namespace std;

void ehPrimo (int b)
{
    int valor = 0; 

    for(int i = 2; i < b; i++)
    {
        if(b % i == 0)
        {
            valor = 1;
            break;
        }
    }
    if(valor == 1)
    {

        cout << b << " nao eh primo" <<endl;
    } else
        cout << b << " eh primo" <<endl;
}

int main()
{
    unsigned int a;

    cin >>a;

    for(int i = 0; i < a; i++)
    {
        unsigned int b;
        cin >>b;
        ehPrimo(b);
    }
}