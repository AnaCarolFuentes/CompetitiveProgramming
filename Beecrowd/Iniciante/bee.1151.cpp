#include <iostream>

using namespace std;

int main()
{
    int a;

    cin >> a;

    int fibo[a];


    fibo[0] = 0;
    fibo[1] = 1;

    for(int i = 2; i < a; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    for(int i = 0; i < a; i++)
    {
        cout << fibo[i] << " ";
    }

    cout<<endl;

    

}