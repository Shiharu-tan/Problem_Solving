//============================================================================
// Name        : 7474B.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

/*int findPile(int a[] , int size , int x){
	int is=0 , ie=size-1 ;
	if(x < a[0]) return 1;
	for(;;){
		int mid=(is+ie)/2 ;
		if(x<a[mid]){
			ie = mid ;
		}
		else if(x>a[mid]){
			is = mid ;
		}
		else return mid+1;
		if(abs(ie-is) == 1) return ie+1;
	}
}
*/
int main() {
	int n;
	cin >> n ;
	int worms[n];
	cin >> worms[0];
	for(int i=1 ; i<n ; i++){
		int x;
		cin >> x;
		worms[i] = worms[i-1] +x;
	}
	int q;
	cin >> q;
	while(q){
		int x;
		cin >> x;
		//int up = upper_bound(worms , )
		q--;
	}
	return 0;
}
