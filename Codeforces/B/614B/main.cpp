#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long a[n];
    //memset(a, 0 , sizeof(a));
    int flag=0;
    long long notBeautiful=0 ;
    for(long long i=0 ; i<n ; i++) {
        cin >> a[i];
        if(a[i] != 1 && a[i]%10 !=0) notBeautiful = a[i];
        if(a[i] == 0)flag =1;
    }
    if(flag) {
        cout << 0;
        return 0;
    }
    cout << notBeautiful ;
    for(long long i=0 ; i<n ; i++){
        if(a[i] == 0){
            cout << 0;
            return 0;
        }
        if(a[i] != 1 && a[i] != notBeautiful) {
            string s = to_string(a[i]);
            cout << s.substr(1) ;
        }
    }
    return 0;
}
