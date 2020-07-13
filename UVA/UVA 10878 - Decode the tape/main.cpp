#include <iostream>
using namespace std;

int main() {
    string x,y;
    getline(cin ,x);
    getline(cin ,x);

    while(x != "___________") {
        int ch = 0;
        if (x[2] == 'o') ch += 64;
        if (x[3] == 'o') ch += 32;
        if (x[4] == 'o') ch += 16;
        if (x[5] == 'o') ch += 8;
        if (x[7] == 'o') ch += 4;
        if (x[8] == 'o') ch += 2;
        if (x[9] == 'o') ch += 1;
        cout << char(ch) ;
        getline(cin ,x);
    }
    return 0;
}
