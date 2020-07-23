//============================================================================
// Name        : 469A.cpp
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
	set<int> s;
	int x;
	int p;
	cin >> p;
	while (p--) {
		cin >> x;
		s.insert(x);
	}
	int q;
	cin >> q;
	while (q--) {
		cin >> x;
		s.insert(x);
	}
	if (s.size() == n)
		cout << "I become the guy.";
	else
		cout << "Oh, my keyboard!";
	return 0;
}
