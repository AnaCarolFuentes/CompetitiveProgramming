#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;

    cin >> n;

    cout.precision(2);
    cout.setf(ios::fixed);

    for(int i = 0; i < n; i++)
    {
        string name; 
        double gd, soma = 0.0; 
        vector <double> v(7);

        cin >> name >> gd;

        for(int i = 0; i < v.size(); i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        v.erase(v.begin());
        v.pop_back();

        for(int i = 0; i < v.size(); i++)
        {
            soma += v[i];
        }

        cout << name << " " << soma*gd << endl; 
        
    }


}