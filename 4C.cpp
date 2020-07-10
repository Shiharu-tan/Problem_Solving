//============================================================================
// Name        : 4C.cpp
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
	string s;
	map <string,int> m;
	cin >> s;
	m.insert(pair<string,int>(s,1));
	cout << "OK" << endl;
	n--;
	while(n){
		cin >> s;
		auto it =m.find(s);
		if( it == m.end()){
			m.insert(pair<string,int>(s,1));
			cout << "OK" << endl;
		}
		else{
			cout << it->first << it->second << '\n';
			it->second ++;
//			cout << it->second ;
		}
		n--;
	}
	return 0;
}
