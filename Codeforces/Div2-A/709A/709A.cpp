//============================================================================
// Name        : 709A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int main(){
	long long n , b, d;
	cin >> n >> b >> d;
	long long x , size=0 , cnt=0;
	for(int i =0 ; i<n ; i++){
		cin >> x;
		if(x<=b) size+=x;
		if(size>d) {
			cnt++;
			size=0;
		}
	}
	cout << cnt;

	return 0;
}
/*int main() {
	int n , b, d;
		cin >> n >> b >> d;
		//int a[n];
		long long x ,sum=0;
		for(int i=0 ; i<n ; i++) {
			cin >> x;
			if(x<b) sum += x;
		}
		cout << sum/d;

	return 0;
}
*/
