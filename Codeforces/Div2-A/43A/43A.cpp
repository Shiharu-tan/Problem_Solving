//============================================================================
// Name        : 43A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<pair<int, string> > v;
	int n;
	cin >> n;
	string s;
	while (n--) {
		cin >> s;
		bool f = true;
		if (v.empty())
			v.push_back(make_pair(1, s));
		else {
			for (auto it = v.begin(); it != v.end(); it++) {
				if (s == it->second) {
					it->first++;
					f = false;
				}
			}
			if (f) {
				v.push_back(make_pair(1, s));
			}
		}
	}
	/*for (auto it = v.begin(); it != v.end(); it++) {
		cout << it->second << " " << it->first << endl;

	}*/
	sort(v.begin() , v.end());
	auto it = v.end();
	it--;
	cout << it->second;
	return 0;
}

/*int main() {
 int n;
 cin >> n;
 string arr[n];
 for (int i = 0; i < n; i++) {
 cin >> arr[i];
 }
 int N = sizeof(arr) / sizeof(arr[0]);
 sort(arr, arr + N);

 int temp = 1, max = 1;
 string cur = arr[0] , s=arr[0];
 for (int i = 1; i < n; i++) {
 if (arr[i] == cur) {
 temp++;
 cout<< " Here" << endl;
 }
 else {
 if (temp > max) {
 max = temp;
 s=cur;
 cout<< " sdfsdHere" << endl;
 }
 cur = arr[i];
 temp = 1;
 }
 }
 cout << s;
 return 0;
 }*/
