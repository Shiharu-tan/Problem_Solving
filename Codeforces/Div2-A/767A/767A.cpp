//============================================================================
// Name        : 767A.cpp
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
	priority_queue<int> q;
	int x, i = n;
	while (n--) {
		cin >> x;
		q.push(x);
		while (true) {
			if (!(q.empty()) && q.top() == i) {
				cout << i << " ";
				i--;
				q.pop();
			} else {
				//cout << i << " here" <<endl;
				cout << endl;
				break;
			}
		}
		//i--;
	}
	return 0;
}
