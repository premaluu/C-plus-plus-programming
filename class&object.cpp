/*
    Created by premal upadhyay
*/
//simple class program and object
#include <iostream>

using namespace std;

class student
{
    public:
    long int a;
    char name[20];
    char dept[20];



};

int main()
{
    class student o1,o2; //object create(declaration)

    cout<<"\nstudent 1 details\n";
    cout<<"\nenter student name\n";
    cin>>o1.name;
    cout<<"\nenter the enroolment no\n";

    cin>>o1.a;

    cout<<endl<<"enter department name\n";
    cin>>o1.dept;

    cout<<"\nstudent 2 details\n";

    cout<<"\nenter student name\n";
    cin>>o2.name;

    cout<<"\nenter the enrolment no.\n";
    cin>>o2.a;

    cout<<endl<<"\nenter department name\n";
    cin>>o2.dept;


    cout<<"\nstudent 1 details\n";

    cout<<"\nname:"<<o1.name;

    cout<<"\ndepartment:\n"<<o1.dept;

    cout<<"\nenrollment no:\n"<<o1.a;

    cout<<"\nstudent 2 details:\n";

    cout<<"\nstudent name\n"<<o2.name;

    cout<<"\ndepartment name:\n"<<o2.dept;

    cout<<"\nenrollment no:\n"<<o2.a;
    return 0;
}
