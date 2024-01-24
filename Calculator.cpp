#include <iostream>
using namespace std;
int main()
 {
    char operation;
    double num1, num2;
    cout <<"Enter first number: ";
    cin >> num1;
    cout <<"Enter operation (+, -, *, /,%): ";
    cin >> operation;
    cout <<"Enter second number: ";
    cin >> num2;
    switch (operation)
     {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 <<endl;
            break;
        case '/':
            if (num2 != 0)
            {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } 
            else 
            {
                cout << "Error: Division by zero is undefined." << endl;
            }
            break;
        case '%':
                cout << num1 << " % " << num2 << " = " << int(num1) %int( num2) <<endl;
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            break;
    }
    return 0;
}
