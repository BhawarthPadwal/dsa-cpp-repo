#include<iostream>

using namespace  std;

// AP= (3*n)+7

int fibonacciNum(int num) {
    int a = 0;
    int b = 1;
    int nextNum;
    cout << a << " "<< b << " ";
    for (int i = 1; i <= num-2; i++) {
        nextNum = a + b;
        cout << nextNum << " ";
        a = b;
        b = nextNum;
    }

    return nextNum;

}

int setBitCount(int num) {
    int count = 0;
    while (num != 0) {
        if (num&1) {
            count += 1;
        }
        num = num >> 1;
    }
    return count;

}

int setBitsOfTwoNos(int a, int b) {
    int setBitsInA = setBitCount(a);
    int setBitsInB = setBitCount(b);
    int total = setBitsInA + setBitsInB;
    return total;
}

int apOfNum(int num) {

    int ap = 0;

    for (int i = 1; i <= num; i++) {
        ap = (3*i) + 7;
        cout << ap << endl;
    }
    cout << endl;

    return ap;
}

int main() {

    // int n;

    // cout << "Enter a number: ";
    // cin >> n;

    // int lastTerm = apOfNum(n);

    // cout << n << "th term is " <<lastTerm;

    // int a,b;

    // cout << "Enter two numbers: ";
    // cin >> a >> b;

    // int count = setBitsOfTwoNos(a,b);

    // cout << "Total count of set bits of a & b are " << count;

    int num;

    cout << "Enter the number: ";
    cin >> num;

    int ans = fibonacciNum(num);

    cout << endl;
    cout << num << "th term of fibonacci series is " << ans;

    return 0;
}