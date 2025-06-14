#include<iostream>

using namespace std;

int getMax(int arr[], int size) {

    int max = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int getMin(int arr[], int size) {

    int min = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}


int main() {

    cout << "Enter the size of the array: ";
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << endl;
    cout << endl;
    cout << "Maximum no: " << getMax(arr, size) << endl;
    cout << "Minimum no: " << getMin(arr, size) << endl;



    return 0;
}