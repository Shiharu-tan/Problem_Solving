#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    stack <char> st;
    int cnt=0;
    for(int i=0 ; i<s.size() ;i++){
        if(s[i] == '(') st.push('(');
        else{
            if(!st.empty()){
                if(st.top() == '('){
                    cnt++;
                    st.pop();
                }
            }
            else st.push(')');
        }
    }
    cout << cnt*2 ;
    return 0;
}
