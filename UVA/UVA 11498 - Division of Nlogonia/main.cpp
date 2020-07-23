#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int k;
    cin >> k;
    while(k) {
        int n, m, x, y;
        cin >> n >> m;
        while (k--) {
            cin >> x >> y;
            if(x==n || y==m){
                cout << "divisa" << endl;
            }
            else if(x>n){
                if(y>m) cout << "NE" << endl;
                else cout << "SE" << endl;
            }
            else{
                if(y>m) cout << "NO" << endl;
                else cout << "SO" << endl;
            }
        }
        cin >> k;
    }
    return 0;
}
