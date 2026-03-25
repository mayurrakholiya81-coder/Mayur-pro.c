#include <iostream>
using namespace std;

class Animal {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

   
    virtual void displayDetails() {
        cout << "Animal: " << name << endl;
    }
};


class Dog : public Animal {
public:
    void displayDetails() {
        cout << "Dog Name: " << name << ", Sound: Bark" << endl;
    }
};


class Cat : public Animal {
public:
    void displayDetails() {
        cout << "Cat Name: " << name << ", Sound: Meow" << endl;
    }
};

int main() {
    Animal* a[2]; 

    Dog d;
    Cat c;

    d.setName("Tommy");
    c.setName("Kitty");

    a[0] = &d;
    a[1] = &c;


    for(int i = 0; i < 2; i++) {
        a[i]->displayDetails();
    }

    return 0;
}