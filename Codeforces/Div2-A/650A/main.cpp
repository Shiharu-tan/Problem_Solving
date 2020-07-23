#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long per(long long n){
    return (n*(n+1))/2;
}
int main() {
    long long n;
    cin >> n;
    long long x,y, cnt=0;
    map < pair<long long , long long>, int> points;
    map <long long, int> frst;
    map <long long, int> scnd;
    while(n--){
        cin >> x >> y;
        points[make_pair(x,y)]++;
        frst[x]++;
        scnd[y]++;
    }
    for(auto i : frst){
        cnt+=per(i.second-1);
    }
    for(auto i : scnd){
        cnt+=per(i.second-1);
    }
    for(auto i : points){
        cnt-=per(i.second-1);
    }
    cout << cnt ;
    /*for(auto i: points){
        cout << i.first.first << " " << i.first.second << " " << i.second << endl ;
    }*/
    return 0;
}
