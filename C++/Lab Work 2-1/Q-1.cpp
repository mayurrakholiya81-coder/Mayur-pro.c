#include <iostream>
using namespace std;

class Employee {
public:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    float emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;

    void getData() {
        cout << "\nEnter Employee ID: ";
        cin >> emp_id;

        cout << "Enter Name: ";
        cin >> emp_name;

        cout << "Enter Age: ";
        cin >> emp_age;

        cout << "Enter Role: ";
        cin >> emp_role;

        cout << "Enter Salary: ";
        cin >> emp_salary;

        cout << "Enter City: ";
        cin >> emp_city;

        cout << "Enter Experience: ";
        cin >> emp_experience;

        cout << "Enter Company Name: ";
        cin >> emp_company_name;
    }

    void display() {
        cout << "\nID: " << emp_id;
        cout << "\nName: " << emp_name;
        cout << "\nAge: " << emp_age;
        cout << "\nRole: " << emp_role;
        cout << "\nSalary: " << emp_salary;
        cout << "\nCity: " << emp_city;
        cout << "\nExperience: " << emp_experience;
        cout << "\nCompany: " << emp_company_name << endl;
    }
};

int main() {
    Employee e[5];

    for(int i = 0; i < 5; i++) {
        cout << "\n--- Enter details of Employee " << i+1 << " ---";
        e[i].getData();
    }

    cout << "\n\n--- Employee Records ---\n";
    for(int i = 0; i < 5; i++) {
        e[i].display();
    }

    return 0;
}
