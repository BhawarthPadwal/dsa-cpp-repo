#include<iostream>
#include<vector>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }

        mid = (start + end) / 2; 
    }
    return -1;
}


int main() {


    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int result = binarySearch(arr, 10, 9);

    if (result == -1) {
        cout << "Element NOT found" << endl; 
    } else { 
        cout << "Element found at index " << result;
    }

    // vector<int> arr = {1,2,3,5,6,7,8,9,10};
    // int key = 8; 

    // int start = arr[0];
    // int end = arr[arr.size() - 1];
    // int mid = (start + end) / 2;

    // if (mid == key) {
    //     return arr[mid];
    // } else if {

    // }
    
}