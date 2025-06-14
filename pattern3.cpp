#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) { // no. of start = no of row
            cout << " * ";
            j += 1; 
        }
        cout << endl;
        i += 1;
    }


    int row = 1;
    while (row <= n) {
        int col = n;
        while (col >= row) {
            cout << col << " ";
            col -= 1;
        }
        cout << endl;
        row += 1;
    }

    int row1 = 1;
    while (row1 <= n) {
        int col1 = 1;
        while (col1 <= row1) {
            cout << col1 << " ";
            col1 += 1;
        }
        cout << endl;
        row1 += 1;
    }

    int count = 1;
    int row2 = 1;
    while (row2 <= n) {
        int col2 = 1;
        while (col2 <= row2) {
            cout << count << " ";
            col2 += 1;
            count ++;
        }
        cout << endl;
        row2 += 1;
    }
}