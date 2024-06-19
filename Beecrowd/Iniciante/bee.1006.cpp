#include <iostream>
 
using namespace std;
 
int main() {
 
    double a, b, c;
    
    cin >> a;
    cin >> b;
    cin >> c;
    
    double media = ((a * 2) + (b * 3) + (c * 5))/10.0;
    
    cout.precision(1);
    cout.setf(ios::fixed);

    cout << "MEDIA = " << media << endl;
 
    return 0;
}