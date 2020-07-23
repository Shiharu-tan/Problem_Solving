#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    if (s.size() ==1){
        cout << 0;
        return 0;
    }
    int sum1=0 ,res=0;
    for(int i=0 ; i< s.size() ; i++){
        sum1+= s[i]-'0';
    }
    //cout << sum1 << endl;
    res++;
    while(sum1 >= 10){
        string ss = to_string(sum1);
        sum1=0;
        for(int i=0 ; i< ss.size() ; i++){
            sum1+= ss[i]-'0';
        }
        //cout << sum1 << endl;
        res++;
    }
    cout << res;
    return 0;
}
