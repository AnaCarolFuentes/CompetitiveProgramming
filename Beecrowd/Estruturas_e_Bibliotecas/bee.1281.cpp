#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    int n; 
    double preco_total = 0.0;
    map <string, double> mapa;

    cin >> n;

    cout.precision(2);
    cout.setf(ios::fixed);

    while (n--)
    {
        mapa.clear();
        int m; 
        cin >> m;
        while(m--)
        {
            string fruta;
            double preco;

            cin >> fruta >> preco;

            mapa.insert(pair<string, double> (fruta, preco));
        }
        int p; 
        cin >> p;
        preco_total = 0.0;
        while (p--)
        {
            string fruta;
            int quantidade;

            cin >> fruta >> quantidade;
            preco_total += quantidade * mapa[fruta];
        }
        cout << "R$ " << preco_total << endl;
    }
}