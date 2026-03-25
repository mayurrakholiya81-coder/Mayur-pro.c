#include <iostream>
using namespace std;

class P {
protected:
    float celsius;
};

class Q : public P {
protected:
    float fahrenheit;

public:
    void input() {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }

    void toFahrenheit() {
        fahrenheit = (celsius * 9/5) + 32;
        cout << "Fahrenheit: " << fahrenheit << endl;
    }
};

class R : public Q {
public:
    void toKelvin() {
        float kelvin = fahrenheit + 273.15;
        cout << "Kelvin: " << kelvin << endl;
    }
};

int main() {
    R obj;
    obj.input();
    obj.toFahrenheit();
    obj.toKelvin();
    return 0;
}
