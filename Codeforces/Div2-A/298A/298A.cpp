//============================================================================
// Name        : 298A.cpp
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
	string s;
	cin >> s;
	int st = -1, en = -1;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'R') {
			st = i + 1;
			break;
		} else if (s[i] == 'L') {
			en = i;
			st = i + 1;
			cout << st << " " << en;
			return 0;
		}
	}
	int cnt=0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'L') {
			en = i;
			cout << st << " " << en;
			return 0;
		}
		if(s[i] == 'R') cnt++;
	}
	cout << st << " " << st+cnt ;
	return 0;
}
