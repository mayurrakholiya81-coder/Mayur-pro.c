#include <iostream>
using namespace std;

class Car {
public:
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

    void getData() {
        cout << "\nEnter Car ID: ";
        cin >> car_id;

        cout << "Enter Company Name: ";
        cin >> car_company_name;

        cout << "Enter Color: ";
        cin >> car_color;

        cout << "Enter Model: ";
        cin >> car_model;

        cout << "Enter Release Year: ";
        cin >> car_release_year;
    }

    void display() {
        cout << "\nCar ID: " << car_id;
        cout << "\nCompany: " << car_company_name;
        cout << "\nColor: " << car_color;
        cout << "\nModel: " << car_model;
        cout << "\nRelease Year: " << car_release_year << endl;
    }
};

int main() {
    Car c[4];

    for(int i = 0; i < 4; i++) {
        cout << "\n--- Enter details of Car " << i+1 << " ---";
        c[i].getData();
    }

    cout << "\n\n--- Car Records ---\n";
    for(int i = 0; i < 4; i++) {
        c[i].display();
    }

    return 0;
}
