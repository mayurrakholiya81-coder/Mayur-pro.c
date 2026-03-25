#include <iostream>
using namespace std;


class Shape {
public:
    virtual void calculate() = 0; 
};


class Circle : public Shape {
    float r;
public:
    Circle(float radius) {
        r = radius;
    }

    void calculate() {
        cout << "Area of Circle: " << 3.14 * r * r << endl;
    }
};


class Triangle : public Shape {
    float b, h;
public:
    Triangle(float base, float height) {
        b = base;
        h = height;
    }

    void calculate() {
        cout << "Area of Triangle: " << 0.5 * b * h << endl;
    }
};


class Rectangle : public Shape {
    float l, w;
public:
    Rectangle(float length, float width) {
        l = length;
        w = width;
    }

    void calculate() {
        cout << "Area of Rectangle: " << l * w << endl;
    }
};

int main() {
    Shape *s;

    Circle c(3);
    Triangle t(4, 5);
    Rectangle r(6, 2);

    s = &c;
    s->calculate();

    s = &t;
    s->calculate();

    s = &r;
    s->calculate();

    return 0;
}
