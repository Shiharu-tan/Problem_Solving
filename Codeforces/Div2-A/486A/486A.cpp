//============================================================================
// Name        : 486A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	long long n;
	cin >> n;
	if(n%2==0) cout << n/2;
	else{
		cout << (n+1)/2 - (n+1);
	}
	return 0;
}
