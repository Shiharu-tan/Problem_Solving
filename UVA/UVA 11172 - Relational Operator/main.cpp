#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long x,y;
    while(n--){
        cin >> x >> y;
        if(x>y) cout << '>' << endl;
        else if (y>x) cout << '<' << endl;
        else cout << '=' << endl;
    }
    return 0;
}
