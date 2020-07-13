#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int m;
    string nul;
    cin >> m;
    getline(cin, nul);
    map <string , string > mp;
    while (m--){
        string x,y;
        getline(cin ,x);
        getline(cin ,y);
        mp.insert(make_pair(x,y));
    }
    int n;
    cin >> n;
    getline(cin, nul);
    string x,y;
    while(n--) {
        getline(cin, x);
        getline(cin, y);
        cout << x <<endl;
        cout << mp.find(y)->second << endl << endl;
    }
    return 0;
}
