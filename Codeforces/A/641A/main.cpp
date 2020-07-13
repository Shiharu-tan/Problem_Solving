#include <iostream>
using namespace std;

int main() {
    long long n;
    string s;
    cin >> n >> s;
    long long signs[n];
    for(long long i=0 ; i<n ; i++) cin >> signs[i];
    long long i=0,x=0;
    while (x<2*n){
        if(i<0 || i>=n){
            cout << "FINITE";
            return 0;
        }
        if(s[i] == '>') i+=signs[i];
        else i-=signs[i];
        x++;
    }
    cout << "INFINITE";
    return 0;
}
