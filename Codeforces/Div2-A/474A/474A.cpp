//============================================================================
// Name        : 474A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char keyboard[3][10] ={{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
						{'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'},
						{'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'}};
	char c;
	string s;
	cin >> c >> s;
	string o="";
	int i=0;
	while(i<s.size()){
		bool f=false;
		for(int j=0 ; j<3 ;j++){
			for(int k=0 ; k<10 ; k++){
				if(s[i] == keyboard[j][k]){
					if(c=='R') {
						o+=keyboard[j][k-1];
						i++;
						f=true;
						break;
					}
					else {
						o+=keyboard[j][k+1];
						i++;
						f=true;
						break;
					}
				}
			}
			if(f) break;
		}
	}
	cout << o;
	return 0;
}
