#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << j << " ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    // method 1
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // int i = 1;
    // while (i <= n) {
    //     int j = 1;
    //     while (j <= n) {
    //         cout << n - j + 1 << " "; // using formula
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // method 2
    // for  4 3 2 1 pattern
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // int i = 1;
    // while (i <= n) {
    //     int j = n;
    //     while (j >= 1) {
    //         cout << j << " ";
    //         j -= 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }
}