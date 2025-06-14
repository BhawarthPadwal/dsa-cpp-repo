#include<iostream>
using namespace std;
int main() {
    
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int row = 1;
    while (row <= n) {
        // space print kar 
        int space = row - 1;
        while (space) {
            cout << " ";
            space = space - 1;
        }
        // start print kr
        int star = n - row + 1;
        while (star) {
            cout << "*";
            star = star - 1;
        }
        cout << endl;
        row += 1;
    } 


    int row2 = 1;
    while (row2 <= n) {
        int space2 = row2 - 1;
        while (space2) {
            cout << " ";
            space2 = space2 - 1;
        }
        int star2 = n - row2 + 1;
        while (star2) {
            cout << row2;
            star2 = star2 - 1;
        }
        cout << endl;
        row2 += 1;
    }


}