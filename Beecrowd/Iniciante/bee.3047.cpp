#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c;

    d = a - (b + c);
    if(b > c && b > d)
        cout << b << endl; 
    else if (c > d && c > b)
        cout << c << endl;
    else
        cout << d << endl;
}