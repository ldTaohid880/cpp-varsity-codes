/**
Multiple objects
*/

#include<iostream>
using namespace std;

class Student
{
    public:           //Access specifiers: public, private, protected
        int id;       //attribue
        string name;
        double gpa;

};


int main()
{
    Student s1;     //Creating object
    s1.id = 1234;
    s1.name = "John";
    s1.gpa = 3.5;

    Student s2;
    s2.id = 1233;
    s2.name = "Sam";
    s2.gpa = 3.3;

    Student s3;
    s3.id = 1232;
    s3.name = "Maria";
    s3.gpa = 3.3;

    cout << "ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "GPA: " << s1.gpa << endl << endl;

    cout << "ID: " << s2.id << endl;
    cout << "Name: " << s2.name << endl;
    cout << "GPA: " << s2.gpa << endl << endl;

    cout << "ID: " << s3.id << endl;
    cout << "Name: " << s3.name << endl;
    cout << "GPA: " << s3.gpa << endl << endl;

}
