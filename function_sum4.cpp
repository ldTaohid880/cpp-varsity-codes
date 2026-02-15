/**
Example of functions with arguments and no return value
*/

#include<iostream>
using namespace std;

void sum(int, int);

int main()
{
    int a, b;
    cout << "Enter two integers: " << endl;
    cin >> a >> b;
    sum(a, b);


}

void sum(int x, int y)
{
    int r;
    r = x + y;
    cout << "result = " << r << endl;
}


