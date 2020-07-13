#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(int s){
    string h ="";
    if(s<10){
        h+="0";
    }
    h += to_string(s);
    reverse(h.begin() , h.end());
    //cout << h << endl;
    if(stoi(h)<60) {
        if (s < 10) cout << 0;
        cout << s << ":" << h;
    }
    else print(++s);
}
int main() {
    string h,m;
    getline(cin , h, ':');
    getline(cin , m);
    int hh = stoi(h);
    int mm = stoi(m);
    string m_reverse = m;
    reverse(m_reverse.begin() , m_reverse.end());
    if(h==m_reverse){
        hh++;
        print(hh);
    }
    else{
        string h_reverse = h;
        reverse(h_reverse.begin() , h_reverse.end());
        int h_reverse_int = stoi(h_reverse);
        if(mm<h_reverse_int){
            print(stoi(h));
        }
        else{
            hh++;
            if(hh==24){
              cout << "00:00";
              return 0;
            }
            print(hh);

        }

    }
    return 0;
}
