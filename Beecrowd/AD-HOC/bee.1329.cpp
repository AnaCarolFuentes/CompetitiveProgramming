#include <iostream>

using namespace std;

int main()
{
    int n = 1; 
    

    do{
        cin >> n;
        if(n == 0)
        break;
        int contM = 0; 
        int contJ = 0; 

        for(int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            if(b == 1)
            contJ++;
            else
            contM++;
        }

        cout << "Mary won " << contM << " times and John won " << contJ << " times" << endl;

    } while (n != 0);
}