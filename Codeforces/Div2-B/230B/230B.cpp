#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool is_prime(long long x)
{
    if (x % 2 == 0)
        return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
bool isT_prime(long long x)
{
    switch (x)
    {
    case 1:
    case 2:
    case 3:
        return false;
        break;
    case 4:
        return true;
        break;
    }
    if (x % 2 == 0)
        return false;
    double root1 = sqrt(x);
    long long root2 = sqrt(x);
    if (root1 == root2 && is_prime(root2))
        return true;
    return false;
}
int main()
{
    long long n, m;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> m;
        if (isT_prime(m))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}