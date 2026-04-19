#include<iostream>
using namespace std;

class Student
{
    public:           //Access specifiers: public, private, protected
        int id;       //attribue
        string name;
        double gpa;

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "GPA: " << gpa << endl;
        cout << endl;
    }

};


int main()
{
    Student s1;     //Creating object
    s1.id = 1234;
    s1.name = "John";
    s1.gpa = 3.5;
    s1.display();

    Student s2;     //Creating object
    s2.id = 1233;
    s2.name = "Sam";
    s2.gpa = 3.5;
    s2.display();

    Student s3;     //Creating object
    s3.id = 1232;
    s3.name = "Maria";
    s3.gpa = 3.6;
    s3.display();
}
