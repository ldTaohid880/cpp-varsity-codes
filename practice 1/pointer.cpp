#include <iostream>
using namespace std;


int main(){
    int a = 5;
    int &ref = a;
    int *ptr = &ref;

    cout 
    <<"\na: "<< a
    <<"\n&a: "<< &a
    <<"\n&ref: " << &ref 
    <<"\nref: " << ref
    <<"\n*ptr: " << *ptr
    <<"\n&ptr: " << &ptr
    <<"\nptr: " << ptr
    <<"\n" << endl;

    ref += 5;

    cout 
    <<"Updated"
    <<"\na: "<< a
    <<"\n&a: "<< &a
    <<"\n&ref: " << &ref 
    <<"\nref: " << ref
    <<"\n*ptr: " << *ptr
    <<"\n&ptr: " << &ptr
    <<"\nptr: " << ptr
    <<"\n" << endl;

    *ptr += 5;

    cout 
    <<"Updated"
    <<"\na: "<< a
    <<"\n&a: "<< &a
    <<"\n&ref: " << &ref 
    <<"\nref: " << ref
    <<"\n*ptr: " << *ptr
    <<"\n&ptr: " << &ptr
    <<"\nptr: " << ptr
    <<"\n" << endl;

    

    return 0;
}