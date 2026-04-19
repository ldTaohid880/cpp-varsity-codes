#include <iostream>
using namespace std;

/*
    A recursive function is a function that calls itself.

    Every recursive function must have:
    1. Base Case  -> Condition to STOP recursion
    2. Recursive Case -> Function calling itself
*/

// ==========================================
// Example 1: Factorial using Recursion
// ==========================================

int factorial(int n)
{
    // BASE CASE
    // When n is 0 or 1, factorial is 1
    if(n == 0 || n == 1)
    {
        return 1;
    }

    // RECURSIVE CASE
    // Function calls itself
    return n * factorial(n - 1);
}


// ==========================================
// Example 2: Sum of first n natural numbers
// ==========================================

int sum(int n)
{
    // BASE CASE
    if(n == 1)
    {
        return 1;
    }

    // RECURSIVE CASE
    return n + sum(n - 1);
}


// ==========================================
// Example 3: Printing numbers (Tracing Recursion)
// ==========================================

void printNumbers(int n)
{
    // BASE CASE
    if(n == 0)
        return;

    cout << n << " ";

    // RECURSIVE CASE
    printNumbers(n - 1);
}


int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // ==============================
    // Factorial
    // ==============================
    cout << "\nFactorial of " << num << " is: "
         << factorial(num) << endl;

    // ==============================
    // Sum
    // ==============================
    cout << "Sum of first " << num << " natural numbers is: "
         << sum(num) << endl;

    // ==============================
    // Printing numbers
    // ==============================
    cout << "Printing numbers from " << num << " to 1: ";
    printNumbers(num);

    cout << endl;

    return 0;
}
