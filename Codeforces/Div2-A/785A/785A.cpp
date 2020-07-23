//============================================================================
// Name        : 785A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long sum=0;
	string x;
	while(n--){
		cin >> x;
		if(x=="Tetrahedron") sum+=4;
		else if(x=="Cube") sum+=6;
		else if(x=="Octahedron") sum+=8;
		else if(x=="Dodecahedron") sum+=12;
		else if(x=="Icosahedron") sum+=20;
	}
	cout << sum;
	return 0;
}
