#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 1;

    do{
        cin >> n;
        if(n == 0)
            break;
        else 
        {
            for(int i = 0; i < n; i++)
            {
                vector <int> v(5);
                int count = 0;
                int aux = 0;
                for(int i = 0; i < 5; i++)
                {
                    cin >> v[i];
                     if(v[i] <= 127)
                    {
                        count++;
                        aux = i;
                    }
                }
                if(count != 1)
                {
                    cout << "*" << endl;
                } else 
                {
                    if(aux == 0)
                        cout << "A" << endl;
                    if(aux == 1)
                        cout << "B" << endl;
                    if(aux == 2)
                        cout << "C" << endl;
                    if(aux == 3)
                        cout << "D" << endl;
                    if(aux == 4)
                        cout << "E" << endl;
                }
            }
        }
    } while (n != 0);
}