#include <iostream>
using namespace std;


class Admin {
private:
    string company_name = "ABC Ltd";  

protected:
    int total_staff = 100;           

public:
    float manager_salary = 50000;
    float employee_salary = 20000;
    float total_annual_revenue = 1000000;
    bool can_terminate = true;


    virtual void myAccess() {
        cout << "Admin Access\n";
        cout << "Company: " << company_name << endl;
        cout << "Manager Salary: " << manager_salary << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
        cout << "Revenue: " << total_annual_revenue << endl;
        cout << "Can Terminate: " << can_terminate << endl;
    }
};


class Manager : public Admin {
public:
    void myAccess() {
        cout << "\nManager Access\n";
     
        cout << "Manager Salary: " << manager_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
    }
};


class Employee : public Manager {
public:
    void myAccess() {
        cout << "\nEmployee Access\n";
        cout << "Employee Salary: " << employee_salary << endl;
    }
};

int main() {
    Admin a;
    Manager m;
    Employee e;

    a.myAccess();
    m.myAccess();
    e.myAccess();

    return 0;
}
