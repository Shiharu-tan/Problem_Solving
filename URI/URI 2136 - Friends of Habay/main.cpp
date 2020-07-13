#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<pair<string,int>> yes;
    set <string> no;
    string s , d;
    cin >> s;
    int mx=0;
    string win;
    while(s!="FIM"){
        cin >> d;
        if(d == "NO") no.insert(s);
        else {
            yes.push_back(make_pair(s , (int)s.size()));
            if(s.size() >mx) mx = s.size();
        }
        cin >> s;
    }
    for(int i=0 ; i<yes.size() ; i++){
        if(yes[i].second == mx){
            win = yes[i].first;
            break;
        }
    }
    set <string> yy;
    for(auto i : yes){
        yy.insert(i.first);
    }
    for(auto i : yy) cout << i << endl;
    for(auto i : no) cout << i << endl;
    cout << endl << "Amigo do Habay:" << endl << win << endl;
    return 0;
}
