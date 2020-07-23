//============================================================================
// Name        : 10110.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	do{
	double r = sqrt(n);
	long long rr = sqrt(n);
	if(r==rr) cout << "yes" << endl;
	else cout << "no" << endl;
	cin >> n;
	}while(n);
	return 0;
}
