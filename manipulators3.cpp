#include <iostream>
#include <iomanip>   // Required for manipulators
using namespace std;

int main()
{
    cout << "=== WIDTH AND ALIGNMENT (setw, left, right) ===" << endl;

    int a = 10, b = 200, c = 3000;

    // setw(10) reserves 10 spaces for the output
    // right alignment is default
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    cout << setw(20) << a << endl;
    cout << setw(10) << b << endl;
    cout << setw(10) << c << endl;

    cout << endl;

    // left alignment
    cout << left;
    cout << setw(10) << a << endl;
    cout << setw(10) << b << endl;
    cout << setw(10) << c << endl;

    cout << endl;

    // Fill empty spaces with '*'
    cout << left;
    cout << setfill('*');
    cout << setw(10) << a << endl;

    // Reset fill character back to space
    cout << setfill(' ');

    cout << "\n=== FLOATING POINT PRECISION ===" << endl;

    double x = 123.456789;

    // Default output
    cout << "Default: " << x << endl;

    // setprecision without fixed -> total digits
    cout << "setprecision(5): " << setprecision(4) << x << endl;
    cout << "setprecision(9): " << setprecision(9) << x << endl;

    // fixed + setprecision -> digits after decimal point
    cout << fixed;
    cout << "fixed + setprecision(4): " << setprecision(4) << x << endl;

    cout << "\n=== BOOLEAN OUTPUT (boolalpha) ===" << endl;

    bool flag = true;


    // Default: prints 1 or 0
    cout << "Default bool: " << flag << endl;
    flag = true;
    cout << "Default bool: " << flag << endl;

    // boolalpha prints true/false
    cout << boolalpha;
    cout << "With boolalpha: " << flag << endl;


    // Turn off boolalpha
    cout << noboolalpha;

    cout << "\n=== NUMBER SYSTEMS (dec, hex, oct) ===" << endl;

    int num = 100;

    cout << "Decimal: " << dec << num << endl;
    cout << "Hexadecimal: " << hex << num << endl;
    cout << "Octal: " << oct << num << endl;

    // Show base prefixes (0x, 0)
    cout << showbase;
    cout << "Hex with base: " << hex << num << endl;
    cout << "Octal with base: " << oct << num << endl;

    // Back to decimal
    cout << dec << noshowbase;

    cout << "\n=== SIGN AND CASE FORMAT ===" << endl;

    int p = 50;

    // Show + sign for positive numbers
    cout << showpos;
    cout << p << endl;

    // Uppercase hexadecimal letters
    cout << uppercase;
    cout << hex << 255 << endl;

    // Reset settings
    cout << noshowpos << nouppercase << dec;

    cout << "\n=== PROGRAM END ===" << endl;

    return 0;
}

