#include<iostream>

using namespace std;

int main() {

    int num1;
    int num2;
    char op;

   while (true) {
     cout << "Enter first number: " << endl;
    cin >> num1;

    cout << "Enter second number: " << endl;
    cin >> num2;

    cout << "Enter operation(+,-,*,/,%): " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Sum of " << num1 << " & " << num2 << " is " << num1+num2 << endl;
        break;
    
    case '-':
        cout << "Subtraction of " << num1 << " & " << num2 << " is " << num1-num2 << endl;
        break;
    
    case '*':
        cout << "Product of " << num1 << " & " << num2 << " is " << num1*num2 << endl;
        break;
    
    case '/':
        cout << "Division of " << num1 << " & " << num2 << " is " << num1/num2 << endl;
        break;

    case '%':
        cout << "Modulo of " << num1 << " & " << num2 << " is " << num1%num2 << endl;
        break;
    
    default:
        exit;
    }
   }


}