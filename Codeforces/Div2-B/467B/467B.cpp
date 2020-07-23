#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countBits(int num)
{
    int cnt = 0;
    while (num)
    {
        if (num & 1 == 1)
            cnt++;
        num >>= 1;
    }
    return cnt;
}
int main()
{
    int n, m, k, Fedor;
    cin >> n >> m >> k;
    int army[m];
    for (int i = 0; i < m; i++)
        cin >> army[i];
    cin >> Fedor;
    //    int FedBit = getBit(Fedor,k-1);
    int friends = 0;
    for (int i = 0; i < m; i++)
    {
        if (countBits(Fedor ^ army[i]) <= k)
        {
            friends++;
        }
    }
    cout << friends << endl;
    return 0;
}