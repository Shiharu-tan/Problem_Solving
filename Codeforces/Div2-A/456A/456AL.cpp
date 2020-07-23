//============================================================================
// Name        : 456A.cpp
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
	vector<pair<int, int> > v;
	int a, b;
	while (n--) {
		cin >> a >> b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin() , v.end());
	int m = v[0].second;
	for(int i=1 ; i<v.size() ;i++){
		if(v[i].second < m){
			cout << "Happy Alex";
			return 0;
		}
		m=v[i].second;
	}
	cout << "Poor Alex";
	return 0;
}
