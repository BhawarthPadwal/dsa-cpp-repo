#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; 

    // int row = 1;
    // while (row <= n) {
    //     int col = 1;
    //     while (col <= n) {
    //         char ch = 'A' + row - 1;
    //         cout << ch << " ";
    //         col += 1;
    //     }
    //     cout << endl;
    //     row += 1;
    // }

    // int row = 1;
    // while (row <= n) {
    //     int col = 1;
    //     while (col <= n) {
    //         char ch = 'A' + col - 1;
    //         cout << ch << " ";
    //         col += 1;
    //     }
    //     cout << endl;
    //     row += 1;
    // }

    // int row = 1;
    // char ch = 'A';
    // while (row <= n) {
    //     int col = 1;
    //     while (col <= n) {
    //         cout << ch << " ";
    //         col += 1;
    //         ch += 1;
    //     }
    //     cout << endl;
    //     row += 1;
    // }

    int row = 1;
    char ch = 'A';
    while (row <= n) {
        int col = 1;
        while (col <= n) {
            char ch = 'A';
            cout << ch << " ";
            col += 1;
            ch += 1;
        }
        cout << endl;
        row += 1;
    }

}