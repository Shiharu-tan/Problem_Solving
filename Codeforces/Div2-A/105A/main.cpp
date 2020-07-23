#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    double k;
    cin >> n >> m >> k;
    map <string,int> old;
    string s; int x;
    while(n--){
        cin >> s >> x;
        old.insert(make_pair(s,x));
    }
    map <string,double> after;
    while(m--){
        cin >> s ;
        after.insert(make_pair(s,0));
    }
    for(auto i : old){
            if(i.second * k >= 100){
                if(fabs(i.second *k - round(i.second *k)) < 10e-10) {
                    after[i.first] = round(i.second * k);
                    //cout << "here" << endl;
                }
                else
                    after[i.first] = floor(i.second *k);
            //cout << fabs(i.second *k - (int)(i.second *k)) << endl ;
            //cout << i.second *k << " " << round(i.second *k) << endl;
            }
    }
    cout << after.size() << endl;
    for(auto i : after) {
        cout << i.first << " " << i.second << endl;
    }
        return 0;
}
