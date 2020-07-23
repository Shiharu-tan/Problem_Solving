//============================================================================
// Name        : 686A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	long long x;
	cin >> n >> x;
	char ch;
	long long d , c=0;
	for(int i=0  ; i<n ; i++){
		cin >> ch >> d;
		if(ch == '+') x+=d;
		else{
			if(x>=d) x-=d;
			else c++;
		}
	}
	cout << x << " " << c;
	return 0;
}
