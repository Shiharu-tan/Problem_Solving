//============================================================================
// Name        : 584A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {
	int n,t;
	cin >> n >> t;
	if(n==1 && t==10){
		cout << -1;
		return 0;
	}
	else if(t==10){
		string s(n-1 , '0');
		cout << 1 << s;
		return 0;
	}
	string s(n,'0'+t);
	cout << s;
	return 0;
}
