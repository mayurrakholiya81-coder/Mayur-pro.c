#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Even elements are: ";
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
