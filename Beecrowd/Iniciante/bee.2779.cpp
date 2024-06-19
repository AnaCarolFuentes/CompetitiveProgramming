#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n; 
    cin >> n;

    int m;
    cin >> m;

    vector <bool> v(n, false);


    for(int i = 0; i < m; i++)
    {
        int fig;
        cin >> fig;
        v[fig - 1] = true;
    }

    cout << count(v.begin(), v.end(), false) << endl;



}