/*Ana Carolina Fuentes*/

#include <bits/stdc++.h>
#define optmize ios::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    int l = 0, r = N - 1, key;
    int resp = -1;

    while(l <= r)
    {
        int meio = (l + r)/2;

        if(meio == k)
            resp = meio;
        if(meio < k)
            l = meio + 1;
        else
            r = meio - 1;
    }
}