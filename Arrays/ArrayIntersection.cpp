#include<iostream>

using namespace std;

void arrIntersection(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
            }
        }
    }
    cout << endl;
}

int main() {

    int arr1[5] = {6,3,8,4,9};

    int arr2[5] = {4,5,7,6,2};

    arrIntersection(arr1, arr2, 5);

    return 0;
}