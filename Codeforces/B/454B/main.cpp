#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    if(is_sorted(a , a+n)){
        cout << 0;
    }
    else{
        int res=0;
        for(int i=0 ; i<n-1 ; i++){
            if(a[i+1] < a[i]){
                for(int j=i+1 ; j<n-1 ; j++){
                    res++;
                    if(a[j] > a[j+1]){
                        cout << -1;
                        return 0;
                    }
                }
                cout << res;
                return 0;
            }
        }

        /*
        int aa[n];
        aa[0] = a[n-1];
        for(int i=0 ; i<n-1 ; i++){
            aa[i+1] = a[i];
        }
        if(is_sorted(aa , aa+n)){
            cout << 1;
        }
        else{
            int aaa[n];
            for(int i=0 ; i<n-1 ; i++){
                aaa[i] = a[i+1];
            }
            aaa[n-1] = a[0];
            if(is_sorted(aaa , aaa+n)){
                cout << n-1;
            }
            else cout << -1;
        }*/
    }
    return 0;
}
