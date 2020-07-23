//============================================================================
// Name        : 22A.cpp
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

	while(n){
		int x;
		cin >> x;
		s.insert(x);
		n--;
	}
	if(s.size() < 2){
		cout << "NO";
		return 0;
	}
	auto it = s.begin();
	it++;
	cout << *it;
	return 0;
}
