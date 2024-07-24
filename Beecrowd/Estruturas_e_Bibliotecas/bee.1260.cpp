/*Ana Carolina Fuentes*/
#include <bits/stdc++.h>
#define optmize ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    cout << fixed << setprecision(4);
    int n;
    cin >> n;
    string linhaEmBranco; 
    getline(cin, linhaEmBranco); //limpa o buffer do teclado depois de ler o n
    getline(cin, linhaEmBranco); //lê a primeira linha em branco

    /*
    A necessidade de limpar o buffer após ler n é devido ao comportamento da função cin. 
    Quando você usa cin para ler um inteiro, ele deixa o caractere de nova linha ('\n') no buffer.
    Isso pode causar problemas quando você tenta ler uma linha inteira de texto logo depois.
    Se não limparmos o buffer, o getline pode ler uma string vazia inesperadamente e pular a entrada que você pretende processar.
    */
    while(n--)
    {
        string especie;
        map <string, int> mapa;
        int cont = 0;
        
        while(true)
        {
            getline(cin, especie);

            if(especie.empty())
                break;

            mapa[especie] += 1;
            cont++;
        }

            for (const auto& kv : mapa) 
            {
                cout << kv.first << " " << (kv.second * 100.0) / cont << endl;
            }

            if(n != 0)
                cout << endl;

    }   
}