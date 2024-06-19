#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while (n--)
    {
        string cadeia;
        cin >> cadeia;
        bool valido = true;
        stack <char> pilha;

        for(int i = 0; i < cadeia.size(); i++)
        {
            if(cadeia[i] == '(' || cadeia[i] == '{' || cadeia[i] == '[')
            {
                pilha.push(cadeia[i]);
                continue;
            } 
            else
            {
                if(pilha.empty())
                {
                    valido = false;
                    break;
                }
                if(pilha.top() == '(' && cadeia[i] == ')' || pilha.top() == '{' && cadeia[i] == '}' || pilha.top() == '[' && cadeia[i] == ']')
                {
                    pilha.pop();
                    continue;
                } 
                else 
                {
                    valido = false;
                    break; 
                }
            } 
           
        }
         if(valido && pilha.empty())
            cout << "S" << endl;
        else
            cout << "N" << endl;   
    }
}