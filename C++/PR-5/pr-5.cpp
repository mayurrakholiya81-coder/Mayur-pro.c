#include <iostream>
#include <vector>
#include <string>
using namespace std;

class BankAccount
{
protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int accNo, string name, double bal)
    {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }

    virtual ~BankAccount() {}

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount depo;sited successfully.\n";
        }
        else
        {
            cout << "Invalid deposit amount!\n";
        }
    }

    virtual void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
        else
        {
            cout << "Insufficient balance or invalid amount!\n";
        }
    }

    double getBalance() const
    {
        return balance;
    }

    virtual void calculateInterest(){}

    virtual void displayAccountInfo()
    {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolderName << endl;
        cout << "Balance        : " << balance << endl;
    }
};

class SavingsAccount : public BankAccount
{
private:
    double interestRate;

public:
    SavingsAccount(int accNo, string name, double bal, double rate)
        : BankAccount(accNo, name, bal)
    {
        interestRate = rate;
    }

    void calculateInterest() override
    {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest added: " << interest << endl;
    }

    void displayAccountInfo() override
    {
        cout << "--- Savings Account ---\n";
        BankAccount::displayAccountInfo();
        cout << "Interest Rate : " << interestRate << "%\n";
    }
};

class CheckingAccount : public BankAccount
{
private:
    double overdraftLimit;

public:
    CheckingAccount(int accNo, string name, double bal, double limit)
        : BankAccount(accNo, name, bal)
    {
        overdraftLimit = limit;
    }

    void withdraw(double amount) override
    {
        if (amount > 0 && amount <= balance + overdraftLimit)
        {
            balance -= amount;
            cout << "Amount withdrawn (Overdraft allowed).\n";
        }
        else
        {
            cout << "Overdraft limit exceeded!\n";
        }
    }

    void displayAccountInfo() override
    {
        cout << "--- Checking Account ---\n";
        BankAccount::displayAccountInfo();
        cout << "Overdraft Limit : " << overdraftLimit << endl;
    }
};

class FixedDepositAccount : public BankAccount
{
private:
    int term;

public:
    FixedDepositAccount(int accNo, string name, double bal, int t)
        : BankAccount(accNo, name, bal)
    {
        term = t;
    }

    void calculateInterest() override
    {
        double rate = 6.5;
        double interest = balance * rate * term / (100 * 12);
        balance += interest;
        cout << "Fixed Deposit Interest added: " << interest << endl;
    }

    void displayAccountInfo() override
    {
        cout << "--- Fixed Deposit Account ---\n";
        BankAccount::displayAccountInfo();
        cout << "Term (Months) : " << term << endl;
    }
};

int main()
{
    vector<BankAccount *> accounts;
    int choice;

    do
    {
        cout << "\n===== Banking System Menu =====\n";
        cout << "1. Create Savings Account\n";
        cout << "2. Create Checking Account\n";
        cout << "3. Create Fixed Deposit Account\n";
        cout << "4. Deposit Amount\n";
        cout << "5. Withdraw Amount\n";
        cout << "6. Calculate Interest\n";
        cout << "7. Display All Accounts\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        int accNo;
        string name;
        double bal, amt;

        switch (choice)
        {
        case 1:
        {
            double rate;
            cout << "Enter Account No, Name, Balance, Interest Rate: ";
            cin >> accNo >> name >> bal >> rate;
            accounts.push_back(new SavingsAccount(accNo, name, bal, rate));
            break;
        }
        case 2:
        {
            double limit;
            cout << "Enter Account No, Name, Balance, Overdraft Limit: ";
            cin >> accNo >> name >> bal >> limit;
            accounts.push_back(new CheckingAccount(accNo, name, bal, limit));
            break;
        }
        case 3:
        {
            int term;
            cout << "Enter Account No, Name, Balance, Term (months): ";
            cin >> accNo >> name >> bal >> term;
            accounts.push_back(new FixedDepositAccount(accNo, name, bal, term));
            break;
        }
        case 4:
        {
            cout << "Enter Account Index and Amount: ";
            int idx;
            cin >> idx >> amt;
            if (idx >= 0 && idx < accounts.size())
                accounts[idx]->deposit(amt);
            break;
        }
        case 5:
        {
            cout << "Enter Account Index and Amount: ";
            int idx;
            cin >> idx >> amt;
            if (idx >= 0 && idx < accounts.size())
                accounts[idx]->withdraw(amt);
            break;
        }
        case 6:
        {
            cout << "Enter Account Index: ";
            int idx;
            cin >> idx;
            if (idx >= 0 && idx < accounts.size())
                accounts[idx]->calculateInterest();
            break;
        }
        case 7:
        {
            for (int i = 0; i < accounts.size(); i++)
            {
                cout << "\nIndex: " << i << endl;
                accounts[i]->displayAccountInfo();
            }
            break;
        }
        case 0:
            cout << "Thenk You For Using....";
            break;
        }

    } while (choice != 0);

    for (auto acc : accounts)
        delete acc;

    return 0;
}
