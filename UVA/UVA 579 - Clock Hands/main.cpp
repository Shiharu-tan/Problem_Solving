#include <iostream>
using namespace std;

int main() {
    string h,m;
    getline(cin , h ,':');
    getline(cin , m);
    while(h!="0" && m!="00") {
        int hh = stoi(h);
        int mm = stoi(m);
        if (hh == 12) hh = 0;
        double deg = abs(360.0 / 12 * hh + mm / 2.0 - 360.0 / 60 * mm);
        if (deg > 180) deg = 360 - deg;
        printf("%.3f", deg);
        getline(cin , h ,':');
        getline(cin , m);
    }
    return 0;
}
