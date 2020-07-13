#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    stack <string> st;
    int n;
    cin >> n;
    int cnt=0;
    while(n--){
        if(st.empty()) st.push("FACE");
        string s=""; char ch;
        for(int i=0 ; i<4 ; i++){
            cin >> ch;
            s+=ch;
        }
        string t = st.top();
        reverse(t.begin() , t.end());
        if(s==t){
            cnt++;
            st.pop();
        }
        else st.push(s);
    }
    cout << cnt;
    return 0;
}
