#include <iostream>

using namespace std;
int main() {
    long long n;
    cin >> n;
    long long x = n/2;
    if(n%2!=0){
        x++;
        x*=-1;
    }
    cout << x;
    return 0;
}
