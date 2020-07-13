#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    string x;
    while(n--){
        cin >> x;
        if(x.size() == 5){
            cout << 3 << endl;
        }
        else if (x.substr(1) == "ne" || x.substr(0,2) == "on" || (x[0] == 'o' && x[2] == 'e')){
            cout << 1 << endl;
        }
        else cout << 2 << endl;
    }
    return 0;
}
