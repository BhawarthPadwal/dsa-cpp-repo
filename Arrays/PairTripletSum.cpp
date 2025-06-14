#include<iostream>

using namespace std;


bool pairSum(int arr[], int size, int targetValue) {

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i != j && (arr[i] + arr[j] == targetValue)) {
                cout << arr[i] << " " << arr[j] << endl; 
                return true;
            }
        }
    }
    return false;
}

bool tripletSum(int arr[], int size, int targetValue) {

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                if ((i != j && j != k && i != k) && (arr[i] + arr[j] + arr[k] == targetValue)) {
                cout << arr[i] << " " << arr[j] << " " << arr[k] << endl; 
                return true;
            }
            }
        }
    }
    return false;
}



int main() {

    int arr[5] = {5,3,8,7,9};

    bool result = pairSum(arr, 5, 14);

    cout<< (result ? "Pair sum exists" : "Pair sum does not exists");

    cout << endl;

    bool result2 = tripletSum(arr, 5, 16);

    cout<< (result2 ? "Triplet sum exists" : "Triplet sum does not exists");

    return 0;
}