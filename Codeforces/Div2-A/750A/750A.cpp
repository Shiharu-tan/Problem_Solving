//============================================================================
// Name        : 750A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n , k ;
	cin >> n >> k;
	int mins = 4*60;
	int contest = mins - k;
	int solved =0;
	for (int i=1 ; i<=n ; i++){
		if(contest >= i*5){
			solved++;
			contest-=i*5;
		}
		else break;
	}
	cout << solved;
	return 0;
}
