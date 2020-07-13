#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool compmore1diff(string x , string y){
    int diff=0;
    for(int i=0 ; i<x.size() ; i++){
        if(x[i] != y[i]) diff++;
        if(diff > 1) return 1;
    }
    return 0;
}

int main() {
    int m;
    cin >> m;
    while(m){
        map <string , string> mp;
        string x,y;
        while(m--){
            cin >> x >> y;
            mp.insert(make_pair(x,y));
        }
        int n;
        cin >> n;
        int cnt=0;
        while(n--){
            cin >>x >>y;
            if(compmore1diff(mp.find(x)->second, y)) {
                cnt++;
                //cout << x << endl;
            }
        }
        cout << cnt << endl;
        cin >> m;
    }
    return 0;
}
