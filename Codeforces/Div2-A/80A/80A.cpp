//============================================================================
// Name        : 80A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool prime(int n){
	for(int i=2; i*i<=n ;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main() {
	int n,m;
	cin >> n >> m;
	if(!prime(n) || !prime(m)){
		cout << "NO";
		return 0;
	}
	for(int i=n+1 ; i<m ; i++){
		if(prime(i)){
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
