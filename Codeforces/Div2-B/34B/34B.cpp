//============================================================================
// Name        : 34B.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	cin >> n >> m ;
	int arr[n];
	int gain=0;
	for(int i=0 ; i<n ; i++){
		cin >> arr[i] ;
	}
	sort(arr , arr+n);

	int i=0 , num = 0;
	while(i<m && arr[i] <= 0) {
		gain += abs(arr[i]);
		i++;
	}

	cout << gain ;
	return 0;
}
