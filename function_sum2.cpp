/**
Example of functions with no argument and a return value
*/

#include<iostream>
using namespace std;

int sum();

int main()
{
    int result = sum();
    cout << "result = " << result << endl;

}

int sum()
{
    int x, y, r;
    cout << "Enter two integers: " << endl;
    cin >> x >> y;
    r = x + y;
    return r;
}
