#include <iostream>
using namespace std;

class Child {
public:
 
    void calculate(int a, int b) {
        cout << "Division: " << a / b << endl;
    }

   
    void calculate(int a, int b, int c) {
        cout << "Subtraction: " << a - b - c << endl;
    }

   
    void calculate(int a, int b, int c, int d) {
        cout << "Multiplication: " << a * b * c * d << endl;
    }

    
    void calculate(int a, int b, int c, int d, int e) {
        cout << "Addition: " << a + b + c + d + e << endl;
    }
};

int main() {
    Child obj;

    obj.calculate(10, 2);              
    obj.calculate(10, 2, 3);           
    obj.calculate(2, 3, 4, 5);        
    obj.calculate(1, 2, 3, 4, 5);      

    return 0;
}
