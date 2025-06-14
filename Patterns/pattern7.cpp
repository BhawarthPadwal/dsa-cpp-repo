#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; 
    int row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= n) {
            char ch = 'A' + row + col - 2;
            cout << ch << " ";
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    int row2 = 1;
    while (row2 <= n) {
        int col2 = 1;
        while (col2 <= row2) {
            char ch = 'A' + row2 - 1;
            cout << ch << " ";
            col2 += 1;
        }
        cout << endl;
        row2 += 1;
    }

}