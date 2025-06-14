#include<iostream>
using namespace std;
int main() {
    
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int row = 1;
    int value = 1;
    while (row <= n) {
        int space = n - row;
        while (space) {
            cout << " ";
            space = space - 1;
        }
        int col = 1;
        while (col <= row) {
            cout << value;
            value += 1;
            col += 1;
        }
        cout << endl;
        row += 1;
    }

}