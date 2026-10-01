#include <iostream>
using namespace std;

class Time {
    int hh, mm;
public:
    Time(int h=0, int m=0) : hh(h), mm(m) {}
    void show() {
        cout << hh << ":" << (mm<10 ? "0" : "") << mm << endl;
    }
    friend Time laterOf(Time t1, Time t2);
};

Time laterOf(Time t1, Time t2) {
    if (t1.hh > t2.hh) return t1;
    else if (t1.hh < t2.hh) return t2;
    else return (t1.mm >= t2.mm) ? t1 : t2;
}

int main() {
    Time t1(10, 30), t2(10, 45);
    cout << "Later time: ";
    laterOf(t1, t2).show();
    return 0;
}
