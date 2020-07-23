//============================================================================
// Name        : 91A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//is not solved yet

#include <iostream>

using namespace std;

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	int a[26];
	memset(a, 0, sizeof(a));
	for (int i = 0; i < s1.size(); i++) {
		a[s1[i] - 'a']++;
	}
	for (int i = 0; i < s2.size(); i++) {
		if (a[s2[i] - 'a'] == 0) {
			cout << -1;
			return 0;
		}
	}

	return 0;
}
