#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string n1,n2;
    getline(cin , n1);
    getline(cin , n2);

    int flag =1;
    for(int i=0; i< n1.size() ; i++){
        if(n1[i] != '0'){
            n1 = n1.substr(i);
            flag = 0;
            break;
        }
    }
    if(flag) n1 = "0";
    flag =1;
    for(int i=0; i< n2.size() ; i++){
        if(n2[i] != '0'){
            n2 = n2.substr(i);
            flag = 0;
            break;
        }
    }
    if(flag) n2 = "0";
    //cout << n1 << endl << n2 ;
    if(n1.size() > n2.size()) cout << '>';
    else if (n1.size() < n2.size())cout << '<';
    else {
        for (int i = 0; i < n1.size(); i++) {
            if (n1[i] > n2[i]) {
                cout << '>';
                return 0;
            }
            else if (n1[i] < n2[i]) {
                cout << '<';
                return 0;
            }
        }
        cout << '=';
    }
    return 0;
}
