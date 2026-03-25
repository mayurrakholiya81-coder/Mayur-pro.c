#include <iostream>
using namespace std;

class Hotel {
private:
    int hotel_id, hotel_rating, hotel_establish_year;
    int hotel_staff_quantity, hotel_room_quantity;
    string hotel_name, hotel_type, hotel_location;

public:
    void setData() {
        cout << "\nEnter Hotel ID: ";
        cin >> hotel_id;

        cout << "Enter Hotel Name: ";
        cin >> hotel_name;

        cout << "Enter Hotel Type (Hotel/Motel): ";
        cin >> hotel_type;

        cout << "Enter Hotel Rating (1-7): ";
        cin >> hotel_rating;

        cout << "Enter Location (City): ";
        cin >> hotel_location;

        cout << "Enter Establish Year: ";
        cin >> hotel_establish_year;

        cout << "Enter Staff Quantity: ";
        cin >> hotel_staff_quantity;

        cout << "Enter Room Quantity: ";
        cin >> hotel_room_quantity;
    }

    void getData() {
        cout << "\nHotel ID: " << hotel_id;
        cout << "\nName: " << hotel_name;
        cout << "\nType: " << hotel_type;
        cout << "\nRating: " << hotel_rating << " Star";
        cout << "\nLocation: " << hotel_location;
        cout << "\nEstablish Year: " << hotel_establish_year;
        cout << "\nStaff Quantity: " << hotel_staff_quantity;
        cout << "\nRoom Quantity: " << hotel_room_quantity << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of hotels: ";
    cin >> n;

    Hotel h[n];

    for(int i = 0; i < n; i++) {
        cout << "\n--- Enter details of Hotel " << i+1 << " ---";
        h[i].setData();
    }

    cout << "\n\n--- Hotel Records ---\n";
    for(int i = 0; i < n; i++) {
        h[i].getData();
    }

    return 0;
}
