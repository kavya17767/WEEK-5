#include <iostream>
using namespace std;

class Counter {
    static int totalCreated;
    static int currentlyAlive;
public:
    Counter() {
        totalCreated++;
        currentlyAlive++;
    }
    ~Counter() {
        currentlyAlive--;
    }
    static void report() {
        cout << "Total created: " << totalCreated << endl;
        cout << "Currently alive: " << currentlyAlive << endl;
    }
};

int Counter::totalCreated = 0;
int Counter::currentlyAlive = 0;

int main() {
    Counter c1, c2;
    Counter::report();

    {
        Counter c3;
        Counter::report();
    } 

    Counter::report();
    return 0;
}
