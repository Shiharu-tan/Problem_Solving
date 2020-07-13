#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int x[n];
        priority_queue<int> pq;
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
            pq.push(x[i]);
        }
        int res=0;
        for (int i = 0; i < n; ++i) {
            if(x[i] == pq.top()) res++;
            pq.pop();
        }
        cout << res << endl;
    }
    return 0;
}
