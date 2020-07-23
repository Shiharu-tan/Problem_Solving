//============================================================================
// Name        : 770A.cpp
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
	char start = 'a';
	string word="";
	for(int i=0 , j=0 ; i<n ; i++, j++){
		if(j<k){
			word+= start;
			start++;
		}
		else{
			start ='a';
			j=0;
			word+= start;
			start++;
		}
	}
	cout << word;
	return 0;
}
