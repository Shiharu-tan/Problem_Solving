#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	string d;
	cin >> d;
	long long a[n];
	bool p = false;
	for(long long i=0 ; i<n ; i++){
		cin >> a[i];
		if(d[i] == 'L' && i!=0 && d[i-1] == 'R') p = true;
	}
	if(!p){
		cout << -1;
		return 0;
	}
	long long mn = 1000000000;
	for(long long i=1 ; i<n ; i++){
		if(d[i] == 'L' && d[i-1] == 'R' && (a[i]-a[i-1])/2 < mn) mn =(a[i]-a[i-1])/2;
	}
	cout << mn;
	return 0;
}
