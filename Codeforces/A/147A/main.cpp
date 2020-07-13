#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string removewhitespaces(string s){
    stringstream ss ;
    ss << s;
    string word, ret="";
    while(ss  >> word){
        ret += word + " " ;
    }
    return ret ;
}
int main() {
    string line;
    getline(cin , line);
    string s = removewhitespaces(line);
    //s = s.substr(0,s.size()-1);
    for(int i=0 ; i<s.size() ; i++){
        if(i == s.size()-1 && s[i] == ' '){
            s.erase(i,1);
            continue;
        }
        if(s[i] == '.' || s[i] == ',' ||s[i] == '!' ||s[i] == '?'){
            if(s[i+1] != ' ') s.insert(i+1," ");
            if(s[i-1] == ' ') s.erase(i-1,1);
        }

    }
    cout << s;
    return 0;
}
