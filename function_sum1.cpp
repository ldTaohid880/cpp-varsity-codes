/**
Example of functions with no argument and no return value
*/

#include<iostream>
using namespace std;

void sum();

int main()
{
    sum();

}

void sum()
{
    int x, y, r;
    cout << "Enter two integers: " << endl;
    cin >> x >> y;
    r = x + y;
    cout << x << " + " << y << " = " << r << endl;
}
