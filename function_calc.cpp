/**
Example of a basic calculator
*/

#include<iostream>
using namespace std;

int sum(int, int);
int sub(int, int);
int mul(int, int);
float divide(int , int);


int main()
{
    int a, b;
    cout << "Enter two integers: " << endl;
    cin >> a >> b;

    cout << "sum = " << sum(a, b) << endl;
    cout << "sub = " << sub(a, b) << endl;
    cout << "mul = " << mul(a, b) << endl;
    cout << "div = " << divide(a, b) << endl;

}

int sum(int x, int y)
{
    int r;
    r = x + y;
    return r;
}

int sub(int x, int y)
{
    int r;
    r = x - y;
    return r;
}

int mul(int x, int y)
{
    int r;
    r = x * y;
    return r;
}

float divide(int x, int y)
{
    float r;
    r = (float)x/y;
    return r;
}
