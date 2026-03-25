#include <iostream>
using namespace std;

class Customer {
private:
    int cust_id, cust_age, cust_simcard_validity;
    string cust_name, cust_city, cust_mobile_number, cust_telecom_brand_name;

public:
    void setData() {
        cout << "\nEnter Customer ID: ";
        cin >> cust_id;

        cout << "Enter Name: ";
        cin >> cust_name;

        cout << "Enter Age: ";
        cin >> cust_age;

        cout << "Enter City: ";
        cin >> cust_city;

        cout << "Enter Mobile Number: ";
        cin >> cust_mobile_number;

        cout << "Enter SIM Validity (years): ";
        cin >> cust_simcard_validity;

        cout << "Enter Telecom Brand: ";
        cin >> cust_telecom_brand_name;
    }

    void getData() {
        cout << "\nID: " << cust_id;
        cout << "\nName: " << cust_name;
        cout << "\nAge: " << cust_age;
        cout << "\nCity: " << cust_city;
        cout << "\nMobile: " << cust_mobile_number;
        cout << "\nSIM Validity: " << cust_simcard_validity << " years";
        cout << "\nTelecom Brand: " << cust_telecom_brand_name << endl;
    }
};

int main() {
    Customer c[5];

    for(int i = 0; i < 5; i++) {
        cout << "\n--- Enter details of Customer " << i+1 << " ---";
        c[i].setData();
    }

    cout << "\n\n--- Customer Records ---\n";
    for(int i = 0; i < 5; i++) {
        c[i].getData();
    }

    return 0;
}
