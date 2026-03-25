#include <iostream>
using namespace std;

class RBI {
protected:
    float rate;
};

class SBI : public RBI {
public:
    SBI() { rate = 6.5; }

    void getROI() {
        cout << "SBI Rate of Interest: " << rate << "%" << endl;
    }
};

class BOB : public RBI {
public:
    BOB() { rate = 7.0; }

    void getROI() {
        cout << "BOB Rate of Interest: " << rate << "%" << endl;
    }
};

class ICICI : public RBI {
public:
    ICICI() { rate = 7.5; }

    void getROI() {
        cout << "ICICI Rate of Interest: " << rate << "%" << endl;
    }
};

int main() {
    SBI s;
    BOB b;
    ICICI i;

    s.getROI();
    b.getROI();
    i.getROI();

    return 0;
}
