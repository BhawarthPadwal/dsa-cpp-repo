#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;
    int num = 2;
    bool isPrime = true;

    while (num < n) {
        if (n % num == 0) {
            isPrime = false;
            break;
        }
        num = num + 1;
    }

    if (isPrime) {
        cout << n << " is a Prime Number";
    }
    else {
        cout << n << " is not a Prime Number";
    }

}