/**
    types of constructors
    1. Default constructors (No parameters)
    2. Parameterized constructors
    3. Copy constructor

    Every class automatically has a default constructor.
    If the programmer adds a constructor, then they have to write a default constructor.
*/

#include<iostream>
using namespace std;

class Example{
private:
    int a, b;

public:
    Example()
    {
        cout << "Default constructor called" << endl;
        a = 1;
        b = 2;
    }

    Example(int x, int y)
    {
        cout << "Parameterized constructor called" << endl;
        a = x;
        b = y;
    }

    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl << endl;

    }
};

int main()
{
    Example obj1;
    obj1.display();

    Example obj2(10, 20);
    obj2.display();
}
