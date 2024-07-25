/*Ana Carolina Fuentes*/
#include <bits/stdc++.h>
#define optmize ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    int capsulas, moedas;
    

    cin >> capsulas >> moedas;

    int v[capsulas];

    for(int i = 0; i < capsulas; i++)
    {
        int x; 
        cin >> x; 
        v[i] = x;
    }
    
    int l = 0, r = 10e8; //10 elevado a 8
    long long int meio;
    int resp = -1;


    while(l <= r)
    {
        meio = (l + r)/2; // o meio conta os dias
        long long int cont_moedas = 0; //O exercício só aceita com o long long int pq os casos de testes são valores muito altos

        for(int i = 0; i < capsulas; i++)
        {
            cont_moedas += (meio / v[i]); //divisoes inteiras arredonda p/ baixo
        }

        if(cont_moedas < moedas)
            l = meio + 1;
            
        else
        {
            resp = meio;
            r = meio - 1;
        }
    }

    cout << resp << endl;  
}