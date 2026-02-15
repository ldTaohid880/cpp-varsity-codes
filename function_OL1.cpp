#include<iostream>
using namespace std;

void menu();
int maximum(int, int);
int maximum(int, int, int);
int maximum(int, int, int, int);

int main()
{
    int choice, a, b, c, d;

    menu();
    cout << "Enter your choice: " << endl;
    cin >> choice;

    switch(choice)
    {
    case 1:
        cout << "Enter two integers to compare: " << endl;
        cin >> a >> b;
        cout << "Maximum number: " << maximum(a, b) << endl;
        break;
    case 2:
        cout << "Enter three integers to compare: " << endl;
        cin >> a >> b >> c;
        cout << "Maximum number: " << maximum(a, b, c) << endl;
        break;
    case 3:
        cout << "Enter four integers to compare: " << endl;
        cin >> a >> b >> c >> d;
        cout << "Maximum number: " << maximum(a, b, c, d) << endl;
        break;
    default:
        cout << "Invalid Choice." << endl;
    }

}

void menu()
{
    cout << "-------------------- MENU ----------------------------" << endl;
    cout << "1. Finds the maximum value between 2 numbers. " << endl;
    cout << "2. Finds the maximum value between 3 numbers. " << endl;
    cout << "3. Finds the maximum value between 4 numbers. " << endl;
    cout << endl;
}

int maximum(int x, int y)
{
    int m = (x>y) ? x : y;
    return m;
}

int maximum(int x, int y, int z)
{
    int m = (x>y && x>z) ? x :
            (y>z) ? y : z;
    return m;
}

int maximum(int x, int y, int z, int w)
{
    int m = (x>y && x>z && x>w) ? x :
            (y>z && y>w) ? y :
            (z>w) ? z : w;
    return m;
}
