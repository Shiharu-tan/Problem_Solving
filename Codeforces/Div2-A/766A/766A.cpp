//============================================================================
// Name        : 766A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string s1 , s2;
	cin >> s1 >> s2;
	if(s1.size() != s2.size()){
		if(s1.size() > s2.size()) cout << s1.size();
		else cout << s2.size();
	}
	else if (s1==s2){
		cout << -1;
	}
	else{
		cout << s1.size();
	}
	return 0;
}
