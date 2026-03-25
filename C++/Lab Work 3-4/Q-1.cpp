#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;
    float gpa;

public:
    
    Student() {
        roll = 0;
        name = "";
        gpa = 0.0;
    }

   
    Student(int r, string n, float g) {
        roll = r;
        name = n;
        gpa = g;
    }

  
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;  
        gpa = s.gpa;
    }

    
    int getRoll() const { return roll; }
    string getName() const { return name; }
    float getGpa() const { return gpa; }

    void display() const {
        cout << "\nRoll: " << roll;
        cout << "\nName: " << name;
        cout << "\nGPA: " << gpa << endl;
    }
};

class StudentRecordManager {
private:
    Student *students;
    int count;

public:
    StudentRecordManager(int n) {
        count = n;
        students = new Student[count];
    }

  
    void addStudents() {
        for(int i = 0; i < count; i++) {
            int r;
            string n;
            float g;

            cout << "\nEnter details of Student " << i+1 << endl;
            cout << "Roll: ";
            cin >> r;
            cout << "Name: ";
            cin >> n;
            cout << "GPA: ";
            cin >> g;

            students[i] = Student(r, n, g);
        }
    }


    void displayAll() const {
        for(int i = 0; i < count; i++) {
            const Student &s = students[i]; 
            s.display();
        }
    }

 
    void search(int roll) const {
        for(int i = 0; i < count; i++) {
            if(students[i].getRoll() == roll) {
                cout << "\nStudent Found:";
                students[i].display();
                return;
            }
        }
        cout << "\nStudent not found!";
    }

   
    ~StudentRecordManager() {
        delete[] students;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    StudentRecordManager manager(n);

    manager.addStudents();

    cout << "\n\n--- All Student Records ---";
    manager.displayAll();

    int searchRoll;
    cout << "\n\nEnter roll number to search: ";
    cin >> searchRoll;

    manager.search(searchRoll);

    return 0;
}
