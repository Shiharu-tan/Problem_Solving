//============================================================================
// Name        : 270A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	double x;
	while(t--){
		cin >>x;
		double n1=(-180*2)/(x-180);
		int n2=(-180*2)/(x-180);
		if(n1==n2 && n1>2) {
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
