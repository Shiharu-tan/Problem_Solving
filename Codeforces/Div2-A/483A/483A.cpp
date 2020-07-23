//============================================================================
// Name        : 483A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	long long l,r;
	cin >> l >> r;
	if(r-l <2){
		cout << -1;
		return 0;
	}
	for(long long i=l+2 ; i<=r ; i++){
		if(__gcd(i-2,i-1) == 1 && __gcd(i-1 , i) == 1 && __gcd(i-2,i)!=1){
			cout << i-2 << " " << i-1 << " " << i;
			return 0;
		}
	}
	cout << -1;
	return 0;
}
