#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char operation;

    cout << "Basic Calculator" << endl;

    // Please input two numbers and operation to be performed
    cout << "Enter first number : ";
    cin >> num1;

    cout << "Enter second number : ";
    cin >> num2;

    cout << "Select operation (+, -, *, /) : ";
    cin >> operation;

    // Perform the selected operation and display the result
    if(operation == '+')
    {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else if(operation == '-')
    {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }
    else if(operation == '*')
    {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
    else if(operation == '/')
    {
        if (num2 != 0)
        {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        else
        {
            cout << "A number can't be divided by zero." << endl;
        }
    }
    else
    {
        cout << "Invalid operation." << endl;
    }
    return 0;
}
