#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; 
    cin >> n;

    vector <int> par;
    vector <int> impar;

    while(n--)
    {
        int num; 
        cin >> num; 
        if(num % 2 == 0)
        {
            par.push_back(num);
        } else
            impar.push_back(num);
    }

    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end(), greater<int>());
    for(int val : par)
    {
        cout << val << "\n";
    }
    for(int val : impar)
    {
        cout << val << "\n";
    }
}