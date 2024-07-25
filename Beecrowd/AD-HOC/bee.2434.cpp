
/*Ana Carolina Fuentes*/
#include <bits/stdc++.h>
#define optmize ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    int casos, saldo, menor;
    menor = 100000;
    cin >> casos >> saldo;

    int prefSum[casos + 1];
    int cont = 0;

    prefSum[cont++] = saldo;


    while(casos--)
    {
        cin >> saldo;
        prefSum[cont] = saldo + prefSum[cont - 1];
        if(prefSum[cont] < menor)
            menor = prefSum[cont];
        cont++;
    }


    cout << menor << endl;
    
}