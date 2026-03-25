#include <iostream>
using namespace std;

class Company {
private:
    int comp_id, comp_staff_quantity;
    long long comp_revenue;
    int comp_import_raw_diamonds, comp_export_diamonds;
    string comp_name, comp_ceo;

public:
    // Parameterized Constructor
    Company(int id, string name, int staff, long long revenue,
            int import_d, int export_d, string ceo) {

        comp_id = id;
        comp_name = name;
        comp_staff_quantity = staff;
        comp_revenue = revenue;
        comp_import_raw_diamonds = import_d;
        comp_export_diamonds = export_d;
        comp_ceo = ceo;
    }

    void display() {
        cout << "\nID: " << comp_id;
        cout << "\nName: " << comp_name;
        cout << "\nStaff: " << comp_staff_quantity;
        cout << "\nRevenue: " << comp_revenue;
        cout << "\nImported Diamonds: " << comp_import_raw_diamonds;
        cout << "\nExported Diamonds: " << comp_export_diamonds;
        cout << "\nCEO: " << comp_ceo << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of companies: ";
    cin >> n;

    Company* c[n];

    for(int i = 0; i < n; i++) {
        int id, staff, import_d, export_d;
        long long revenue;
        string name, ceo;

        cout << "\n--- Enter Company " << i+1 << " Details ---";

        cout << "\nID: "; cin >> id;
        cout << "Name: "; cin >> name;
        cout << "Staff: "; cin >> staff;
        cout << "Revenue: "; cin >> revenue;
        cout << "Imported Diamonds: "; cin >> import_d;
        cout << "Exported Diamonds: "; cin >> export_d;
        cout << "CEO: "; cin >> ceo;

        c[i] = new Company(id, name, staff, revenue, import_d, export_d, ceo);
    }

    cout << "\n\n--- Company Records ---\n";
    for(int i = 0; i < n; i++) {
        c[i]->display();
    }

    return 0;
}
