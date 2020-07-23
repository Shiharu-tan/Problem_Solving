//============================================================================
// Name        : 520A.cpp
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
	char x;
	set <char> s;
	while(n--){
		cin >> x;
		s.insert(tolower(x));
	}
	if(s.size() == 26) cout << "YES";
	else  cout << "NO";
	return 0;
}
