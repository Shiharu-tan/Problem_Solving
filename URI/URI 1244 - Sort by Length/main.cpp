#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int  n; string nul;
    cin >> n;
    getline(cin,nul);
    while(n--){
        string s;
        getline(cin ,s);
        stringstream ss;
        ss << s;
        string word;
        multimap <int,string, greater<int>> mp;
        while(ss >> word){
            mp.insert(make_pair((int)word.size() , word));
            //cout << word << endl;
        }
        int j=0;
        for(auto i : mp){
            cout << i.second;
            j++;
            if(j<mp.size()) cout << " " ;
        }
        cout << endl;
    }
    return 0;
}
