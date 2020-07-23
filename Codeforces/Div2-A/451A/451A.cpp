//============================================================================
// Name        : 451A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	int x = min(n,m);
	if(x%2 == 0) cout << "Malvika";
	else cout << "Akshat";
	return 0;
}
