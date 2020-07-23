//============================================================================
// Name        : 218A.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
	n=2*n+1;
	int a[n];
	for (int i=0; i<n ; i++)cin >> a[i];
	for (int i=1; i<n-1 ; i++){
		if(i%2!=0){
			if(a[i-1]+1 < a[i] && a[i+1]+1 < a[i] && a[i] >1 && k!=0){
				k--;
				a[i]--;
			}
		}
	}
	for (int i=0; i<n ; i++)cout << a[i] << " ";

	return 0;
}

