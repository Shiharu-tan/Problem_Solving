//============================================================================
// Name        : 365A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
	set <char> a;
	string s;
	int cnt=0;
	for(int i=0 ; i<n ; i++){
		bool f=false;
		cin >> s;
		for(int j=0 ; j<s.size() ; j++){
			if(s[j]-'0' <= k) {
				a.insert(s[j]);
			}
		}
		if(a.size() == k+1){
			f=true;
		}
		a.clear();
		if(f) cnt++;
	}
	 cout << cnt;
	return 0;
}
