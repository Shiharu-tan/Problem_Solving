//============================================================================
// Name        : 133A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	for(int i=0 ; i<s.length() ; i++){
		if(s[i] == 'H'|| s[i] == 'Q' || s[i] == '9' || s[i] == '+' ){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
