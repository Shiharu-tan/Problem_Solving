#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[8][8];
    char ch;
    for(int i=0 ; i<8 ; i++){
        for(int j=0 ;j<8 ; j++){
            cin >> ch;
            if(ch=='B') a[i][j] = 1;
            else a[i][j] = 0;
        }
    }
    int cols[8] , rows[8];
    memset(cols , 0 , sizeof(cols));
    memset(rows , 0 , sizeof(rows));
    for(int i=0 ; i<8 ; i++){
        for(int j=0 ;j<8 ; j++){
            rows[i] += a[i][j];
            cols[j] += a[i][j];
        }
    }
    int res=0;
    for(int k=0 ;k<8 ; k++){
        if(rows[k] == 8) res++;
        if(cols[k] == 8) res++;
    }
    if(res ==16){
        cout << 8;
        return 0;
    }
    cout << res;
    return 0;
}
