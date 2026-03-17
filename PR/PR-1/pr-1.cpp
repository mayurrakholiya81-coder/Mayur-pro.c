#include<iostream>
using namespace std;

class TimeConverter{
    public:
        int a,h,m,min = 0,second,S = 0,ts =0;
        float hou = 0;

        void hours()
        {
            cout << "Enter seconds : ";
            cin >> a;

            hou = a / 3600;
            min = (a - 3600) / 60;
            // ts = a - 3600 - min;

            cout << "second to hours : " << hou << ":" << min << ":" << "0";

        }

        void seconds()
        {
            cout << "Enter hours : ";
            cin >> h;

            cout << "Enter minutes : ";
            cin >> m;

            cout << "Enter seconds : ";
            cin >> second;

            S = h * 3600 + m * 60 + second;

            cout << "Total second : " << S;

        }
};

int main()
{
    TimeConverter tm;

    cout << "paress 1 seconds to hours " << endl;
    cout << "paress 2 total seconds" << endl;

    int x;

    cout << "Enter any number : ";
    cin >> x;

    switch (x)
    {
    case 1:
        tm.hours();
        break;
    case 2:
        tm.seconds();
        break;
    
    default:
        cout << "Not velid number !";
        break;
    }


    return 0;
}
