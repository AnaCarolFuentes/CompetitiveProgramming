#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a, b;
    float c;

    cin >> a;
    cin >> b;
    cin >> c;

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << "NUMBER = " << a << endl;
    cout << "SALARY = U$  = " << b * c << endl;

}