#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m ;
    int a[n];
    memset(a, 0, sizeof(a));
    int x,y,z;
    for(int i=0 ; i< m ; i++){
        cin >> x >> y >> z;
        a[x-1] +=z;
        a[y-1] -=z;
    }
    int sum=0;
    for(int i=0 ; i<n ; i++){
        //cout << a[i] << endl;
        if(a[i] >0) sum+=a[i];
    }
    cout << sum;
    return 0;
}
