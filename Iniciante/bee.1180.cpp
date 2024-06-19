#include <iostream>

using namespace std;

int main()
{
    int n;

    cin>>n;

    int * v = new int [n];

    int menor = 10001;
    int indice = -1;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] < menor)
        {
            menor = v[i];
            indice = i;
        }
    }
    cout << "Menor valor: "<<menor<<endl;
    cout << "Posicao: "<<indice<<endl;

    delete[] v;
}