/*
    Created by premal upadhyay
*/
#include<iostream>
#include<conio.h>

using namespace std;
//creating structure
struct a{

    int rollno;   //data member 1
    char name;     //data member 2



};

int main()
{
    struct a p;
    struct a *q;

    q = &p;

    p.rollno=62;
    q->name = 'premal';

    cout<<"\nname ="<<p.name;

    cout<<"\nroll-no ="<<q->rollno;

    return 0;
}
