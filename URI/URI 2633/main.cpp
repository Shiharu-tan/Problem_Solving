#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<string,int> &a, const pair<string,int> &b){
    return (a.second < b.second);
}
int main() {
    int n;
    while(cin >> n) {
        vector<pair<string, int>> v;
        string s;
        int x;
        while (n--) {
            cin >> s >> x;
            v.push_back(make_pair(s, x));
        }
        sort(v.begin(), v.end(), sortbysec);
        for (auto i : v){
            cout << i.first;
            if(v[v.size()-1].first != i.first)  cout << " ";
        }
        cout << endl;
    }
    return 0;
}
