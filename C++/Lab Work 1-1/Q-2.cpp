#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter first number: ";
    cin >> start;

    cout << "Enter second number: ";
    cin >> end;

    cout << "Leap years are: ";

    for(int year = start; year <= end; year++) {
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << year << " ";
        }
    }

    return 0;
}
