#include<iostream>
using namespace std;
int main() {
    
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int row = 1;
    while (row <= n) {
        int col = n;
        while (col >= row) {
            cout << "*";
            col -= 1;
        }
        cout << endl;
        row += 1;
    }

}