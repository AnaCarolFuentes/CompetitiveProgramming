#include <iostream>

using namespace std;

int main()
{
    int v[10];

    for(int i = 0; i < 10; i++)
    {
        cin >> v[i];
        if(v[i]<=0)
        {
            cout <<"X["<<i<<"] = 1" << endl;
        } else
            cout <<"X["<<i<<"] = " <<v[i]<< endl;
    }
}