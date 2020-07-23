#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    int j = arr[0], t = arr[0]-1;
    for (int i = 1; i < m; i++)
    {
        if(j>arr[i]){
            continue;
        }
        else if (j==arr[i]){
            t+=n-1;
        }
        else{
            j=arr[i];
            t=arr[i] - arr[i-1];
        }
    }
    cout << t << endl;
}