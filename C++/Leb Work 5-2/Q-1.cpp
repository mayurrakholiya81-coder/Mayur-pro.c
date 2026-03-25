#include <iostream>
using namespace std;

class Number {
    int value;

public:
    void setValue(int v) {
        value = v;
    }

    
    bool operator < (Number n) {
        if (value < n.value)
            return true;
        else
            return false;
    }

    void display() {
        cout << value;
    }
};

int main() {
    Number n1, n2;

    n1.setValue(10);
    n2.setValue(20);

    if (n1 < n2) {
        cout << "n2 is greater: ";
        n2.display();
    } else {
        cout << "n1 is greater: ";
        n1.display();
    }

    return 0;
}
