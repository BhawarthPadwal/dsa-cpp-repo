#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // int row = 1;
    // while (row <= n) {
    //     int col = 1;
    //     int value = row;
    //     while (col <= row) {
    //         cout << value << " ";
    //         value += 1;
    //         col += 1;
    //     }
    //     cout << endl;
    //     row += 1;
    // }

    int row = 1;
    while (row <= n) {
        int col = row;
        while (col < 2*row) {
            cout << col << " ";
            col += 1;
        }
        cout << endl;
        row += 1;
    }

}