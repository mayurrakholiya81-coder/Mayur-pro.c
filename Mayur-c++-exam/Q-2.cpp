#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    string address;

public:
  
    Person(string n, int a, string addr) {
        name = n;
        age = a;
        address = addr;
    }

  
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setAddress(string addr) { address = addr; }

  
    string getName() { return name; }
    int getAge() { return age; }
    string getAddress() { return address; }

   
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of persons: ";
    cin >> n;

    Person* p[n]; 

    for(int i = 0; i < n; i++) {
        string name, address;
        int age;

        cout << "\nEnter details of person " << i + 1 << endl;

        cout << "Name: ";
        cin >> name;

        cout << "Age: ";
        cin >> age;

        cout << "Address: ";
        cin >> address;

        
        p[i] = new Person(name, age, address);
    }

    cout << "\n--- Person Details ---\n";

    for(int i = 0; i < n; i++) {
        p[i]->display();
    }

    return 0;
}