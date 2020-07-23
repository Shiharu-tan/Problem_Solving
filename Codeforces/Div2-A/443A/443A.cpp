//============================================================================
// Name        : 443A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	getline(cin ,  s);
	string m ="";
	int z=s.size();
	for(int i=0 ; i < z ;i++){
		if(isalpha(s[i])) m+=s[i];
	}
	set<char> st;
	for(int i=0 ; i < m.size() ;i++){
		st.insert(m[i]);
	}
	cout << st.size();
	return 0;
}
