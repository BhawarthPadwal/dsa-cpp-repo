#include<iostream>
using namespace std;
int main() {
    
    int n;
    cout << "Enter a number: ";
    cin >> n;
 
    int row = 1;
    while (row <= n) {
        int space = row - 1;
        while (space) {
            cout << " ";
            space -= 1;
        }
        int col = 1;
        int num = n - row + 1;
        while (num) {
            cout << col;
            num = num - 1;
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    int row2 = 1;
    int value = 1;
    while (row2 <= n) {
        int space2 = row2 - 1;
        while (space2) {
            cout << " ";
            space2 -= 1;
        }
        int num2 = n - row2 + 1;
        while (num2) {
            cout << value;
            num2 = num2 - 1;
            value += 1;
        }
        cout << endl;
        row2 += 1;
    }

}