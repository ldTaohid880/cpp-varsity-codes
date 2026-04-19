/**
    Constructor Overloading
    - Multiple constructor in the same class
    - Same name with different parameters

*/

#include<iostream>
using namespace std;

class Example{
private:
    int a, b;
    string name;

public:
    // default constructor
    Example(){
        cout << "Default constructor" << endl;

    }

    // constructor with one parameter
    Example(int x){
        cout << "constructor with one parameter" << endl;
        a = x;
        b = x;
    }

    Example(string s){
        cout << "constructor with one parameter (string)" << endl;
        name = s;
    }

    // constructor with two parameter
    Example(int x, int y){
        cout << "constructor with two parameters" << endl;
        a = x;
        b = y;
    }

    void getValue()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    void getName()
    {
        cout << "Name = " << name << endl;
    }

};



int main()
{
    Example obj1;
    Example obj2(2);
    obj2.getValue();

    Example obj3(4,5);
    obj3.getValue();

    Example obj4("John");
    obj4.getName();

}
