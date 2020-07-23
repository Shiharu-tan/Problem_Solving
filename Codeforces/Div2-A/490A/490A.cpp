//============================================================================
// Name        : 490A.cpp
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
	int a[n];
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 1)
			v1.push_back(i + 1);
		else if (a[i] == 2)
			v2.push_back(i + 1);
		else
			v3.push_back(i + 1);
	}
	int z = min(v1.size(), min(v2.size(), v3.size()));
	cout << z << endl;
	for (int i = 0; i < z; i++) {
		cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
	}
	return 0;
}
