#include <iostream>
using namespace std;

class A {
protected:
    int a, b;
public:
    A() {
        cout << "Enter two numbers (A): ";
        cin >> a >> b;
    }
};

class B {
protected:
    int c, d;
public:
    B() {
        cout << "Enter two numbers (B): ";
        cin >> c >> d;
    }
};

class C : public A, public B {
public:
    void sum() {
        int total = a + b + c + d;
        cout << "Sum of 4 numbers = " << total;
    }
};

int main() {
    C obj;
    obj.sum();
    return 0;
}
