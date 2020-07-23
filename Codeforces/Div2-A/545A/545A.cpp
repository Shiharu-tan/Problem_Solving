//============================================================================
// Name        : 545A.cpp
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
	int a[n][n];
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			cin >> a[i][j];
		}
	}
	int sum=0;
	string s="";
	vector <int> v;
	for(int i=0 ; i<n ; i++){
		int f=1;
		for(int j=0 ; j<n ; j++){
			if(a[i][j] != 0 && a[i][j] != 2 && a[i][j] !=-1) f=0;
		}
		if(f){
			sum++;
			v.push_back(i+1);
		}
	}
	cout << sum << endl;
	for(auto it = v.begin() ; it != v.end() ; it++){
		cout << *it << " ";
	}
	return 0;
}
