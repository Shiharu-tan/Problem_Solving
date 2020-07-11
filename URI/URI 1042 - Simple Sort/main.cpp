#include <iostream>

using namespace std;

int main() {

    int N[3] , sortedN[3];
    int x ;
    for (int i=0 ; i<3 ; i++){
        cin >> x;
        N[i] = x;
    }
    if(N[0] >= N[1] ){
        if (N[1] >= N[2]){
            sortedN[0] = N[0];
            sortedN[1] = N[1];
            sortedN[2] = N[2];
        }
        else if (N[0] >= N[2]){
            sortedN[0] = N[0];
            sortedN[1] = N[2];
            sortedN[2] = N[1];
        }
        else {
            sortedN[0] = N[2];
            sortedN[1] = N[0];
            sortedN[2] = N[1];
        }
    }
    else if (N[0] >= N[2]){
        sortedN[0] = N[1];
        sortedN[1] = N[0];
        sortedN[2] = N[2];
    }
    else if (N[1] >= N[2]){
        sortedN[0] = N[1];
        sortedN[1] = N[2];
        sortedN[2] = N[0];
    }
    else {
        sortedN[0] = N[2];
        sortedN[1] = N[1];
        sortedN[2] = N[0];
    }
    for (int i=2 ; i>=0 ; i--){
        cout << sortedN[i] << endl;
    }
    cout << endl;
    for (int i=0 ; i<3 ; i++){
        cout << N[i] << endl;
    }
    return 0;
}