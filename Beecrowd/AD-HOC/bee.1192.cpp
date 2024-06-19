#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int a, b;
        char c;
        cin >> a >> c >> b;

        if(a == b)
            cout << a * b << endl;

        else if(c >= 'a' && c <= 'z')
        {
            cout << b + a << endl;
        } else
            cout << b - a << endl;
    }
}