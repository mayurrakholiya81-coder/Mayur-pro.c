#include <iostream>
using namespace std;

int main() {
    int a, b, age;
    string password;

    try {
        cout << "Enter two numbers: ";
        cin >> a >> b;

        if (b == 0)
            throw "Cannot divide by zero!";
        
        cout << "Division: " << a / b << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    try {
        cout << "\nEnter age: ";
        cin >> age;

        if (age < 18)
            throw "Not eligible to vote!";
        
        cout << "Eligible to vote" << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    try {
        cout << "\nEnter password: ";
        cin >> password;

        bool hasUpper = false;

        for (int i = 0; i < password.length(); i++) {
            if (isupper(password[i])) {
                hasUpper = true;
                break;
            }
        }

        if (!hasUpper)
            throw "Password must contain at least one uppercase letter!";
        
        cout << "Password is valid" << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}
