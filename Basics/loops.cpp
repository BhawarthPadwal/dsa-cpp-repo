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
            cout << " * ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    cout << endl;
    int a = 1;
    while (a <= n) {
        int b = 1;
        while (b <= n) {
            cout << " " << a << " ";
            b += 1;
        }
        cout << endl;
        a += 1;
    }
}