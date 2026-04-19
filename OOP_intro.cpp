/**
OOP
Class:
Object:
Attribute:
Method:
Access specifier: public, private, protected


object: attributes(variable), methods(function), constructor, destructor
class: shape
shape1: Length 2cm..... length 2.5cm
shape2: length 2cm X breadth 1cm

*/

#include<iostream>
using namespace std;


class Student{
    public:
        int id;       //attribute
        string name;
        double gpa;
        double height;
        string gender;
        string NameOffather;
        string sectionName;
};


int main()
{
    Student s1;     //Creating object
    s1.id = 1234;
    s1.name = "John";
    s1.gpa = 3.5;
    s1.height = 5.5;
    s1.gender = "Male";


    cout << "ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "GPA: " << s1.gpa << endl;
    cout << "Height: " << s1.height << endl;

}

