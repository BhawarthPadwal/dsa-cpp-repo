#include<iostream>

using namespace std;

bool isPrimeOrNot(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        } else {
            return 1;
        }
    }
}

bool isEven(int num) {
    if (num % 2 == 0) { // Alternative condition: if (num&1)
        return true;
    } else {
        return false;
    }
}

int fact(int num) {
    if (num == 0) {
        return 1;
    }
    int ans = 1;
    for(int i = 1; i <= num; i++) {
        ans = ans * i;
    }
    return ans;
}

int nCr(int n, int r) {
    int ans = fact(n) / (fact(r) * fact(n-r));
    return ans;
}

int main() {

    // int a;
    // cin >> a;
    
    // if (isEven(a)) {
    //     cout << a << " is a EVEN Number" << endl;
    // } else {
    //     cout << a << " is a ODD Number" << endl;
    // }

    // int n, r;
    // cin >> n >> r;

    // cout << "nCr of " << n << "C" << r << " is " << nCr(n,r);
    // // cout << fact(n);

    int num;
    cin >> num;
    cout << isPrimeOrNot(num);

    return 0;
}