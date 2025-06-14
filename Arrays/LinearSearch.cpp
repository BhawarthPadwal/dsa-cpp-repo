#include<iostream>

using namespace std;

int main() {

    int arr[5] = {3,8,5,-2,1};
    bool isPresent = 0;

    int n; 
    cout << "Enter the number you want to search: ";
    cin >> n;

    for (int i = 0; i < 5; i++) {
        if (n == arr[i]) {
            isPresent = true;
            break;
        }
    }

    if (isPresent == 0) {
        cout << "Number not found";
    } else {
        cout << "Number founded";
    }

    return 0;
}