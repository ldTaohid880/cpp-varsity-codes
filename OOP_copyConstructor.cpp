/**
    A copy constructor is a function used to copy data from one object to another object
    It is used when a new object is created from an existing object
    Two types:
    - Defualt copy constructor
    - User defined copy constructor
*/

#include<iostream>
using namespace std;

class Example{
private:
    int a, b;

public:
    Example(){
        cout << "Default constructor" << endl;
        a = b = 0;
    }
    Example(int x)
    {
        cout << "Parameterized constructor" << endl;
        a = x;
        b = x;
    }
    Example(int x, int y){
        cout << "constructor with two parameters" << endl;
        a = x;
        b = y;
    }
    Example(Example &object){
        cout << "Copy constructor" << endl;
        a = object.a;
        b = object.b;
    }

    void getValue()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl << endl;
    }
};

int main()
{
    Example obj1;
    obj1.getValue();

    Example obj2(2);
    obj2.getValue();
//
    Example obj3(obj1);
    obj3.getValue();
//
    Example obj4 = obj2;
    obj4.getValue();
}
