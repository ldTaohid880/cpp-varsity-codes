/**
Creating the methods/functions inside the class and outside the class

scope resolution operator ::
*/


#include<iostream>
using namespace std;

class Student
{
    public:           //Access specifiers: public, private, protected
        int id;       //attribue
        string name;
        double gpa;

        void display();
//        {
//             cout << "ID: " << 1234 << endl;
//             cout << "Name: " << "John" << endl;
//             cout << "GPA: " << 3.5 << endl << endl;
//        }

};

void Student :: display()
{
    cout << "ID: " << 1234 << endl;
    cout << "Name: " << "John" << endl;
    cout << "GPA: " << 3.5 << endl << endl;
}


int main()
{
    Student s1;     //Creating object
    s1.display();

    Student s2;
    s2.display();
}



