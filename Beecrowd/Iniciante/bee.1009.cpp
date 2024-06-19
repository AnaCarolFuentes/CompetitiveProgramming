#include <iostream>

using namespace std;

int main()
{
    string name;
    double a, b;

    cin >> name;
    cin >> a;
    cin >> b;

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << "TOTAL = R$ " << a + (b * 0.15) << endl; 
}