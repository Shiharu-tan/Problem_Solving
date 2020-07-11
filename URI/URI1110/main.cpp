#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ,counter=0;
    cin >> n ;
    while(n){

        queue <int> cards;
        vector <int> discarded ;
        for (int i=1 ; i <= n ; i++){
            cards.push(i);
        }
        while (cards.size()>1){
            discarded.push_back(cards.front());
            cards.pop();
            cards.push(cards.front());
            cards.pop();

        }
        cout << "Discarded cards:" ;
        if(!discarded.empty()){
            for (int i=0 ; i <discarded.size()-1 ; i++){
                cout << " " << discarded[i] << ","  ;
            }
            cout << " " << discarded.back() ;
        }
        cout << endl ;
        cout << "Remaining card: " << cards.front() << endl;