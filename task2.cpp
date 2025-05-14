#include <iostream>
using namespace std;

int main() {
    double a, b, result;
    char op;

    cout << "Hey! Welcome to my calculator :)" << endl;

    // Getting user input
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    // Using switch-case to decide operation
    switch(op) {
        case '+':
            result = a + b;
            cout << "Result = " << result << endl;
            break;

        case '-':
            result = a - b;
            cout << "Result = " << result << endl;
            break;

        case '*':
            result = a * b;
            cout << "Result = " << result << endl;
            break;

        case '/':
            if(b == 0) {
                cout << "Can't divide by zero!" << endl;
            } else {
                result = a / b;
                cout << "Result = " << result << endl;
            }
            break;

        default:
            cout << "Hmm... I don't recognize that operator." << endl;
    }

    return 0;
}