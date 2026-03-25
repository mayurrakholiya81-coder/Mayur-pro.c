#include <iostream>
using namespace std;

class Student {
private:
    int stu_id, stu_age;
    string stu_name, stu_course, stu_city, stu_email, stu_college;

public:
    void setData() {
        cout << "\nEnter Student ID: ";
        cin >> stu_id;

        cout << "Enter Name: ";
        cin >> stu_name;

        cout << "Enter Age: ";
        cin >> stu_age;

        cout << "Enter Course: ";
        cin >> stu_course;

        cout << "Enter City: ";
        cin >> stu_city;

        cout << "Enter Email: ";
        cin >> stu_email;

        cout << "Enter College: ";
        cin >> stu_college;
    }

    void getData() {
        cout << "\nID: " << stu_id;
        cout << "\nName: " << stu_name;
        cout << "\nAge: " << stu_age;
        cout << "\nCourse: " << stu_course;
        cout << "\nCity: " << stu_city;
        cout << "\nEmail: " << stu_email;
        cout << "\nCollege: " << stu_college << endl;
    }
};

int main() {
    Student s[5];

    for(int i = 0; i < 5; i++) {
        cout << "\n--- Enter details of Student " << i+1 << " ---";
        s[i].setData();
    }

    cout << "\n\n--- Student Records ---\n";
    for(int i = 0; i < 5; i++) {
        s[i].getData();
    }

    return 0;
}
