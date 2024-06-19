#include <iostream>
#include <math.h>

using namespace std;

double distancia (double x1, double x2, double y1, double y2)
{
    return sqrt(pow(x1-x2,2) + pow(y1-y2,2));
}

int main()
{
    double a, b, c, d;

    cin >> a >> b >> c >> d;

    cout.precision(4);
    cout.setf(ios::fixed);

    cout << distancia(a, c, b, d) << endl; 

}