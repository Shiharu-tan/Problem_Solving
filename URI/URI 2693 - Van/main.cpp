#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool sortvecofpairpair(const pair<string , pair<char,int>> &a,const pair<string , pair<char,int>> &b){
    if(a.second.second == b.second.second){
        if(a.second.first == b.second.first){
            return (a.first < b.first);
        }
        else return (a.second.first < b.second.first);
    }
    return (a.second.second < b.second.second);
}
int main() {
    int n;
    while(cin >> n) {
        vector<pair<string, pair<char, int>>> v;
        string s;
        char ch;
        int x;
        while (n--) {
            cin >> s >> ch >> x;
            v.push_back(make_pair(s, make_pair(ch, x)));
        }
        sort(v.begin(), v.end(), sortvecofpairpair);
        for (auto i :v) cout << i.first << endl;
    }
    return 0;
}
