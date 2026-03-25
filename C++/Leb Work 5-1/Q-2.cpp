#include <iostream>
using namespace std;


class Cricket {
public:
    virtual void getTotalOvers() {
        cout << "Total overs in Cricket: 50" << endl;
    }
};


class T20Match : public Cricket {
public:
    void getTotalOvers() {
        cout << "Total overs in T20 Match: 20" << endl;
    }
};


class TestMatch : public Cricket {
public:
    void getTotalOvers() {
        cout << "Total overs in Test Match: 90 per day" << endl;
    }
};

int main() {
    Cricket *c;

    T20Match t20;
    TestMatch test;

    c = &t20;
    c->getTotalOvers();

    c = &test;
    c->getTotalOvers();

    return 0;
}
