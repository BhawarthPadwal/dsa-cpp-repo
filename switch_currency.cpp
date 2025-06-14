#include<iostream>

using namespace std;

int main() {

    int amount;
    int count_100, count_50, count_20, count_10, count_1;

    cout << " Enter the amount: ";
    cin >> amount;

    switch (1) {
        case 1:
        count_100 = amount/100;
        amount = amount % 100;
        cout << "No. of 100 rupees notes: " << count_100 << endl;

        case 2:
        count_50 = amount/50;
        amount = amount % 50;
        cout << "No. of 50 rupees notes: " << count_50 << endl;

        case 3:
        count_20 = amount/20;
        amount = amount % 20;
        cout << "No. of 20 rupees notes: " << count_20 << endl;

        case 4:
        count_10 = amount/10;
        amount = amount % 10;
        cout << "No. of 10 rupees notes: " << count_10 << endl;

        case 5:
        count_1 = amount/1;
        amount = amount % 1;
        cout << "No. of 1 rupees notes: " << count_1 << endl;

    }

}