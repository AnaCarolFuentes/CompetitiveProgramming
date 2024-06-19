#include <iostream>

using namespace std;

int main()
{
    int a;
    double b;

    cout.precision(3);
    cout.setf(ios::fixed);

    cin >> a >> b;

    cout << a / b << " km/l" << endl;
}