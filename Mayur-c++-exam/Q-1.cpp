#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int publishedYear;

 
    void setData(string t, string a, int y) {
        title = t;
        author = a;
        publishedYear = y;
    }

 
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << publishedYear << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
  
    Book b[3];

    
    b[0].setData("Book", "Paython", 1985);
    b[1].setData("Book", "C++", 2008);
    b[2].setData("Book", "", 1988);


    for(int i = 0; i < 3; i++) {
        b[i].display();
    }

    return 0;
}