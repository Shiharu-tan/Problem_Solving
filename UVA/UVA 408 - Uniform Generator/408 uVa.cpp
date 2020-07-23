//============================================================================
// Name        : 408.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	long long step , mod;
	while(cin >> step >> mod){
	set <long long> s;
	for(long long i=0 , j=0 ; i<mod ; i++ , j+=step){
		s.insert(j%mod);
	}
	string st;
	if((long long)s.size() == mod) st = "Good Choice";
	else st = "Bad Choice";
	cout << fixed << setw(10) << step << fixed << setw(10) << mod << string(4,' ') << st << endl << endl;
	}
	//for(auto it=s.begin() ; it!=s.end() ; it++) cout << *it << " ";
	return 0;
}
