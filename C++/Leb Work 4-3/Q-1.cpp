#include <iostream>
using namespace std;

class Employee {
protected:
    int id, age;
    string name;
    float salary;

public:
    virtual void setData() {
        cout << "\nEnter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    virtual void display() {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nSalary: " << salary;
    }

    virtual ~Employee() {}
};

class FullTimeEmployee : public Employee {
    float bonus;

public:
    void setData() {
        Employee::setData();
        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    void display() {
        Employee::display();
        cout << "\nBonus: " << bonus << endl;
    }
};

class PartTimeEmployee : public Employee {
    int hours_worked;

public:
    void setData() {
        Employee::setData();
        cout << "Enter Hours Worked: ";
        cin >> hours_worked;
    }

    void display() {
        Employee::display();
        cout << "\nHours Worked: " << hours_worked << endl;
    }
};

int main() {
    Employee* emp[100];  // array of pointers
    int count = 0, choice;

    do {
        cout << "\n\n--- Employee Management ---";
        cout << "\n1. Add Full-Time Employee";
        cout << "\n2. Add Part-Time Employee";
        cout << "\n3. Display All Employees";
        cout << "\n4. Delete Last Employee";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                emp[count] = new FullTimeEmployee();
                emp[count]->setData();
                count++;
                break;

            case 2:
                emp[count] = new PartTimeEmployee();
                emp[count]->setData();
                count++;
                break;

            case 3:
                for(int i = 0; i < count; i++) {
                    emp[i]->display();
                }
                break;

            case 4:
                if(count > 0) {
                    delete emp[count-1];
                    count--;
                    cout << "Last employee deleted!";
                } else {
                    cout << "No employees to delete!";
                }
                break;

            case 5:
                for(int i = 0; i < count; i++) {
                    delete emp[i]; // free memory
                }
                cout << "All memory cleared. Exiting...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 5);

    return 0;
}
