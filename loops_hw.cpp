#include<iostream>
using namespace std;
int main() {

    // Sum of Even Numbers
    // int i = 2;
    // int sum = 0;
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // while (i <= n) {
    //     cout << i << " ";
    //     sum += i;
    //     i += 2;
    // }
    // cout << "\nSum: " << sum;

    // Prime Nos
    int i = 2;
    int sum = 0;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    while (i < n) {
        if (n % i == 0) {
            cout << "Not prime for " << i << endl;
        } 
        else {
            cout << "Prime for " << i << endl;
        }
        i += 1;
        
    }
}