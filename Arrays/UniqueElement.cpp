#include<iostream>

using namespace std;

// void printDuplicateElements(int arr[], int size) {
//     for (int i = 0; i < size-1; i++) {  
//         for (int j = i+1; j < size; j++) {
//             if (arr[i] == arr[j]) {
//                 cout << arr[i] << " ";
//             }
//         }
//     }
//     cout << endl;
// }

void printDuplicateElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                cout << arr[i] << " ";
                // cout << i << "->" << j << "->> "<<arr[i] << " ";
                break;
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
    cout << endl;
}

void printUniqueElement2(int arr[], int size) {

    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    cout << ans << endl;
}

int main() {

    int arr[11] = {5,4,3,5,1,3,7,9,0,4,5};

    cout << "Duplicate elements are: ";

    printDuplicateElements(arr, 11);

    cout << "Unique elements are: ";

    printUniqueElements(arr, 11);


    printUniqueElement2(arr, 11); // This method is used for specific case   

    return 0;
}