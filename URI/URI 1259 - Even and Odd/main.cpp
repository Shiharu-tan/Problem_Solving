#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x;
    vector<int> even;
    vector<int> odd;
    while (n--){
        cin >> x;
        if(x%2==0) even.push_back(x);
        else odd.push_back(x);
    }
    sort(even.begin() , even.end());
    sort(odd.begin() , odd.end() , greater<int>());
    for(int i : even) cout << i << endl;
    for(int i : odd) cout << i << endl;
    return 0;
}
