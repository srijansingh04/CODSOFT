# Calculator

A menu-driven console calculator developed in C++ as part of the CodSoft C++ Programming Internship. The application performs basic arithmetic operations with input validation and error handling.

## Features

- Addition, Subtraction, Multiplication, Division
- Modulus (remainder) operation
- Square Root calculation
- Input validation for user choices and numbers
- Error handling for invalid operations (like division by zero)
- Menu-driven interface

## How to Compile

### On Linux/macOS:
```bash
g++ -std=c++17 main.cpp -o calculator
```

### On Windows (with MinGW):
```bash
g++ -std=c++17 main.cpp -o calculator
```

## How to Run

### Linux/macOS:
```bash
./calculator
```

### Windows:
```bash
calculator.exe
```

## How to Use

1. The program shows a menu with 7 options
2. Enter the number corresponding to the operation you want
3. Enter the required numbers when prompted
4. The result is displayed
5. You can perform another calculation or exit

### Example:
```
--- Calculator Menu ---
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Square Root
7. Exit

Enter your choice (1-7): 1
Enter first number: 10
Enter second number: 5

Result: 10 + 5 = 15

Do you want to perform another calculation? (y/n): n
Thank you for using the calculator. Goodbye!
```

## Code Structure

- `main()` - Main program loop that handles user input and menu choices
- `displayMenu()` - Shows the calculator menu
- `add()`, `subtract()`, `multiply()`, `divide()` - Basic arithmetic operations
- `squareRoot()` - Calculates square root of a number

## Error Handling

The calculator handles several error cases:
- Invalid menu choice (must be 1-7)
- Non-numeric input
- Division by zero
- Negative numbers in square root
- Modulus with zero

## Requirements

- C++17 compatible compiler
- GCC, Clang, or MSVC
- Windows, Linux, or macOS

## Future Improvements

- Add scientific calculator functions.
- Store calculation history.
- Improve the user interface.

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Author

Developed by Srijan Singh as part of the CodSoft C++ Programming Internship.
