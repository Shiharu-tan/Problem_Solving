//============================================================================
// Name        : 707A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n , m;
	cin >> n >> m;
	char x;
	bool f=true;
	for(int i=0 ; i<n ;i++){
		for(int j=0 ; j<m ; j++){
			cin >>x;
			if(x=='C' || x=='M' ||x=='Y') f=false;
		}
	}
	if(f) cout << "#Black&White";
	else cout << "#Color";
	return 0;
}
