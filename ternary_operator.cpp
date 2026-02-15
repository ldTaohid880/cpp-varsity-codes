
#include <iostream>
using namespace std;

int main()
{
    int a , b , c;
    cout << "Enter two numbers " << endl;
    cin >> a >> b;


    if(a>b)
        cout << a;
    else
        cout << b;

    int larger = a>b ? a : b ;
    cout << larger;


}
