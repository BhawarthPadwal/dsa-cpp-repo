#include<iostream>

using namespace std;

void swapPosition(int &pos1, int &pos2) {
    int temp;
    temp = pos1;
    pos1 = pos2;
    pos2 = temp;
}

void getReveredArray(int arr[], int size) {

    int end = size-1;

    for (int start = 0; start <= end; start++) {
        swapPosition(arr[start], arr[end]);
        end--;
    }

    // int start = 0;
    // int end = size - 1;

    // while (start <= end) {
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }

}

void getAlternateSwap(int arr[], int size) {
    int start = 0;
    int end = start+1;
    while (start < size) {
        swapPosition(arr[start], arr[end]);
        start += 2;
        end += 2;
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    getReveredArray(arr, 10);

    cout << "Reversed array: " << endl;

    printArray(arr, 10);

    getAlternateSwap(arr, 10);

    cout << "Alterate Reversed array: " << endl;

    printArray(arr, 10);

    return 0;
}