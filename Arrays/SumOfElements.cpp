#include<iostream>

using namespace std;

int getSum(int arr[], int size) {

    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }

    return sum;
}

int main() {

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Sum of elements of array: " << getSum(arr, size);

    return 0;
}