#include <iostream>
using namespace std;

int main() {
    double operand1, operand2;
    char operation;

    cout<< "Simple Calculatorr" << endl;
    cout<< "Enter the first number: ";
    cin>> operand1;
    cout<< "Enter an operation (+, -, *, /): ";
    cin>> operation;
    cout<< "Enter the second number: ";
    cin>> operand2;

    switch (operation) {
        default:
            cout << "Invalid operation." << endl;
            break;
        case '+':
            cout<< "Result: "<< operand1 + operand2 <<endl;
            break;
        case '-':
            cout<< "Result: "<< operand1- operand2<<endl;
            break;
        case '*':
            cout<< "Result: " << operand1 * operand2 <<endl;
            break;
        case '/':
            if (operand2 != 0) {
                cout <<"Result: " << operand1 / operand2 <<endl;
            } else {
                cout<< " Number cannot divide by zero ." <<endl;
            }
            break;
         }
     return 0;
}
