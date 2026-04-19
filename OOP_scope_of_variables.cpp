/**
Scope of Variables:
Variable scope isa region/area in a program where a variable is declared and used.

There are two types of variable scopes:
Local Variables and Global Variables.

Local Variables:
- These are declared inside a function or a block.
- These cannot be accessed outside the function or a block.
- Anything between '{' and '}' is a block.
- Local variable can either be a variable which is declared in the body of
  that function or can be defined as function parameters in the function
  defination.

Global Variables:
- These are usually declared outside of all the functions.
- These can be accessed from any function or block of the program.

*/


#include<iostream>
using namespace std;

void fun1();
void fun2();
void fun3(int x);
void fun4(int x, int y);

int x = 100;


int main()
{

    int x = 10;
    cout << x << endl;
    cout << ::x << endl;


    fun1();
    fun2();
    fun3(200);
    fun4(4, 5);

}

void fun1()
{
    cout << "function 1: " << x << endl;
}

void fun2()
{
    int x = 200;
    cout << "function 2: " << x << endl;
}

void fun3(int x)
{
    cout << "function 3: " << x << endl;
}

void fun4(int x, int y)
{
    cout << "function 4: " << x << " " << y << endl;
}
