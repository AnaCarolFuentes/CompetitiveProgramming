#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    stack <int> p;
    stack <int> min;

    while(n--)
    {
        string s;
        cin >> s;

        if(s == "PUSH")
        {
            int x;
            cin >> x;
            p.push(x);
            if(min.empty() || x <= min.top())
                min.push(x);
            continue;
        }
        else if(s == "POP" && !p.empty())
        {
            if(!min.empty() && p.top() == min.top())
            {
                min.pop();
            }
            p.pop();
            continue;
        }
        else if(s == "MIN" && !p.empty() && !min.empty())
        {
            cout << min.top() << endl;
            continue;
        } else
            cout << "EMPTY" << endl;
    }

    return 0;
}