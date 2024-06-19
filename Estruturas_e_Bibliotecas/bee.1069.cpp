#include <iostream>
#include <stack>
#include <string>

#define endl "\n"

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        stack <char> pilha;
        int cont = 0;
        string diamante;
        cin >> diamante;

        for(int i = 0; i < diamante.size(); i++)
        {
            if(diamante[i] == '<')
            {
                pilha.push(diamante[i]);
            } 
            else if(diamante[i] =='>' && !pilha.empty())
            {
                pilha.pop();
                cont++;
            }
        }
        cout << cont << endl;
    }
}