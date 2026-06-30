#include <iostream>
#include <cmath>

using namespace std;

// Function prototypes
void displayMenu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double squareRoot(double num);

// Main program
int main() {
    int choice;
    double num1, num2, result;
    char continueProgram;

   cout << "\n=== Calculator ===" << endl;

    do {
        displayMenu();
        
        cout << "\nEnter your choice (1-7): ";
        cin >> choice;

        // Validate menu input
        if (cin.fail() || choice < 1 || choice > 7) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input! Please enter a number between 1 and 7.\n";
            continue;
        }

        cin.ignore(10000, '\n'); // Clear input buffer

        if (choice == 7) {
            cout << "Thank you for using the calculator. Goodbye!" << endl;
            break;
        }

        // Get first number
        cout << "Enter first number: ";
        cin >> num1;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input! Please enter a valid number.\n";
            continue;
        }

        // Get second number (not needed for square root)
        if (choice != 6) {
            cout << "Enter second number: ";
            cin >> num2;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Invalid input! Please enter a valid number.\n";
                continue;
            }
        }

        cin.ignore(10000, '\n');

        // Perform calculation
        switch (choice) {
            case 1:
                result = add(num1, num2);
                cout << "\nResult: " << num1 << " + " << num2 << " = " << result << endl;
                break;
            case 2:
                result = subtract(num1, num2);
                cout << "\nResult: " << num1 << " - " << num2 << " = " << result << endl;
                break;
            case 3:
                result = multiply(num1, num2);
                cout << "\nResult: " << num1 << " * " << num2 << " = " << result << endl;
                break;
            case 4:
                if (num2 == 0) {
                    cout << "\nError: Cannot divide by zero!" << endl;
                } else {
                    result = divide(num1, num2);
                    cout << "\nResult: " << num1 << " / " << num2 << " = " << result << endl;
                }
                break;
            case 5:
                if (num2 == 0) {
                    cout << "\nError: Cannot perform modulus with zero!" << endl;
                } else {
                    int a = (int)num1;
                    int b = (int)num2;
                    cout << "\nResult: " << a << " % " << b << " = " << (a % b) << endl;
                }
                break;
            case 6:
                if (num1 < 0) {
                    cout << "\nError: Cannot calculate square root of negative number!" << endl;
                } else {
                    result = squareRoot(num1);
                    cout << "\nResult: sqrt(" << num1 << ") = " << result << endl;
                }
                break;
        }

        // Ask to continue
        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> continueProgram;

        if (continueProgram != 'y' && continueProgram != 'Y') {
            cout << "Thank you for using the calculator. Goodbye!" << endl;
            break;
        }

        cout << endl;

    } while (true);

    return 0;
}

// Display menu options
void displayMenu() {
    cout << "\n--- Calculator Menu ---" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulus" << endl;
    cout << "6. Square Root" << endl;
    cout << "7. Exit" << endl;
}

// Addition operation
double add(double a, double b) {
    return a + b;
}

// Subtraction operation
double subtract(double a, double b) {
    return a - b;
}

// Multiplication operation
double multiply(double a, double b) {
    return a * b;
}

// Division operation
double divide(double a, double b) {
    return a / b;
}

// Square root operation
double squareRoot(double num) {
    return sqrt(num);
}
