//============================================================================
// Name        : 10344.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[5];
bool f(int i , int sum){
	if(i==5){
		if(sum == 23) return true;
		else return false;
	}
	if(f(i+1 , sum+arr[i])) return true;
	if(f(i+1 , sum-arr[i])) return true;
	if(f(i+1 , sum*arr[i])) return true;

	return false;
}
int main() {
	while(true){
	int ff = 1;
	for(int i=0 ; i<5 ; i++){
		cin >> arr[i];
		if(arr[i] !=0){
			ff=0;
		}
	}
	if(ff) return 0;
	sort(arr, arr+5);
	int flag=1;
	do{
		if(f(1,arr[0])){
			cout << "Possible" << endl;
			flag=0;
			break;
		}
	}while(next_permutation(arr , arr+5));
	if(flag) cout << "Impossible" << endl;
	}
	return 0;
}
