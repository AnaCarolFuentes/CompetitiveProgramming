#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    int n, operacao, numero;
    bool p, f, fp;
    queue <int> fila;
    stack <int> pilha;
    priority_queue <int> fila_prioridade;
    
    while (cin >> n)
    {
        //garantir que as estruturas estejam vazias
        while (!fila.empty())
            fila.pop();
        while (!pilha.empty())
            pilha.pop();
        while (!fila_prioridade.empty())
            fila_prioridade.pop();

        //todas sao verdadeiras no inicio para, depois, ir descartando as possibilidades
        p = true;
        f = true;
        fp = true;

        for(int i = 0; i < n; i++)
        {
            cin >> operacao >> numero;

            if(operacao == 1)
            {
                if(p) // se p for true
                pilha.push(numero);

                if(f)
                fila.push(numero);

                if(fp)
                fila_prioridade.push(numero);
            } 
            else
            {
                if(p)
                {
                    if(pilha.empty() || pilha.top() != numero)
                        p = false;
                    else 
                        pilha.pop();
                }
                if(f)
                {
                    if(fila.empty() || fila.front() != numero)
                        f = false;
                    else
                        fila.pop();
                }
                if(fp)
                {
                    if(fila_prioridade.empty() || fila_prioridade.top() != numero)
                        fp = false;
                    else
                        fila_prioridade.pop();
                }
                
            }
        }
        if(p && !f && !fp)
        {
            cout << "stack" << endl;
        } 
        else if (!p && f && !fp)
        {
            cout << "queue" << endl;
        }
        else if(!p && !f && fp)
        {
            cout << "priority queue" << endl;
        }
        else if(!p && !f && !fp)
        {
            cout << "impossible" << endl;
        } else
            cout << "not sure" << endl;

    }

    
    return 0;
}