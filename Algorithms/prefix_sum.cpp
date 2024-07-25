/*Ana Carolina Fuentes*/

#include <bits/stdc++.h>
#define optmize ios::sync_with_stdio(false); cin.tie(NULL);
#define N 6

using namespace std;

int main()
{
    int vetor[N] = {7, 2, 10, -5, 4, 3};
    int prefSum[N];
    prefSum[0] = vetor[0];
    //[7, 9, 19, ...]

    for(int i = 1; i < N; i++)
    {
        prefSum[i] = vetor[i] + prefSum[i - 1]; 
    }

    while(true)
    {
        int l, r;
        cin >> l >> r;

        cout << prefSum[r] - prefSum[l - 1] << endl;

    }

}