#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int m,p;
        cin >> m;
        map <string , double> mp;
        while(m--){
            string s; double x;
            cin >> s >> x;
            mp.insert(make_pair(s,x));
        }
        cin >> p;
        double res=0;
        string s; int x;
        while(p--){
            cin >> s >> x;
            auto it = mp.find(s);
            res+= it->second * x * 1.0;
        }
        printf("R$ %.2f\n", res);
    }
    return 0;
}
