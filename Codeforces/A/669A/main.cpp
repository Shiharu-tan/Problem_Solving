#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long res =(n/3)*2;
    if(n%3 !=0) res++;
    cout << res;
    return 0;
}
