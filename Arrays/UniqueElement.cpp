#include<iostream>

using namespace std;

void printDuplicateElements(int arr[], int size) {
    for (int i = 0; i < size-1; i++) {  
        for (int j = i+1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
            }
        }
    }
    cout << endl;
}

// void printUniqueElements(int arr[], int size) {
//     bool isUnique = true;
//     for (int i = 0; i < size-1; i++) {  
//         for (int j = i+1; j < size; j++) {
//             if (arr[i] == arr[j]) {
//                 isUnique = false;
//                 break;
//             } else {
//                 isUnique = true;
//             }
//         }
//         if (isUnique) {
//             cout << arr[i] << " ";
//         }
//     }
// }

void printUniqueElements(int arr[], int size) {
    for (int i = 0; i < size; i++) { 
        bool isUnique = true; 
        for (int j = 0; j < size; j++) {
            if (i != j &&arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
}

int main() {

    int arr[10] = {5,4,3,5,1,3,7,9,0,4};

    cout << "Duplicate elements are: ";

    printDuplicateElements(arr, 10);

    cout << "Unique elements are: ";

    printUniqueElements(arr, 10);

    return 0;
}