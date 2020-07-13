#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    map<string , int> mp;
    while(n--){
        string x; int y;
        cin >> x >> y;
        mp.insert(make_pair(x,y));
    }
    //cout << "here" << endl;
    while(m--) {
        string s;
        cin >> s;
        int res=0;
        while (s != ".") {
            if(mp.find(s) != mp.end()){
                res+=mp.find(s)->second;
            }
            cin >>s;
        }
        cout << res << endl;
    }
    return 0;
}
