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
            cout << row << " ";
            col += 1;
        }
        cout << endl;
        row += 1;
    }

}