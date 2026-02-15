/**
    Loops: while, for, do while loop.
*/

#include<iostream>

using namespace std;

int main()
{

//    int i = 0;
//    do {
//        cout << i  << endl;
//        i++;
//    }
//    while (i<0);
//
//    cout << "outside loop : " << i << endl;

//  Basic while loop
//    int n;
//    cout << "Enter the starting number" << endl;
//    cin >> n;
//    while(n <= 10){
//        cout << n << " ";
//        n++;
//    }


//
//    int m;
//    do{
//        cout << "Enter number: ";
//        cin >> m;
//        cout << "You have entered: " << m << endl;
//    } while(m!=0);
//    cout << "loop exited because you pressed 0" << endl;


//    for(int i=1, j=10; i<10; i++, j--){
//        cout << "i = " << i << "\tj = " << j << endl;
//
//    }

     //Loop break example
//    int n;
//    for(n=10; n>0; n--){
//        cout << n << endl;
//        if(n==3){
//            cout << "Exit Loop" << endl;
//            break;
//        }
//    }

    // Continue Loop example
    int n;
    for(n=10; n>0; n--){
        if(n==5) continue;
        cout << n << endl;

    }

}
