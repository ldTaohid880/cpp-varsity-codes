#include<iostream>
using namespace std;

int mul(int x = 2, int y = 3);
void city (string c = "Dhaka");

int main()
{
    cout << mul() << endl;
    cout << mul(10) << endl;
    cout << mul(10, 20) << endl;

    city();
    city("Cumilla");
}

int mul(int x, int y)
{
    return x * y;
}

void city (string c)
{
    cout << "I am from " << c << endl;
}
