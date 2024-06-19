#include <iostream>
#include <queue>
#include <vector>

#define endl "\n"

using namespace std;

int main()
{
    int n = 1;

    while (n != 0)
    {
        cin >> n;
        if(n == 0)
            break;
        
        queue <int> f;
        vector <int> discart;

        for(int i = 1; i <= n; i++)
        {
            f.push(i);
        }

        while(f.size() >= 2)
        {
            discart.push_back(f.front());
            f.pop();
            int aux = f.front();
            f.pop();
            f.push(aux);
        }
        cout <<"Discarded cards: ";
        for(int i = 0; i < discart.size(); i++)
        {
            if (i != discart.size() - 1)
                cout << discart[i] << ", ";
            else 
                cout << discart[i] << endl;
        }
        cout << "Remaining card: "  << f.front() << endl;
    }
}