#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool sortbysecrevandfirst(const pair<int , double> &a, const pair<int , double> &b){
    if(a.second > b.second) return true;
    if(a.second == b.second) return a.first < b.first;
    return false;
}
int main() {
    int n,t1,t2,k;
    cin >> n >> t1 >> t2 >> k ;
    int a,b;
    vector< pair<int,double> > v;
    for(int i=0 ; i<n ; i++){
        cin>> a >> b;
        double total1 = a*t1*(100-k)/100.0 + b*t2;
        double total2 = b*t1*(100-k)/100.0 + a*t2;
        v.push_back(make_pair(i+1 , max(total1,total2)));
    }
    sort(v.begin() , v.end() ,sortbysecrevandfirst);
    for(int i=0 ; i<n ; i++){
        cout << v[i].first << " " ;
        printf("%.2f\n" ,v[i].second) ;
    }
    return 0;
}
