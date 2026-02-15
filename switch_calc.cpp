#include <iostream>
using namespace std;

int main()
{
    int a, b, res;
    cout << "Enter two numbers: \n";
    cin >> a >> b;

    char choice;

    cout << "Enter a choice:";
    cin >> choice;

    switch(choice)
    {
    case '+':
        res = a + b;
        cout << res;
        break;
    case '-':
        res = a - b;
        cout << res;
        break;
    case '*' :
        res = a * b;
        cout << res;
        break;
    case '/':
        res = a / b;
        cout << res;
        break;
    default:
        cout << "Invalid Argument.\n";
    }


}
