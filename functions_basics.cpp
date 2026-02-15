#include <iostream>
using namespace std;

// --------------------------------------------------
// FUNCTION DECLARATION (Function Prototype)
// Tells the compiler that these functions exist
// --------------------------------------------------
int add(int a, int b);          // Function with return value
void displayMessage();         // Void function (no return value)
int square(int x);             // Function with one parameter

int main()
{
    cout << "===== FUNCTIONS IN C++ DEMONSTRATION =====\n\n";

    // --------------------------------------------------
    // Calling a void function
    // --------------------------------------------------
    displayMessage();

    cout << endl;

    // --------------------------------------------------
    // Calling a function with parameters and return value
    // --------------------------------------------------
    int num1 = 5, num2 = 3;

    int sum = add(num1, num2);   // Function call with arguments

    cout << "Sum returned from function = " << sum << endl;

    cout << endl;

    // --------------------------------------------------
    // Calling another function
    // --------------------------------------------------
    int value = 4;
    int result = square(value);

    cout << "Square of " << value << " = " << result << endl;

    cout << endl;

    cout << "===== END OF PROGRAM =====\n";

    return 0;
}

// --------------------------------------------------
// FUNCTION DEFINITIONS
// --------------------------------------------------

// This function takes two integers as input
// Adds them and returns the result
int add(int a, int b)
{
    int total = a + b;
    return total;   // Returning value to the calling function
}

// This function does not return anything
// It only prints a message
void displayMessage()
{
    cout << "This is a void function." << endl;
    cout << "It does not return any value." << endl;
}

// This function takes one parameter and returns its square
int square(int x)
{
    return x * x;
}

