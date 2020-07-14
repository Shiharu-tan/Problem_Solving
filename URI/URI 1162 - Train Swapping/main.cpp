#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int cnt=0;
        while(!is_sorted(a,a+n)){
            for(int i=0 ; i<n-1 ; i++){
                if(a[i]>a[i+1]){
                    int temp = a[i];
                    a[i] = a[i+1];
                    a[i+1] = temp;
                    cnt++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n" , cnt);
    }
    return 0;
}
