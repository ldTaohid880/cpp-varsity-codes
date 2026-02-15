/**
Example of functions with arguments and a return value
*/

#include<iostream>
using namespace std;

int sum(int, int);

int main()
{
    int a, b;
    cout << "Enter two integers: " << endl;
    cin >> a >> b;
    int result = sum(a, b);
    cout << "result = " << result << endl;

}

int sum(int x, int y)
{
    int r;
    r = x + y;
    return r;
}

