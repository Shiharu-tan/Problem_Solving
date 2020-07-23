//============================================================================
// Name        : 10611.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++) cin >> a[i];
	int q;
	cin >> q;
	while(q){
		int x;
		cin >> x;
		//lower
		int low = lower_bound(a,a+n,x)-a;
		if(low!=0) cout << a[--low] << " " ;
		else cout << "X " ;
		//upper
		int up = upper_bound(a,a+n,x)-a;
		if(up!=n) cout << a[up] << endl;
		else cout << "X" << endl ;

		q--;
	}
	return 0;
}
