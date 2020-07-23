//============================================================================
// Name        : 127A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int power(int base , int pow){
	if(pow==0) return 1;
	return base*power(base,pow-1);
}
int main() {
	int n,k;
	cin >> n >> k;
	double sum=0;
	int x1,y1,x2,y2;
	cin >> x1 >> y1;
	n--;
	while(n--){
		cin >> x2 >> y2;
		sum+= sqrt(power(x1-x2,2) + power(y1-y2 , 2));
		x1=x2 ;
		y1=y2;
	}
	cout << fixed << setprecision(9) <<sum*k/50;
	return 0;
}
