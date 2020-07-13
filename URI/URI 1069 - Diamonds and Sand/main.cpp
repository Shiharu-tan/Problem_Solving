#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        stack <char> st;
        int cnt=0;
        for(int i=0 ; i<s.size() ;i++){
            if(s[i] == '<') st.push(s[i]);
            else if(s[i] == '>'){
                if(!st.empty()){
                    if(st.top() == '<'){
                        cnt++;
                        st.pop();
                    }
                    else st.push('>');
                }
                else st.push('>');
            }
        }
        cout << cnt << endl;

    }
    return 0;
}
