#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;

    cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int cont;

    for(int i = 0; i < v.size(); i+=cont)
    {
        int valor = v[i];
        cont = 0;
        int j = i;
        while(v[j] == valor)
        {
            cont++;
            j++;
        }
        cout << valor << " aparece " << cont << " vez(es)" << endl;
    }

}