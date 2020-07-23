//============================================================================
// Name        : 441A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,v;
	cin >> n >> v;
	int k,s;
	bool notsign= true;
	int p=0;
	vector <int> vec;
	int m=1;
	while(m<=n){
		cin >> k;
		for(int i=0 ; i<k; i++){
			cin >>s;
			if(notsign && s<v){
				p++;
				notsign = false;
				vec.push_back(m);
			}
		}
		notsign= true;
		m++;
	}
	cout << p << endl;
	for(int i=0 ; i<vec.size() ;i++){
		cout << vec[i] << " ";
	}
	return 0;
}
