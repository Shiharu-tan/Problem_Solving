//============================================================================
// Name        : 799A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,t,k,d;
	cin >> n >> t >> k >> d;
	int i=0 , n1=0 , n2=0;
	while(i+=t){
		n1+=k;
		n2+=k;
		if(i>d) n2+=k;
		if(n1>=n){
			//cout << n1 << " " << n2 << endl;
			cout << "NO";
			break;
		}
		else if(n2>=n){
			//cout << n1 << " " << n2 << endl;
			cout << "YES";
			break;
		}
	}

	return 0;
}
/*
int main(){
	int n,t,k,d;
	cin >> n >> t >> k >> d;
	//without oven
	double without_oven = ceil(n*t/k);
	//with oven
	//before
	double n1 = ceil(d*k/t);
	double t1 = n1/k;
	//after
	double t2 = ceil((n-n1)*t/k);
	double with_oven = t1+t2;
	cout << without_oven << " " << with_oven;

	return 0;
}*/
/*
int main() {
	int n,t,k,d;
	cin >> n >> t >> k >> d;

	//without oven
	int without_oven = ceil(n/k) * t;
	//with oven
	int with_oven, baked =0;
	for( with_oven = t; baked<n ; with_oven+=t){
		baked+=k;
		if(with_oven>d) baked+=k;
	}
	with_oven -=t;
	if(with_oven<without_oven) cout << "YES" << endl;
	else cout << "NO" << endl;
	//cout << with_oven ;
	return 0;
}*/
