#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n = 1; 
    

    do
    {
        cin >> n;
        if(n == 0)
        break;

        if(n == 1)
            {
                int d;
                cin >> d;
                cout << "1" << endl;
                continue;
            }
        else if(n == 2)
        {
                int d, e;
                cin >> d >> e;
                cout << "2" << endl;
                continue;
        }
        else 
        {
        
                vector <int> v(n);
                int pico = 0;

                for(int i = 0; i < n; i++)
                {
                    cin >> v[i];
                }
                for(int i = 1; i < n - 1; i++)
                {
    
                    if(v[i] > v[i+1] && v[i] > v[i-1] || v[i] < v[i-1] && v[i] < v[i+1])
                    {
                        pico++;
                    }
                }
                if(v[n-1] > v[n-2] && v[n-1] > v[0] || v[n-1] < v[n-2] && v[n-1] < v[0] )
                {
                    pico++;
                }
                    
                if(v[0] > v[1] && v[0] > v[n-1] || v[0] < v[1] && v[0] < v[n-1])
                {
                    pico++;
                }

                cout << pico << endl;
        }
        
    } while (n != 0);
}