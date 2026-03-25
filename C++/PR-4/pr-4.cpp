#include <iostream>
#include <vector>
using namespace std;

class LibraryItem {
protected:
    string title;
    string author;
    string dueDate;

public:
    LibraryItem(string title, string author, string dueDate) {
        this->title = title;
        this->author = author;
        this->dueDate = dueDate;
    }

    virtual ~LibraryItem() {}

    void setDueDate(string dueDate) {
        this->dueDate = dueDate;
    }

    void displayBasicInfo() {
        cout << "Title     : " << title << endl;
        cout << "Author    : " << author << endl;
        cout << "Due Date  : " << dueDate << endl;
    }

    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() = 0;
};

class Book : public LibraryItem {
    protected:
        int quantity;

public:
    Book(string title, string author, string dueDate, int quantity)
        : LibraryItem(title, author, dueDate) {
        this->quantity = quantity;
    }

    void checkOut() override {
        if (quantity > 0) {
            quantity--;
            setDueDate("15 Days");
            cout << "Book Checked Out Successfully." << endl;
        } else {
            cout << "Book Not Available." << endl;
        }
    }

    void returnItem() override {
        quantity++;
        setDueDate("Returned");
        cout << "Book Returned Successfully." << endl;
    }

    void displayDetails() override {
        displayBasicInfo();
        cout << "Quantity  : " << quantity << endl;
    }
};

class DVD : public LibraryItem {
    protected:
        string duration;
        int quantity;

public:
    DVD(string title, string author, string dueDate, string duration, int quantity)
        : LibraryItem(title, author, dueDate) {
        this->duration = duration;
        this->quantity = quantity;
    }

    void checkOut() override {
        if (quantity > 0) {
            quantity--;
            setDueDate("7 Days");
            cout << "DVD Checked Out Successfully." << endl;
        } else {
            cout << "DVD Not Available." << endl;
        }
    }

    void returnItem() override {
        quantity++;
        setDueDate("Returned");
        cout << "DVD Returned Successfully." << endl;
    }

    void displayDetails() override {
        displayBasicInfo();
        cout << "Duration  : " << duration << endl;
        cout << "Quantity  : " << quantity << endl;
    }
};

class Magazine : public LibraryItem {
    protected:
        int issueNumber;
        int quantity;

public:
    Magazine(string title, string author, string dueDate, int issueNumber, int quantity)
        : LibraryItem(title, author, dueDate) {
        this->issueNumber = issueNumber;
        this->quantity = quantity;
    }

    void checkOut() override {
        if (quantity > 0) {
            quantity--;
            setDueDate("5 Days");
            cout << "Magazine Checked Out Successfully." << endl;
        } else {
            cout << "Magazine Not Available." << endl;
        }
    }

    void returnItem() override {
        quantity++;
        setDueDate("Returned");
        cout << "Magazine Returned Successfully." << endl;
    }

    void displayDetails() override {
        displayBasicInfo();
        cout << "Issue No. : " << issueNumber << endl;
        cout << "Quantity : " << quantity << endl;
    }
};

int main() {
    vector<LibraryItem*> items;
    int choice;

    do {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Add DVD\n";
        cout << "3. Add Magazine\n";
        cout << "4. Display All Items\n";
        cout << "5. Check Out Item\n";
        cout << "6. Return Item\n";
        cout << "7. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        string title, author, dueDate;

        switch (choice) {
        case 1: {
            int qty;
            cout << "Enter Book Title: ";
            getline(cin, title);
            cout << "Enter Author: ";
            getline(cin, author);
            cout << "Enter Due Date: ";
            getline(cin, dueDate);
            cout << "Enter Quantity: ";
            cin >> qty;

            items.push_back(new Book(title, author, dueDate, qty));
            cout << "Book Added Successfully.\n";
            break;
        }

        case 2: {
            int qty;
            string duration;
            cout << "Enter DVD Title: ";
            getline(cin, title);
            cout << "Enter Author: ";
            getline(cin, author);
            cout << "Enter Due Date: ";
            getline(cin, dueDate);
            cout << "Enter Duration: ";
            getline(cin, duration);
            cout << "Enter Quantity: ";
            cin >> qty;

            items.push_back(new DVD(title, author, dueDate, duration, qty));
            cout << "DVD Added Successfully.\n";
            break;
        }

        case 3: {
            int issue, qty;
            cout << "Enter Magazine Title: ";
            getline(cin, title);
            cout << "Enter Author: ";
            getline(cin, author);
            cout << "Enter Due Date: ";
            getline(cin, dueDate);
            cout << "Enter Issue Number: ";
            cin >> issue;
            cout << "Enter Quantity: ";
            cin >> qty;

            items.push_back(new Magazine(title, author, dueDate, issue, qty));
            cout << "Magazine Added Successfully.\n";
            break;
        }

        case 4:
            for (int i = 0; i < items.size(); i++) {
                cout << "\nIndex: " << i << endl;
                items[i]->displayDetails();
            }
            break;

        case 5: {
            int idx;
            cout << "Enter Index to Check Out: ";
            cin >> idx;
            if (idx >= 0 && idx < items.size())
                items[idx]->checkOut();
            else
                cout << "Invalid Index.\n";
            break;
        }

        case 6: {
            int idx;
            cout << "Enter Index to Return: ";
            cin >> idx;
            if (idx >= 0 && idx < items.size())
                items[idx]->returnItem();
            else
                cout << "Invalid Index.\n";
            break;
        }

        case 7:
            cout << "Thank You for Using Library System.\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 7);

    for (auto item : items)
        delete item;

    return 0;
}
