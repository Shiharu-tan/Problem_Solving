//============================================================================
// Name        : 404A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	char a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	char d = a[0][0], r = a[0][1];
	if(d==r){
		cout << "NO";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j || i + j == n - 1) {
				if (a[i][j] != d) {
					cout << "NO";
					return 0;
				}
			} else {
				if (a[i][j] != r) {
					cout << "NO";
					return 0;
				}
			}
		}
	}
	cout << "YES";
	return 0;
}
