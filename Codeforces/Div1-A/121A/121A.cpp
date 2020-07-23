//============================================================================
// Name        : 121A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<long long> lucky;
void generateLucky(long long n){
	if(n > 4444444444) return;

	if(n!=0)lucky.push_back(n);
	generateLucky(n*10 + 4);
	generateLucky(n*10 + 7);
}
int main() {
	generateLucky(0);
	sort(lucky.begin() , lucky.end());
	/*for(int i=0 ; i< lucky.size() ; i++){
		cout << lucky[i] << endl;
	}*/
	//cout << "done";
	int r,l;
	cin >> r >> l;
	int upper_start,upper_end;
	if(binary_search(lucky.begin() , lucky.end() ,r))
		upper_start = lower_bound(lucky.begin() , lucky.end() ,r) - lucky.begin();
	else
		upper_start = upper_bound(lucky.begin() , lucky.end() ,r) - lucky.begin();
	if(binary_search(lucky.begin() , lucky.end() ,l))
		upper_end = lower_bound(lucky.begin() , lucky.end() ,l) - lucky.begin() ;
	else
		upper_end = upper_bound(lucky.begin() , lucky.end() ,l) - lucky.begin() ;
	//cout << upper_start << " " << upper_end << endl;

	if(r==l){
		cout << lucky[upper_start];
		return 0;
	}
	if(upper_start==upper_end){
		cout << (l-r+1) * lucky[upper_start] ;
		return 0;
	}
	if(upper_end-upper_start == 1){
		long long s=0;
		s+= (lucky[upper_start]-r+1)*lucky[upper_start];
		s+= (l-r+1-(lucky[upper_start]-r+1))*lucky[upper_end];
		cout << s;
		return 0;
	}
	long long sum=0;
	for(int i= upper_start ; i < upper_end-1 ; i++){
		sum += (lucky[i+1] - lucky[i]) *  lucky[i+1];
	}
	sum+= (lucky[upper_start] - r+1) * lucky[upper_start];
	sum+= (l-lucky[upper_end-1]) * lucky[upper_end];
	cout << sum;
	return 0;
}
