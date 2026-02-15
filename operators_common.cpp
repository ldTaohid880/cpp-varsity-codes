#include <iostream>
using namespace std;

int main()
{
    cout << "===== C++ OPERATORS DEMONSTRATION =====\n\n";

    // --------------------------------------------------
    // 1. ARITHMETIC OPERATORS
    // --------------------------------------------------
    cout << "1. Arithmetic Operators\n";

    int a = 10, b = 3;

    cout << "a + b = " << a + b << endl;   // Addition
    cout << "a - b = " << a - b << endl;   // Subtraction
    cout << "a * b = " << a * b << endl;   // Multiplication
    cout << "a / b = " << a / b << endl;   // Division
    cout << "a % b = " << a % b << endl;   // Modulus (remainder)

    cout << endl;

    // --------------------------------------------------
    // 2. RELATIONAL (COMPARISON) OPERATORS
    // --------------------------------------------------
    cout << "2. Relational Operators\n";

    cout << boolalpha;
    cout << "a == b : " << (a == b) << endl;   // Equal to
    cout << "a != b : " << (a != b) << endl;   // Not equal to
    cout << "a > b  : " << (a > b)  << endl;   // Greater than
    cout << "a < b  : " << (a < b)  << endl;   // Less than
    cout << "a >= b : " << (a >= b) << endl;   // Greater than or equal
    cout << "a <= b : " << (a <= b) << endl;   // Less than or equal
    cout << noboolalpha;

    cout << endl;

    // --------------------------------------------------
    // 3. LOGICAL OPERATORS
    // --------------------------------------------------
    cout << "3. Logical Operators\n";

    bool x = true, y = false;

    cout << "x && y = " << (x && y) << endl;   // Logical AND
    cout << "x || y = " << (x || y) << endl;   // Logical OR
    cout << "!x     = " << (!x) << endl;       // Logical NOT

    cout << endl;

    // --------------------------------------------------
    // 4. ASSIGNMENT OPERATORS
    // --------------------------------------------------
    cout << "4. Assignment Operators\n";

    int c = 5;

    c += 2;   // c = c + 2
    cout << "c += 2 -> " << c << endl;

    c -= 1;   // c = c - 1
    cout << "c -= 1 -> " << c << endl;

    c *= 3;   // c = c * 3
    cout << "c *= 3 -> " << c << endl;

    c /= 2;   // c = c / 2
    cout << "c /= 2 -> " << c << endl;

    c %= 3;   // c = c % 3
    cout << "c %= 3 -> " << c << endl;

    cout << endl;

    // --------------------------------------------------
    // 5. INCREMENT AND DECREMENT OPERATORS
    // --------------------------------------------------
    cout << "5. Increment and Decrement Operators\n";

    int d = 10;

    cout << "Initial value of d = " << d << endl;

    cout << "d++ = " << d++ << "  (post-increment)\n";
    cout << "Now d = " << d << endl;

    cout << "++d = " << ++d << "  (pre-increment)\n";

    cout << "d-- = " << d-- << "  (post-decrement)\n";
    cout << "Now d = " << d << endl;
    cout << "--d = " << --d << "  (pre-decrement)\n";

    cout << endl;

    // --------------------------------------------------
    // 6. CONDITIONAL (TERNARY) OPERATOR
    // --------------------------------------------------
    cout << "6. Ternary Operator\n";

    int num = 7;

    // Short form of if–else
    string result = (num % 2 == 0) ? "Even" : "Odd";

    cout << "Number " << num << " is " << result << endl;

    cout << endl;

    // --------------------------------------------------
    // 7. BITWISE OPERATORS
    // --------------------------------------------------
    cout << "7. Bitwise Operators\n";

    int p = 5;   // Binary: 0101
    int q = 3;   // Binary: 0011

    cout << "p & q  = " << (p & q) << endl;   // AND
    cout << "p | q  = " << (p | q) << endl;   // OR
    cout << "p ^ q  = " << (p ^ q) << endl;   // XOR
    cout << "~p     = " << (~p) << endl;      // NOT
    cout << "p << 1 = " << (p << 1) << endl;  // Left shift
    cout << "p >> 1 = " << (p >> 1) << endl;  // Right shift

    cout << endl;

    // --------------------------------------------------
    // 8. SIZEOF OPERATOR
    // --------------------------------------------------
    cout << "8. sizeof Operator\n";

    cout << "Size of int    = " << sizeof(int) << " bytes" << endl;
    cout << "Size of double = " << sizeof(double) << " bytes" << endl;
    cout << "Size of char   = " << sizeof(char) << " bytes" << endl;

    cout << endl;

    cout << "===== END OF PROGRAM =====\n";

    return 0;
}
