#include <iostream>
using namespace std;

int main()
{
    // ==============================
    // 1. NORMAL VARIABLE
    // ==============================
    int a = 10;

    // ==============================
    // 2. POINTER DECLARATION
    // A pointer stores the address of a variable
    // ==============================
    int *p;

    // ==============================
    // 3. POINTER INITIALIZATION
    // & is the address operator
    // ==============================
    p = &a;

    // ==============================
    // 4. DISPLAYING VALUES AND ADDRESSES
    // ==============================
    cout << "Value of a: " << a << endl;
    cout << "Address of a (&a): " << &a << endl;

    cout << "Value stored in pointer p (address): " << p << endl;
    cout << "Value at address p (*p): " << *p << endl;

    // ==============================
    // 5. MODIFYING VALUE USING POINTER
    // ==============================
    *p = 25;   // Changes value of a through pointer

    cout << "\nAfter modifying value using pointer:" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value at address p (*p): " << *p << endl;

    // ==============================
    // 6. POINTER WITH ANOTHER VARIABLE
    // ==============================
    int b = 50;
    p = &b;    // Pointer now points to b

    cout << "\nPointer now points to another variable:" << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value pointed by p (*p): " << *p << endl;


    return 0;
}
