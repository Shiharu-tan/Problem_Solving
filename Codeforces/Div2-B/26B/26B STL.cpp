//============================================================================
// Name        : 26B.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>
using namespace std;

int main() {
	string s;
	cin >> s;
	stack<char> st;
	char ch;
	for (int i = 0; i < s.size(); i++) {
		ch = s[i];
		if (!st.empty()) {
			if (st.top() == ch) {
				st.push(ch);
			}
			else if (st.top() == '(' && ch == ')') {
				st.pop();
			}
			else {
				st.push(ch);
			}
		}
		else {
			st.push(ch);
		}
	}
	cout << s.size()-st.size();

	return 0;
}
