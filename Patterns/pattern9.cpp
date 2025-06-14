#include<iostream>
using namespace std;
int main() {
    
    int n;
    cout << "Enter a number: ";
    cin >> n; 

    int row = 1;
    while (row <= n) {
        // space print kar
        int space = n - row;
        while (space) {
            cout << " ";
            space = space - 1;
        }
        // star print kar
        int col = 1;
        while (col <= row) {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;

    }

    int row2 = 1;
    while (row2 <= n) {
        int space2 = n - row2;
        while (space2) {
            cout << " ";
            space2 = space2 - 1;
        }
        int star2 = 1;
        while (star2 <= row2) {
            cout << row2;
            star2 = star2 + 1;
        }
        cout << endl;
        row2 += 1;
    }
}