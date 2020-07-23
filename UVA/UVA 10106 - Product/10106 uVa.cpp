//============================================================================
// Name        : 10106.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string multi_big(string x, string y) {
	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());
	int size = x.size() + y.size() + 1;
	int a[size];
	memset(a, 0, sizeof(a));
	for (int i = 0; i < x.size(); i++) {
		for (int j = 0; j < y.size(); j++) {
			a[i + j] += (x[i] - '0') * (y[j] - '0');
		}
	}
	for (int i = 0; i < size; i++) {
		if (a[i]) {
			a[i + 1] += a[i] / 10;
			a[i] %= 10;
		}
	}
	int j;
	for (int i = size - 1; i >= 0; i--) {
		if (a[i]) {
			j = i;
			break;
		}
	}
	stringstream ss;
	for (int i = j; i >= 0; i--) {
		ss << a[i];
	}
	string s;
	ss >> s;
	return s;
}
int main() {
	string x, y;
	while(cin >> x >> y){
	cout << multi_big(x,y) << endl;
	}
	return 0;
}
