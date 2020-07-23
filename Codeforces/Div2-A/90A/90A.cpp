//============================================================================
// Name        : 90A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int r,g,b;
	cin >> r >> g >> b;
	if(r%2==0) r=r/2;
	else r= r/2 +1;
	if(g%2==0) g=g/2;
	else g= g/2 +1;
	if(b%2==0) b=b/2;
	else b= b/2 +1;
	int t=max(3*r-3 , max(3*g-2,3*b-1));
	cout<< t+30;
	return 0;
}
