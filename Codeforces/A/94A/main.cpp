#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    string nums[10];
    cin >> s;
    for(int i=0 ; i<10 ; i++){
        cin >> nums[i];
    }
    string res="";
    for(int i=0 ; i<8 ; i++){
        string x = s.substr(10*i,10);
        //cout << x << endl;
        for(int j=0 ; j<10 ; j++){
            //cout << j << endl;
            if(x==nums[j]){
                res+=to_string(j);
                break;
            }

        }
    }
    cout << res;
    return 0;
}
