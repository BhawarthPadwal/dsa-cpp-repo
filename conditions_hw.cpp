#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    // cout << ch << endl;
    if (ch >= 65 && ch <= 90) {
        cout << "Character is in uppercase." << endl;
    } 
    else if (ch >= 97 && ch <= 122) {
        cout << "Character is in lowercase." << endl;
    }
    else if (ch >= 48 && ch <= 57) {
        cout << "Character is a numeric value." << endl; 
    } 
    else {
        cout << "It is a special character." << endl;
    }
    
    
}