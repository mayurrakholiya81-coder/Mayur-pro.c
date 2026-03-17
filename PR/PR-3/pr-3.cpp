#include<iostream>
using namespace std;

class Employee {
    protected:
    int EM_Id;
    string name;
    string department;
    bool isAssigned = false;
    
    public:
    void addEmployee(int EM_Id,string name,string department)
    {
        this->EM_Id = EM_Id;
        this->name = name;
        this->department = department;
    }
    void viewdEmployeeDetails()
    {
        cout << "\n|---------------| Print Data |---------------|\n\n";
        cout << "Employee Id : " << this->EM_Id << endl;
        cout << "Employee Name : " << this->name << endl;
        cout << "Employee department : " << this->department << endl;
        cout << "Employee Work : " << (isAssigned ? "Yes" : "No") << endl;
        cout << "\n|---------------|------------|---------------|\n";
    }
        int employeeId()
        {
            return EM_Id;
        }
};

class AssignedEmployee : public Employee{
    protected:
        string taskName;
        string assignedDate;
    public:
        void assignTask(string taskName,string assignedDate)
        {
            this->taskName = taskName;
            this->assignedDate = assignedDate;
        }
        
        void removeTask()
        {
            cout << "Task Name : " << this->taskName << endl;
            cout << "Assigned Date : " << this->assignedDate << endl;
        }
    };
    
int main()
{
    AssignedEmployee arr[5];
    int choice,index = 0;
    
    do
    {      
        cout << "|---------------------| Employee |---------------------|" << endl;
        cout << "Press 1 Add Employee..." << endl;
        cout << "Press 2 Assign Task..." << endl;
        cout << "Press 3 Remove Task..." << endl;
        cout << "Press 4 View All Employee..." << endl;
        cout << "Press 5 Exit..." << endl;
        
        cout << "Enter Any Number : ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:{
                int EM_Id;
                string name;
                string department;
                cout << "Enter Employee Id : ";
                cin >> EM_Id;
                
                cin.ignore();
                cout << "Enter Employee Name : ";
                getline(cin,name);
                
                cout << "Enter Employee department : ";
                getline(cin,department);
                
                arr[index++].addEmployee(EM_Id,name,department);
                cout << "|-------------| Add Data |-------------|" <<endl;
                
                break;
            }
            case 2:{
                int key,flag = false;
                cout << "Enter Employee Id : ";
                cin >> key;
                
                string taskName;
                string assignedDate;
                bool isAssigned;
                
                for (int i = 0; i < index; i++)
                {
                    if (key == arr[i].employeeId())
                    {
                        flag = true;
                        
                        cin.ignore();
                        cout << "Enter Task Name : ";
                        getline(cin,taskName);
                        
                        cout << "Enter Assigned Date : ";
                        getline(cin,assignedDate);
                        
                        break;
                    }
                }
                if (flag == false)
                {
                    cout << "Pales Enter Carect Employee Id!";
                }
                break;
            }
            case 3:{
                int key,flag = false;
                cout << "Enter Employee Working Id : ";
                cin >> key;
                
                for (int i = 0; i < index; i++)
                {
                    if (key == arr[i].employeeId())
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag == false)
                {
                    cout << "Pales Enter Carect Employee Id!";
                }
                break;
            }
            case 4:{
                for (int i = 0; i < index; i++)
                {
                    arr[i].viewdEmployeeDetails();
                }
                break;
            }
            case 5:{
                cout << "Thank You...";
                break;
            }
            
            default: 
            cout << "Pales Enter Carect Number!..";
            break;
        }
    } while (choice != 5);
    
    return 0;
}
