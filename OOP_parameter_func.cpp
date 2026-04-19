#include<iostream>
using namespace std;



class Student
{
    public:           //Access specifiers: public, private, protected
        int id;       //attribue
        string name;
        double gpa;

    void setValue(int x, string y, double z);
    void display();

};

void Student :: setValue(int x, string y, double z)
{   id = x;
    name = y;
    gpa = z;
}

void Student :: display()
{
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "GPA: " << gpa << endl;
        cout << endl;
}

int main()
{
    Student s1;     //Creating object
    s1.setValue(1234, "John", 3.5);
    s1.display();


    Student s2;     //Creating object
    s2.setValue(1233, "Sam", 3.5);
    s2.display();

    Student s3;     //Creating object
    s3.setValue(1232, "Maria", 3.6);
    s3.display();
}

