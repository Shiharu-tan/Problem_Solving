#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string get_mask(long long x){
    string s = to_string(x);
    string res ="";
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] =='4' || s[i] == '7') res+=s[i];
    }
    return res;
}
int main() {
    long long a;
    string b;
    cin >> a >> b;
    a++;
    while(get_mask(a) != b) a++;
    cout << a;
    return 0;
}
