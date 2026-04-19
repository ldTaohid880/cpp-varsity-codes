/**
Constructor
- Same as class name
- No return type
- Called automatically when an object is created.
- has to be public
- Inside or outside the class
*/

#include<iostream>
using namespace std;

class Example{
private:
    int x, y, z;
public:
    Example(); // constructor outside the class

    void display()
    {
        cout << "Display method called" << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
        cout << "x+y+z= " << x+y+z << endl;
    }

};

Example :: Example()
    {
        cout << "Constructor called" << endl;
        x = 10;
        y = 20;
        cout << "Enter a number: ";
        cin >> z;
    }

int main()
{
    Example obj1;
    obj1.display();

}
