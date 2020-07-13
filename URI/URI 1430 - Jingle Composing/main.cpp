#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    map <char , double> m{{'W' , 1}, {'H' , 1/2.0},
                          {'Q' , 1/4.0},{'E' , 1/8.0},
                          {'S' , 1/16.0},{'T' , 1/32.0},
                          {'X' , 1/64.0}};
    string s;
    cin >> s;
    while(s!="*"){
        double cr=0; int res=0;
        for(int i=0 ; i<s.size() ;i++){
            if(s[i] == '/'){
                if(cr==1) res++;
                cr = 0;
                //cout << res << endl;
            }
            else{
                //cout << " here " ;
                auto it = m.find(s[i]);
                cr+= it->second;
            }
        }
        cout << res << endl;
        cin >> s;
    }
    return 0;
}
