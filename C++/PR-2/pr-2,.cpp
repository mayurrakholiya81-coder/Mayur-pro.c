#include<iostream>
using namespace std;

class Design{
    private:
        int trainNumber;
        string trainName;
        string source;
        string destination;
        string trainTime;
    public:
        Design(){}

        Design(int trainNumber,string trainName,string source,string destination,string trainTime)
        {
            this->trainNumber = trainNumber;
            this->trainName = trainName;
            this->source = source;
            this->destination = destination;
            this->trainTime = trainTime;
        }
        void displayTrainDetails(){
            cout << "----------------------print-----------------------" << endl;
            cout << "Train Number : " << trainNumber << endl;
            cout << "Train Name : " << trainName << endl;
            cout << "Train Source : " << source << endl;
            cout << "Train Destination : " << destination << endl;
            cout << "Train Time : " << trainTime << endl;
            cout << "---------------------------------------------" << endl;
        }
        int trainNum()
        {
            return trainNumber;
        }
};

static int getTrainCount(){

}

int main()
{
    int choice,index = 0;
    Design trains[100];
    
    do
    {
        cout << "--- Railway Reservation System Menu ---" << endl;
        cout << "1. Add New Train Record" << endl;
        cout << "2. Display All Train Records" << endl;
        cout << "3. Search Train by Number" << endl;
        cout << "4. Exit" << endl;
        
        cout << "Enter your choice : ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:{
                int trainNumber;
                string trainName;
                string source;
                string destination;
                string trainTime;
                
                    cout << "Enter Train Number : ";
                    cin >> trainNumber;

                    cin.ignore();
                    cout << "Enter Train Name : ";
                    getline(cin,trainName);
                    
                    
                    cout << "Enter Train Source : ";
                    getline(cin,source);
                    
                    
                    cout << "Enter Train Destination : ";
                    getline(cin,destination);
                    
                    
                    cout << "Enter Train Time : ";
                    getline(cin,trainTime);

                    trains[index] = Design(trainNumber,trainName,source,destination,trainTime);
                    index++;
            break;
        }
            case 2:{
                        for (int i = 0; i < index; i++)
                        {
                            trains[i].displayTrainDetails();
                        }
                        break;
                    }
            case 3:{
                        int key,flage = 0;
                        
                        cout << "Enter Train Number to search : ";
                        cin >> key;
                        
                        for (int i = 0; i < index; i++)
                        {
                            if (key == trains[i].trainNum())
                            {
                                flage = 1;
                                trains[i].displayTrainDetails();
                                break;
                            }
                        }
                        if (flage == 0)
                        {
                            cout << "\n---------------------------------------------" << endl; 
                            cout << "Train with number " << key <<"not found!" << endl;
                            cout << "\n---------------------------------------------" << endl; 
                        }
                        break;
                    }
            case 4:{
                cout << "Exiting the system. Goodbye!";
                break;
            }
            
            default:
                cout << "Not Velid Number!...";
                break;
        }

} while (choice != 4);

    return 0;
}
