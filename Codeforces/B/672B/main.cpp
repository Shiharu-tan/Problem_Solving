#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    set <char> s;
    for (int i = 0; i < n; ++i) {
        char ch;
        cin >>ch;
        s.insert(ch);
    }
    int z= abs(n-(int)s.size());
    if(n>26) cout << -1;
    else cout << z;
    return 0;
}
