//============================================================================
// Name        : 807A.cpp
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
	int x,y;
	bool flag=false , sorted = true;
	for(int i=0 ; i<n ; i++){
		cin >> x >> y;
		if(x!=y) flag=true;
		a[i] =x;
		if(i!=0 && x>a[i-1]) {
			sorted=false;
		}
	}
	if(flag) cout << "rated";
	else{
		if(sorted) cout << "maybe";
		else cout << "unrated";
	}
	return 0;
}
