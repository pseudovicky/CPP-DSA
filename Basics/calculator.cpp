#include <iostream>
#include <cmath> // Include cmath for mathematical functions like sqrt

using namespace std;

int main() {
    int a, b; // Declare variables outside switch statement

    cout << "Welcome to C++ Calculator!" << endl;
    cout << "This calculator supports basic arithmetic operations and more." << endl;
    cout << "Type 'help' to see available operations." << endl;
    cout << "You can exit at any time by typing 'exit'." << endl;
    cout << "Let's get started!" << endl;

    string operation;
    while (true) {
        cout << "Enter operation (add, subtract, multiply, divide, modulus, power, square, square_root, factorial, exit, help): ";
        cin >> operation;

        if (operation == "exit") {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        } else if (operation == "help") {
            cout << "Available operations:" << endl;
            cout << "1. add - Add two numbers" << endl;
            cout << "2. subtract - Subtract two numbers" << endl;
            cout << "3. multiply - Multiply two numbers" << endl;
            cout << "4. divide - Divide two numbers" << endl;
            cout << "5. modulus - Find modulus of two numbers" << endl;
            cout << "6. power - Calculate power of a number" << endl;
            cout << "7. square - Find square of a number" << endl;
            cout << "8. square_root - Find square root of a number" << endl;
            cout << "9. factorial - Find factorial of a number" << endl;
            cout << "10. exit - Exit the calculator" << endl;
            continue;
        }

        // Prompt for numbers based on operation
        cout << "Enter numbers: ";
        cin >> a >> b;

        // Perform operations based on user input
        if (operation == "add") {
            cout << "The sum is: " << a + b << endl;
        } else if (operation == "subtract") {
            cout << "The difference is: " << a - b << endl;
        } else if (operation == "multiply") {
            cout << "The product is: " << a * b << endl;
        } else if (operation == "divide") {
            if (b != 0) {
                cout << "The quotient is: " << a / b << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
        } else if (operation == "modulus") {
            if (b != 0) {
                cout << "The modulus is: " << a % b << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
        } else if (operation == "power") {
            int result = 1;
            for (int i = 0; i < b; i++) {
                result *= a;
            }
            cout << "The power is: " << result << endl;
        } else if (operation == "square") {
            cout << "The square is: " << a * a << endl;
        } else if (operation == "square_root") {
            if (a >= 0) {
                cout << "The square root is: " << sqrt(a) << endl;
            } else {
                cout << "Error: Cannot find square root of a negative number." << endl;
            }
        } else if (operation == "factorial") {
            int factorial = 1;
            for (int i = 1; i <= a; i++) {
                factorial *= i;
            }
            cout << "The factorial is: " << factorial << endl;
        } else {
            cout << "Invalid operation. Please try again." << endl;
            cout << "Type 'help' to see available operations." << endl;
        }
    }

    return 0;
}
