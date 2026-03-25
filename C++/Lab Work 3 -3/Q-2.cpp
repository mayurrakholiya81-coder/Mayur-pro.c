#include <iostream>
using namespace std;

class Cafe {
private:
    int cafe_id, cafe_rating, cafe_establish_year, cafe_staff_quantity;
    string cafe_name, cafe_type, cafe_location;

public:
    // Default Constructor
    Cafe() {
        cout << "\nEnter Cafe ID: ";
        cin >> cafe_id;

        cout << "Enter Cafe Name: ";
        cin >> cafe_name;

        cout << "Enter Cafe Type: ";
        cin >> cafe_type;

        cout << "Enter Rating (1-5): ";
        cin >> cafe_rating;

        cout << "Enter Location: ";
        cin >> cafe_location;

        cout << "Enter Establish Year: ";
        cin >> cafe_establish_year;

        cout << "Enter Staff Quantity: ";
        cin >> cafe_staff_quantity;
    }

    void display() {
        cout << "\nCafe ID: " << cafe_id;
        cout << "\nName: " << cafe_name;
        cout << "\nType: " << cafe_type;
        cout << "\nRating: " << cafe_rating << " Star";
        cout << "\nLocation: " << cafe_location;
        cout << "\nEstablish Year: " << cafe_establish_year;
        cout << "\nStaff Quantity: " << cafe_staff_quantity << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of cafes: ";
    cin >> n;

    Cafe c[n];  // Default constructor auto call

    cout << "\n\n--- Cafe Records ---\n";
    for(int i = 0; i < n; i++) {
        c[i].display();
    }

    return 0;
}
