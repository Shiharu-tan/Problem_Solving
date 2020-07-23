//============================================================================
// Name        : 567A.cpp
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
	long long a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	//int mn=0 , mx=0;
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			cout << a[i + 1] - a[i] << " " << a[n - 1] - a[i] << endl;
		} else if (i == n - 1) {
			cout << a[i] - a[i - 1] << " " << a[i] - a[0] << endl;
		} else {
			cout << min(abs(a[i + 1] - a[i]), abs(a[i] - a[i - 1])) << " "
					<< max(abs(a[n - 1] - a[i]), abs(a[i] - a[0])) << endl;
		}
	}

	return 0;
}
