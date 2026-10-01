#include <iostream>
using namespace std;

class Order {
    static int nextID;
    int id;
public:
    Order() {
        id = nextID++;
    }
    void show() {
        cout << "Order ID: " << id << endl;
    }
};

int Order::nextID = 1001;

int main() {
    Order o1, o2, o3;
    o1.show();
    o2.show();
    o3.show();
    return 0;
}
