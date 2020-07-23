#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int k;
    string s;
    cin >> k >> s;
    int a[26];
    memset(a,0,sizeof(a));
    for(int i=0 ; i<s.size() ; i++){
        a[s[i]-'a']++;
    }
    for(int i=0 ; i<26 ; i++){
        if(a[i]%k != 0){
            cout << -1 ;
            return 0;
        }
    }
    string sub ="";
    for(int i=0 ; i<26 ; i++){
        if(a[i]!= 0){
            for(int j=0 ; j<a[i]/k ; j++) sub+=char(97+i);
        }
    }
    for(int i=0 ; i<s.size()/sub.size() ; i++){
        cout << sub;
    }
    return 0;
}
